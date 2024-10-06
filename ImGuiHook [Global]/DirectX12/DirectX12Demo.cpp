
#include "includes.h"
#include <thread>
#include <fstream>
#include "pch.h"


bool CheckPointers()
{
	GEngine = SDK::UEngine::GetEngine();
	if (GEngine)
	{
		GWorld = SDK::UWorld::GetWorld();
		if (GWorld)
		{
			if (GWorld->Name.ToString() != "Lobby_P" && GWorld->Name.ToString() != "Level_Transition")
			{
				if (GWorld->OwningGameInstance)
				{
					if (GWorld->OwningGameInstance->LocalPlayers)
					{
						if (GWorld->OwningGameInstance->LocalPlayers[0])
						{
							if (GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController)
							{
								ZeroGUI::SetController(GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController);
								if (GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController->IsA(SDK::AM1PlayerController::StaticClass()))
								{
									SDK::AM1PlayerController* PC = static_cast<SDK::AM1PlayerController*>(GWorld->OwningGameInstance->LocalPlayers[0]->PlayerController);
									if (PC)
									{
										if (PC->ActorManager_Subsystem)
										{
											PlayerController = PC;
											LocalPlayer = GWorld->OwningGameInstance->LocalPlayers[0];
											Actors = PC->ActorManager_Subsystem;

											if (PlayerController->IsA(SDK::AM1PlayerControllerInGame::StaticClass()))
											{
												PlayerIngameController = static_cast<SDK::AM1PlayerControllerInGame*>(PlayerController);
												inGame = true;
											}
											else
												inGame = false;

											if (PlayerController->Character)
											{
												if (PlayerController->Character->IsA(SDK::AM1Player::StaticClass()))
												{
													LocalCharacter = static_cast<SDK::AM1Player*>(PlayerController->Character);
													return true;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool WorldToScreen(const SDK::FVector& worldLoc, SDK::FVector2D* screenPos)
{
	//bool isOnScreen = LocalPlayer->PlayerController->ProjectWorldLocationToScreen(worldLoc, screenPos, true);
	//if (isOnScreen && ZeroGUI::canvas->SizeX > 1920)
	//{
	//	screenPos->X *= (1920.0f / ZeroGUI::canvas->SizeX);
	//	screenPos->Y *= (1080.0f / ZeroGUI::canvas->SizeY);
	//}
	bool isOnScreen = SDK::UGameplayStatics::ProjectWorldToScreen(PlayerController, worldLoc, screenPos, true);
	//if(isOnScreen &&
	return isOnScreen;
}

static __int64 YourHookProc(void* self, void* Canvas)
{
	if (Canvas)
	{
		if (!isGUIInit)
		{
			ZeroMemory(g_Controllers, sizeof(CONTROLLER_STATE) * 4);
			CheckPointers();
			SDK::UCanvas* myCanvas = static_cast<SDK::UCanvas*>(Canvas);
			if (myCanvas->SizeX != lastScreenSize)
			{
				updateMiddle = true;
				lastScreenSize = myCanvas->SizeX;
			}
			ZeroGUI::CurrentFont = GEngine->SmallFont;
			ZeroGUI::SetupCanvas(myCanvas, GEngine);

			if (cfg_CacheEnemyNames)
			{
				IDNameMap = ReadEnemyNamesData();
			}

			if (cfg_CacheEnemyBones)
			{
				IDBoneMap = ReadEnemyBonesData();
			}

			if (cfg_AimbotNoSpread)
			{
				DWORD old;
				VirtualProtect(NoSpreadAddress, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &old);
				memcpy(NoSpreadAddress, &NoSpreadCheat, sizeof(uint8_t));
				VirtualProtect(NoSpreadAddress, sizeof(uint8_t), old, NULL);
			}


			isGUIInit = true;
		}

		if (updateMiddle)
		{
			SDK::UCanvas* myCanvas = static_cast<SDK::UCanvas*>(Canvas);
			float aspectRatioX = myCanvas->SizeX / myCanvas->ClipX;
			float aspectRatioY = myCanvas->SizeY / myCanvas->ClipY;

			ScreenMiddle.X = (myCanvas->SizeX / 2.0f) / aspectRatioX;
			ScreenMiddle.Y = (myCanvas->SizeY / 2.0f) / aspectRatioY;
			updateMiddle = false;
		}
		//ZeroGUI::Input::Handle();
		if (IsKeyPressed(VK_INSERT))
		{
			cfg_DrawMenu = !cfg_DrawMenu;
			if (!cfg_DrawMenu)
				SaveCFG();
		}

		if (cfg_DrawMenu)
		{
			DrawMenu();
		}

		//if (cfg_AimbotController)
		UpdateControllerState();


		if (CheckPointers())
		{
			int State = -1;
			if (GWorld && GWorld->OwningGameInstance && GWorld->OwningGameInstance->IsA(SDK::UM1GameInstance::StaticClass()))
			{
				SDK::UM1GameInstance* instance = static_cast<SDK::UM1GameInstance*>(GWorld->OwningGameInstance);
				State = (int)instance->ConnectionState;
			}

			if (State != 10)
				return M1org(self, Canvas);

			//ZeroGUI::SetController(PlayerController);

			if (inGame && PlayerIngameController)
			{
				if (PlayerIngameController->HeartbeatTesterComponent && PlayerIngameController->HeartbeatTesterComponent->IsActive())
					PlayerIngameController->HeartbeatTesterComponent->Deactivate();
			}

			//if (IsKeyPressed(VK_NUMPAD1))
			//{
			//	BoneOffset += 0x04;
			//	//auto pp = std::addressof(PlayerController->Character->Mesh) + 0x04;
			//	SDK::USkinnedMeshComponent* SkinnedMeshComp = static_cast<SDK::USkinnedMeshComponent*>(PlayerController->Character->Mesh);

			//	// Step 2: Add the offset to the base address
			//	uintptr_t SkinnedMeshBaseAddress = reinterpret_cast<uintptr_t>(SkinnedMeshComp);
			//	uintptr_t TargetAddress = SkinnedMeshBaseAddress + BoneOffset;

			//	// Step 3: Cast the address to a TArray<FTransform> pointer
			//	BoneArrayPointer = reinterpret_cast<SDK::TArray<SDK::FTransform>*>(TargetAddress);
			//}
			//if (IsKeyPressed(VK_NUMPAD0))
			//{
			//	BoneOffset -= 0x04;
			//	SDK::USkinnedMeshComponent* SkinnedMeshComp = static_cast<SDK::USkinnedMeshComponent*>(PlayerController->Character->Mesh);

			//	// Step 2: Add the offset to the base address
			//	uintptr_t SkinnedMeshBaseAddress = reinterpret_cast<uintptr_t>(SkinnedMeshComp);
			//	uintptr_t TargetAddress = SkinnedMeshBaseAddress + BoneOffset;

			//	// Step 3: Cast the address to a TArray<FTransform> pointer
			//	BoneArrayPointer = reinterpret_cast<SDK::TArray<SDK::FTransform>*>(TargetAddress);
			//}
			//char bufferlol[32];
			//sprintf_s(bufferlol, "BONEARRAY: %02X", BoneOffset);
			//ZeroGUI::TextLeft((char*)bufferlol, SDK::FVector2D{ 280, 250 }, ColorRed, false);
			//if (BoneArrayPointer && BoneArrayPointer->IsValid())
			//{
			//	ZeroGUI::TextLeft((char*)"Valid!?", SDK::FVector2D{ 280, 250 + 12 }, ColorGold, false);
			//	char bufferlol2[64];
			//	sprintf_s(bufferlol2, "Num: %d - Max: %d - Number of Bones: %d", BoneArrayPointer->Num(), BoneArrayPointer->Max(), PlayerController->Character->Mesh->GetNumBones());
			//	ZeroGUI::TextLeft((char*)bufferlol2, SDK::FVector2D{ 280, 250 + 24 }, ColorGold, false);
			//	if (BoneArrayPointer->Num() == 299)
			//	{
			//		SDK::FMatrix ComponentMatrix = SDK::UKismetMathLibrary::Conv_TransformToMatrix(PlayerController->Character->Mesh->K2_GetComponentToWorld());
			//		for (int j = 0; j < BoneArrayPointer->Num(); j++)
			//		{
			//			if (BoneArrayPointer->IsValidIndex(j))
			//			{
			//				SDK::FTransform bone = BoneArrayPointer->operator[](j);
			//				SDK::FMatrix BoneMatrix = SDK::UKismetMathLibrary::Conv_TransformToMatrix(bone);
			//				SDK::FMatrix WorldMatrix = SDK::UKismetMathLibrary::Multiply_MatrixMatrix(BoneMatrix, ComponentMatrix);
			//				SDK::FTransform WorldPosition = SDK::UKismetMathLibrary::Conv_MatrixToTransform(WorldMatrix);
			//				SDK::FVector2D BoneScreenPos = { -1, -1 };
			//				if (WorldToScreen(WorldPosition.Translation, &BoneScreenPos))
			//				{
			//					ZeroGUI::TextCenter((char*)"Bone", BoneScreenPos, SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, true);
			//					std::cout << offsetof(SDK::USkinnedMeshComponent, BoneArray) << "\n";
			//				}
			//			}
			//		}
			//	}
			//}

			if (IsKeyPressed(cfg_LootVacuumKey))
				cfg_LootVacuum = !cfg_LootVacuum;

			if (cfg_EnableAimbotToggle && IsKeyPressed(cfg_AimbotToggleKey))
				cfg_EnableAimbot = !cfg_EnableAimbot;

			if (IsKeyPressed(cfg_HotSwapKey))
			{
				if (HotSwapCharacters[HotSwapIndex] != 0)
				{
					SDK::FM1TemplateId id = { HotSwapCharacters[HotSwapIndex] };
					PlayerController->PrivateOnlineServiceComponent->ServerChangePlayer(id);
				}
			}
			static bool timeEnable = false;
			if (IsKeyPressed(cfg_TimeScaleKey))
			{
				//PlayerController->EnableCheats();
				//LocalCharacter->JumpMaxCount = 10;
				//LocalCharacter->ClientCheatFly();
				//LocalCharacter->CharacterMovement->GravityScale = 0.001f;
				//LocalCharacter->CharacterMovement->MaxWalkSpeed = 20.0f;
				//LocalCharacter->CharacterMovement->MaxCustomMovementSpeed = 20.0f;
				//LocalCharacter->CharacterMovement->bIgnoreClientMovementErrorChecksAndCorrection = true;
				//LocalCharacter->CharacterMovement->bServerAcceptClientAuthoritativePosition = true;MOVE_Flying
				//LocalCharacter->ClientCheatGhost();//MovementMode = SDK::EMovementMode::MOVE_Flying;
				timeEnable = !timeEnable;
				if (timeEnable)
					GWorld->PersistentLevel->WorldSettings->TimeDilation = cfg_TimeScale;
				else
					GWorld->PersistentLevel->WorldSettings->TimeDilation = 1.0f;
			}

			if (IsKeyPressed(VK_DOWN))
			{
				if (HotSwapIndex == 3)
					HotSwapIndex = 0;
				else
					HotSwapIndex += 1;
			}
			if (IsKeyPressed(VK_UP))
			{
				if (HotSwapIndex == 0)
					HotSwapIndex = 3;
				else
					HotSwapIndex -= 1;
			}



			if (cfg_HotSwapOverlay)
			{
				for (int i = 0; i < 4; i++)
				{
					char buffer[12];
					sprintf_s(buffer, "%d", HotSwapCharacters[i]);
					if (i == HotSwapIndex)
						ZeroGUI::TextLeft((char*)buffer, SDK::FVector2D{ 250, 25.0f + (12.0f * i) }, ColorRed, false);
					else
						ZeroGUI::TextLeft((char*)buffer, SDK::FVector2D{ 250, 25.0f + (12.0f * i) }, ColorWhite, false);
				}
			}
			/*char sz[4][1024];
			for (DWORD i = 0; i < 4; i++)
			{
				if (g_Controllers[i].bConnected)
				{
					WORD wButtons = g_Controllers[i].state.Gamepad.wButtons;
					sprintf_s(sz[i],
						"Controller %u: Connected\n Buttons: %s%s%s%s%s%s%s%s%s%s%s%s%s%s\n Left Trigger: %u\n Right Trigger: %u\n Left Thumbstick: %d/%d\n Right Thumbstick: %d/%d",
						i,
						(wButtons& XINPUT_GAMEPAD_DPAD_UP) ? "DPAD_UP " : "",
						(wButtons& XINPUT_GAMEPAD_DPAD_DOWN) ? "DPAD_DOWN " : "",
						(wButtons& XINPUT_GAMEPAD_DPAD_LEFT) ? "DPAD_LEFT " : "",
						(wButtons& XINPUT_GAMEPAD_DPAD_RIGHT) ? "DPAD_RIGHT " : "",
						(wButtons& XINPUT_GAMEPAD_START) ? "START " : "",
						(wButtons& XINPUT_GAMEPAD_BACK) ? "BACK " : "",
						(wButtons& XINPUT_GAMEPAD_LEFT_THUMB) ? "LEFT_THUMB " : "",
						(wButtons& XINPUT_GAMEPAD_RIGHT_THUMB) ? "RIGHT_THUMB " : "",
						(wButtons& XINPUT_GAMEPAD_LEFT_SHOULDER) ? "LEFT_SHOULDER " : "",
						(wButtons& XINPUT_GAMEPAD_RIGHT_SHOULDER) ? "RIGHT_SHOULDER " : "",
						(wButtons& XINPUT_GAMEPAD_A) ? "A " : "",
						(wButtons& XINPUT_GAMEPAD_B) ? "B " : "",
						(wButtons& XINPUT_GAMEPAD_X) ? "X " : "",
						(wButtons& XINPUT_GAMEPAD_Y) ? "Y " : "",
						g_Controllers[i].state.Gamepad.bLeftTrigger,
						g_Controllers[i].state.Gamepad.bRightTrigger,
						g_Controllers[i].state.Gamepad.sThumbLX,
						g_Controllers[i].state.Gamepad.sThumbLY,
						g_Controllers[i].state.Gamepad.sThumbRX,
						g_Controllers[i].state.Gamepad.sThumbRY);
				}
				else
					sprintf_s(sz[i], "Controller %u: Not connected", i);
				ZeroGUI::TextLeft((char*)sz[i], SDK::FVector2D{ 250.0f + (100.0f * i), 150.0f }, ColorRed, false);
			}*/


			if (cfg_EnablePlayerEnemyESP)
				PlayerEnemyESP();

			if (cfg_EnableItemESP || cfg_LootVacuum)
				ItemESPVacuum();

			if (cfg_EnableAimbotHold || cfg_EnableAimbotToggle)
				Aimbot();

			if (cfg_NoReload)
				InstantReload();

			if (cfg_CacheEnemyNames && NamesChanged)
			{
				WriteEnemyNamesData();
				NamesChanged = false;
			}
			if (cfg_CacheEnemyBones && BonesChanged)
			{
				WriteEnemyBonesData();
				BonesChanged = false;
			}

			/*if (IsKeyPressed(0x58))
			{
				SDK::FVector Pos, Rot = { 0, 0, 0 };
				SDK::FVector2D Screen = { ZeroGUI::canvas->SizeX / 2.0f, ZeroGUI::canvas->SizeY / 2.0f };
				if (ZeroGUI::canvas->SizeX > 1920)
				{
					Screen.X *= (1920.0f / ZeroGUI::canvas->SizeX);
					Screen.Y *= (1080.0f / ZeroGUI::canvas->SizeY);
				}
				if (PlayerController->DeprojectScreenPositionToWorld(Screen.X, Screen.Y, &Pos, &Rot))
				{
					SDK::FRotator Rotation = LocalCharacter->K2_GetActorRotation();
					LocalCharacter->RequestTeleportAtSequence(Pos, Rotation);
				}
			}*/
			ZeroGUI::Draw_Cursor(cfg_DrawMenu);


		}
	}
	return M1org(self, Canvas);
}

void InstantReload()
{
	if (!LocalCharacter)
		return;
	if (!LocalCharacter->bPlayerInputEnabled)
		return;
	if (!LocalCharacter->IsA(SDK::AM1Player::StaticClass()))
		return;
	if (!LocalCharacter->WeaponSlotControl)
		return;
	auto currWeaponSlot = LocalCharacter->WeaponSlotControl->ActivatedWeaponSlot;
	if (!currWeaponSlot.WeaponSlot.Weapon)
		return;
	SDK::AM1Weapon* CurrentWeapon = currWeaponSlot.WeaponSlot.Weapon;
	if (CurrentWeapon)
	{
		auto roundCmp = CurrentWeapon->RoundsComponent;
		if (roundCmp)
		{
			int  ServerCurrentRounds = 21321;
			int CurrentWeaponRounds = 21321;


			roundCmp->ClientCorrectRounds(CurrentWeaponRounds);
		
			if (roundCmp->CurrentRounds < 2)
			{

				roundCmp->ClientFillCurrentRoundByServer();
			}
		}
	}
}

void PlayerEnemyESP()
{
	if (!Actors)
		return;

	if (cfg_DrawPlayerNames || cfg_DrawPlayerBoxes || cfg_DrawEnemyNames || cfg_DrawEnemyBoxes || cfg_DrawPlayerLines || cfg_DrawEnemyLines)
	{
		if (Actors->Characters.IsValid() && Actors->Characters.Num() > 0)
		{
			int StartNumber = Actors->Characters.Num();
			static bool gotfont = false;
			for (int i = 0; i < Actors->Characters.Num(); i++)
			{
				if (Actors->Characters.Num() != StartNumber)
					return;
				if (!Actors->Characters.IsValidIndex(i))
					continue;
				SDK::AM1Character* p = Actors->Characters[i];
				if (p)
				{
					if (p->IsDead())
						continue;
					if (p->IsA(SDK::AM1Player::StaticClass()))
					{
						SDK::FVector2D ScreenPos = { -1, -1 };
						if (WorldToScreen(p->K2_GetActorLocation(), &ScreenPos))
						{
							SDK::AM1Player* player = static_cast<SDK::AM1Player*>(p);
							if (!gotfont)
							{
								if (player->InfoWidgetComponent)
								{
									SDK::UM1UIActorWidget* Base = player->InfoWidgetComponent->ActorWidget.Get();
									if (Base->IsA(SDK::UM1UICharacterInfoBase::StaticClass()))
									{
										SDK::UM1UICharacterInfoBase* Info = static_cast<SDK::UM1UICharacterInfoBase*>(Base);
										if (Info)
										{
											ZeroGUI::CurrentFont = static_cast<SDK::UFont*>(Info->TB_Name->Font.FontObject);
											gotfont = true;
										}
									}
								}
							}
							if (player->bPlayerInputEnabled)
							{
								continue;
							}
							if (cfg_DrawPlayerNames)
								if (player->PlayerName)
								{
									ZeroGUI::TextCenter((char*)player->PlayerName.ToString().c_str(), SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorGreen, false);
								}
							if (cfg_DrawPlayerBoxes)
							{
								float ODistance = p->GetDistanceTo(LocalPlayer->PlayerController->Pawn) / cfg_DistanceScale;
								if (ODistance > 0)
									ZeroGUI::DrawRectangle(SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, SDK::FVector2D{ cfg_ESPBox.X / ODistance, cfg_ESPBox.Y / ODistance }, ColorGreen);
							}
							if (cfg_DrawPlayerLines)
								ZeroGUI::DrawActorLine(SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, ColorGreen);
						}

					}
					else if (p->IsA(SDK::AM1Monster::StaticClass()))
					{
						SDK::AM1Monster* monster = static_cast<SDK::AM1Monster*>(p);
						SDK::FVector2D ScreenPos = { -1, -1 };
						if (WorldToScreen(p->K2_GetActorLocation(), &ScreenPos))
						{
							SDK::FLinearColor color = ColorDarkRed;
							if (PlayerController->LineOfSightTo(p, SDK::FVector{ 0, 0, 0 }, false))
								color = ColorRed;


							/*if (monster->Children.Num() > 0)
							{
								for (int a = 0; a < monster->Children.Num(); a++)
								{
									if (monster->Children[a]->IsA(SDK::AM1AbilityActor::StaticClass()))
									{
										SDK::FVector2D ScreenPos = { -1, -1 };
										if (WorldToScreen(monster->Children[a]->K2_GetActorLocation(), &ScreenPos))
										{
											ZeroGUI::TextCenter((char*)monster->Children[a]->Class->GetFullName().c_str(), SDK::FVector2D{ ScreenPos.X, ScreenPos.Y - 50 }, ColorGreen, false);
										}
									}
								}


							}*/


							if (cfg_DrawEnemyNames)
							{
								//	for (int j = 0; j < p->Mesh->BoneArray.Num(); j++)
								//	{
								//		SDK::FMatrix ComponentMatrix = SDK::UKismetMathLibrary::Conv_TransformToMatrix(monster->Mesh->K2_GetComponentToWorld());
								//		SDK::FTransform bone = monster->Mesh->BoneArray[j];
								//		SDK::FMatrix BoneMatrix = SDK::UKismetMathLibrary::Conv_TransformToMatrix(bone);
								//		SDK::FMatrix WorldMatrix = SDK::UKismetMathLibrary::Multiply_MatrixMatrix(BoneMatrix, ComponentMatrix);
								//		SDK::FTransform WorldPosition = SDK::UKismetMathLibrary::Conv_MatrixToTransform(WorldMatrix);
								//		SDK::FVector2D BoneScreenPos = { -1, -1 };
								//		if (WorldToScreen(WorldPosition.Translation, &BoneScreenPos))
								//		{
								//			ZeroGUI::TextCenter((char*)monster->Mesh->GetBoneName(j).ToString().c_str(), BoneScreenPos, SDK::FLinearColor{ 1.0f, 0.0f, 1.0f, 1.0f }, false);
								//		}
								//	}
								if (!IDNameMap.contains(monster->CharacterId.ID))
								{
									SDK::UM1UIActorWidget* Base = monster->InfoWidgetComponent->ActorWidget.Get();
									if (Base)
									{
										if (Base->IsA(SDK::UM1UICharacterInfoBase::StaticClass()))
										{
											SDK::UM1UICharacterInfoBase* Info = static_cast<SDK::UM1UICharacterInfoBase*>(Base);
											if (Info)
											{
												std::string name = Info->TB_Name->Text.ToString();
												int id = monster->CharacterId.ID;
												IDNameMap.insert({ id, name });
												NamesChanged = true;
											}
										}

									}
								}
								else
								{
									ZeroGUI::TextCenter((char*)IDNameMap[(int)monster->CharacterId.ID].c_str(), SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, color, false);
								}
							}
							if (cfg_DrawEnemyBoxes)
							{
								float ODistance = p->GetDistanceTo(LocalPlayer->PlayerController->Pawn) / cfg_DistanceScale;
								if (ODistance > 0)
								{
									ZeroGUI::DrawRectangle(SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, SDK::FVector2D{ cfg_ESPBox.X / ODistance, cfg_ESPBox.Y / ODistance }, color);
								}
							}
							if (cfg_DrawEnemyLines)
								ZeroGUI::DrawActorLine(SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, color);
						}
					}
				}
			}
		}
	}
}
void ItemESPVacuum()
{
	if (cfg_DrawItemBoxes || cfg_DrawItemNames || cfg_DrawItemLines || cfg_LootVacuum)
	{
		if (GWorld->Levels.IsValid())
		{
			for (int i = 0; i < GWorld->Levels.Num(); ++i)
			{
				if (GWorld->Levels.IsValidIndex(i))
				{
					const auto Level = GWorld->Levels[i];
					if (!Level) continue;

					for (int j = 0; j < Level->Actors.Num(); ++j)
					{
						const auto Actor = Level->Actors[j];
						if (!Actor)
							continue;

						if (!Actor->IsA(SDK::AM1DroppedItem::StaticClass()))
							continue;

						SDK::AM1DroppedItem* Item = static_cast<SDK::AM1DroppedItem*>(Actor);
						if (Item->IsObtained() || Item->bBeingPickedLocally || Item->bTriedSetToObtained || Item->bObtainRequestedOnClient)
							continue;

						SDK::FVector2D ScreenPos = { -1, -1 };
						SDK::FVector WorldPosition = Actor->K2_GetActorLocation();

						if (cfg_LootVacuum)
						{
							SDK::FVector player = LocalCharacter->K2_GetActorLocation();
							float Distance = WorldPosition.GetDistanceTo(player);
							if (Distance > 150 && Distance < cfg_LootVacuumRange)
								Item->K2_SetActorLocation(player, false, nullptr, true);
						}

						if (WorldToScreen(WorldPosition, &ScreenPos))
						{
							SDK::FLinearColor color = ColorWhite;
							std::string Text = "Unknown";
							switch (Item->DropItemInfo.ItemBox.Type)
							{
							case SDK::EM1ItemType::InstantUse:
							{
								if (Item->IsA(SDK::ABP_AmmoEnhancedDroppedItem_C::StaticClass()))
									Text = "Enhanced Ammo";
								else if (Item->IsA(SDK::ABP_AmmoGeneralDroppedItem_C::StaticClass()))
									Text = "General Ammo";
								else if (Item->IsA(SDK::ABP_AmmoHighpowerDroppedItem_C::StaticClass()))
									Text = "Highpower Ammo";
								else if (Item->IsA(SDK::ABP_AmmoImpactDroppedItem_C::StaticClass()))
									Text = "Impact Ammo";
								else if (Item->IsA(SDK::ABP_HealthOrbDroppedItem_C::StaticClass()))
								{
									color = ColorRed;
									Text = "Health";
								}
								else if (Item->IsA(SDK::ABP_ManaOrbDroppedItem_C::StaticClass()))
								{
									color = ColorMana;
									Text = "Mana";
								}
								break;
							}
							case SDK::EM1ItemType::Equipment:
							{
								if (Item->IsA(SDK::ABP_EquipTier01DroppedItem_C::StaticClass()))
								{
									color = ColorUncommon;
									Text = "T1 Item";
								}
								else if (Item->IsA(SDK::ABP_EquipTier02DroppedItem_C::StaticClass()))
								{
									color = ColorRare;
									Text = "T2 Item";
								}
								else if (Item->IsA(SDK::ABP_EquipTier03DroppedItem_C::StaticClass()))
								{
									color = ColorGold;
									Text = "T3 Item";
								}
								break;
							}
							case SDK::EM1ItemType::Consumable:
							{
								if (Item->IsA(SDK::ABP_ResourceTier01DroppedItem_C::StaticClass()))
								{
									color = ColorUncommon;
									Text = "T1 Resource";
								}
								else if (Item->IsA(SDK::ABP_ResourceTier02DroppedItem_C::StaticClass()))
								{
									color = ColorRare;
									Text = "T2 Resource";
								}
								else if (Item->IsA(SDK::ABP_ResourceTier03DroppedItem_C::StaticClass()))
								{
									color = ColorGold;
									Text = "T3 Resource";
								}
								break;
							}
							case SDK::EM1ItemType::Rune:
							{
								if (Item->IsA(SDK::ABP_RuneTier01DroppedItem_C::StaticClass()))
								{
									color = ColorUncommon;
									Text = "T1 Rune";
								}
								else if (Item->IsA(SDK::ABP_RuneTier02DroppedItem_C::StaticClass()))
								{
									color = ColorRare;
									Text = "T2 Rune";
								}
								else if (Item->IsA(SDK::ABP_RuneTier03DroppedItem_C::StaticClass()))
								{
									color = ColorGold;
									Text = "T3 Rune";
								}
								else if (Item->IsA(SDK::ABP_RuneTier04DroppedItem_C::StaticClass()))
								{
									color = ColorUltimate;
									Text = "T4 Rune";
								}
								break;
							}
							case SDK::EM1ItemType::Currency:
							{
								if (Item->IsA(SDK::ABP_GoldDroppedItem_C::StaticClass()))
								{
									color = ColorGold;
									Text = "Gold";
								}
								else if (Item->IsA(SDK::ABP_KuiperShardDroppedItem_C::StaticClass()))
								{
									color = ColorMana;
									Text = "Kuiper Shard";
								}
								break;
							}
							default:
							{
								if (Item->IsA(SDK::ABP_BuffOrbDroppedItem_C::StaticClass()))
									Text = "Buff Orb";
								else if (Item->IsA(SDK::ABP_EmberDroppedItem_C::StaticClass()))
									Text = "Ember";
								break;
							}

							}

							if (cfg_DrawItemNames)
							{
								if (Text == "Unknown" || Text == "Buff Orb" || Text == "Ember")
								{
									int type = (int)Item->DropItemInfo.ItemBox.Type;
									char buffer[32];
									sprintf_s(buffer, "Unkown Type %d", type);
									ZeroGUI::TextCenter(buffer, SDK::FVector2D{ ScreenPos.X, ScreenPos.Y + 20 }, SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);
								}
								ZeroGUI::TextCenter((char*)Text.c_str(), SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, color, true);
							}

							if (cfg_DrawItemBoxes)
							{
								float ODistance = Item->GetDistanceTo(LocalPlayer->PlayerController->Pawn) / cfg_DistanceScale;
								if (ODistance > 0)
									ZeroGUI::DrawRectangle(SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, SDK::FVector2D{ 10 / ODistance, 10 / ODistance }, color);
							}
							if (cfg_DrawItemLines)
								ZeroGUI::DrawActorLine(SDK::FVector2D{ ScreenPos.X, ScreenPos.Y }, color);

						}
					}

				}

			}
		}

	}
}

HRESULT UpdateControllerState()
{
	DWORD dwResult;
	for (DWORD i = 0; i < 4; i++)
	{
		// Simply get the state of the controller from XInput.
		dwResult = XInputGetState(i, &g_Controllers[i].state);

		if (dwResult == ERROR_SUCCESS)
			g_Controllers[i].bConnected = true;
		else
			g_Controllers[i].bConnected = false;
	}

	return S_OK;
}


void Aimbot()
{
	static int currentTargetID;

	if (cfg_EnableAimbotHold)
	{
		if (!cfg_AimbotController && !IsKeyHeld(cfg_AimbotHoldKey))
		{
			currentTargetID = 0;
			Aimbot_BoneIndex = -1;
			return;
		}
		if (cfg_AimbotController)
		{
			bool isAiming = false;
			for (DWORD i = 0; i < 4; i++)
			{
				if (g_Controllers[i].bConnected)
				{
					if (g_Controllers[i].state.Gamepad.bLeftTrigger >= XINPUT_GAMEPAD_TRIGGER_THRESHOLD)
					{
						isAiming = true;
					}
				}
			}
			if (!isAiming)
			{
				currentTargetID = 0;
				Aimbot_BoneIndex = -1;
				return;
			}
		}
	}
	else if (cfg_EnableAimbotToggle && !cfg_EnableAimbot)
	{
		currentTargetID = 0;
		Aimbot_BoneIndex = -1;
		return;
	}

	if (currentTargetID && Aimbot_Target && Aimbot_BoneIndex != -1)
	{
		if (Aimbot_Target->IsA(SDK::AM1Character::StaticClass()))
		{
			SDK::AM1Character* AimTarget = static_cast<SDK::AM1Character*>(Aimbot_Target);
			if (!AimTarget->IsDead() && PlayerController->LineOfSightTo(AimTarget, SDK::FVector{ 0, 0, 0 }, false))
			{
				if (AimTarget->Mesh && AimTarget->Mesh->BoneArray.IsValid() && AimTarget->Mesh->BoneArray.IsValidIndex(Aimbot_BoneIndex))
				{
					SDK::FMatrix ComponentMatrix = SDK::UKismetMathLibrary::Conv_TransformToMatrix(AimTarget->Mesh->K2_GetComponentToWorld());
					SDK::FTransform bone = AimTarget->Mesh->BoneArray[Aimbot_BoneIndex];
					SDK::FMatrix BoneMatrix = SDK::UKismetMathLibrary::Conv_TransformToMatrix(bone);
					SDK::FMatrix WorldMatrix = SDK::UKismetMathLibrary::Multiply_MatrixMatrix(BoneMatrix, ComponentMatrix);
					SDK::FTransform WorldPosition = SDK::UKismetMathLibrary::Conv_MatrixToTransform(WorldMatrix);
					SDK::FRotator Angles = SDK::UKismetMathLibrary::FindLookAtRotation(PlayerController->PlayerCameraManager->GetCameraLocation(), WorldPosition.Translation);
					PlayerController->SetControlRotation(
						SDK::UKismetMathLibrary::RInterpTo(PlayerController->PlayerCameraManager->GetCameraRotation(), Angles, ((SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass())->GetWorldDeltaSeconds(GWorld), cfg_AimbotSmoothing));
					return;
				}

			}
		}
		else if (Aimbot_Target->IsA(SDK::AM1AbilityActor::StaticClass()))
		{

			SDK::FRotator Angles = SDK::UKismetMathLibrary::FindLookAtRotation(PlayerController->PlayerCameraManager->GetCameraLocation(), Aimbot_Target->K2_GetActorLocation());
			PlayerController->SetControlRotation(
				SDK::UKismetMathLibrary::RInterpTo(PlayerController->PlayerCameraManager->GetCameraRotation(), Angles, ((SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass())->GetWorldDeltaSeconds(GWorld), cfg_AimbotSmoothing));
			//ZeroGUI::TextCenter((char*)Aimbot_Target->Class->Super->GetFullName().c_str(), SDK::FVector2D{ 200, 200 }, SDK::FLinearColor{ 0.0f, 0.0f, 1.0f, 1.0f }, false);
			return;
		}
		currentTargetID = 0;
		Aimbot_BoneIndex = -1;
		Aimbot_Target = nullptr;
	}

	Aimbot_Target = GetClosestEnemy(currentTargetID);
}

SDK::AActor* GetClosestEnemy(int& ID)
{

	SDK::AActor* ret = nullptr;
	float closestDistance = INFINITY;
	Aimbot_BoneIndex = -1;



	if (Actors->Characters.IsValid() && Actors->Characters.Num() > 0)
	{
		int StartNumber = Actors->Characters.Num();
		for (int i = 0; i < Actors->Characters.Num(); i++)
		{
			if (Actors->Characters.Num() != StartNumber)
				return nullptr;
			if (!Actors->Characters.IsValidIndex(i))
				continue;
			SDK::AM1Character* p = Actors->Characters[i];
			if (p)
			{
				if (p->IsDead())
					continue;
				if (!p->IsA(SDK::AM1Monster::StaticClass()))
					continue;
				if (!PlayerController->LineOfSightTo(p, SDK::FVector{ 0, 0, 0 }, false))
				{
					if (p->Children.Num() > 0)
					{
						bool any = false;
						for (int c = 0; c < p->Children.Num(); c++)
						{
							if (p->Children[c]->IsA(SDK::AM1AbilityActor::StaticClass()))
								if (p->Children[c]->Class->GetFullName().contains("Immunity") || p->Children[c]->Class->GetFullName().contains("JudgementEye"))
									if (PlayerController->LineOfSightTo(p->Children[c], SDK::FVector{ 0, 0, 0 }, false))
										any = true;
						}
						if (!any)
							continue;
					}
					else
						continue;
				}
				//if (p->IsA(SDK::AM1Monster::StaticClass()))
				//{
				if (!IDBoneMap.contains(p->CharacterId.ID))
				{
					if (p->Mesh && p->Mesh->BoneArray.IsValid() && p->Mesh->BoneArray.Num() > 0)
					{
						std::vector<int> bones = { };
						for (int j = 0; j < p->Mesh->BoneArray.Num(); j++)
						{
							if (p->Mesh->BoneArray.IsValidIndex(j))
							{
								if (p->Mesh->GetBoneName(j).ToString().contains("Weakness") || p->Mesh->GetBoneName(j).ToString().contains("-Head"))
								{
									bones.push_back(j);
								}
							}
						}
						if (bones.size() > 0)
						{
							IDBoneMap.insert({ p->CharacterId.ID, bones });
							BonesChanged = true;
						}
					}
				}
				else
				{
					// Some enemies have 'balls' that spawn, they are Children of the current Actor with a class of M1AbilityActor
					// no bones for them, so target just their actor location?
					//SDK::USkinnedMeshComponent* Mesh = p->Mesh;
					if (p->Mesh && p->Mesh->BoneArray.IsValid() && p->Mesh->BoneArray.Num() > 0)
					{
						SDK::FMatrix ComponentMatrix = SDK::UKismetMathLibrary::Conv_TransformToMatrix(p->Mesh->K2_GetComponentToWorld());
						std::vector<int> indexes = IDBoneMap[p->CharacterId.ID];
						for (int j = 0; j < indexes.size(); j++)
						{
							if (p->Mesh->BoneArray.IsValidIndex(indexes[j]))
							{
								SDK::FTransform bone = p->Mesh->BoneArray[indexes[j]];
								SDK::FMatrix BoneMatrix = SDK::UKismetMathLibrary::Conv_TransformToMatrix(bone);
								SDK::FMatrix WorldMatrix = SDK::UKismetMathLibrary::Multiply_MatrixMatrix(BoneMatrix, ComponentMatrix);
								SDK::FTransform WorldPosition = SDK::UKismetMathLibrary::Conv_MatrixToTransform(WorldMatrix);
								SDK::FVector2D BoneScreenPos = { -1, -1 };
								if (WorldToScreen(WorldPosition.Translation, &BoneScreenPos))
								{
									//ZeroGUI::TextCenter((char*)"Bone", BoneScreenPos, SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, true);

									float distance = SDK::UKismetMathLibrary::Distance2D(ScreenMiddle, BoneScreenPos);
									//ZeroGUI::TextCenter((char*)p->Class->GetFullName().c_str(), SDK::FVector2D{ 500, 500 }, SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);
									if (distance > cfg_AimbotFOV)
										continue;
									if (distance < closestDistance)
									{
										closestDistance = distance;
										ID = p->Index;
										Aimbot_BoneIndex = indexes[j];
										ret = p;
									}
								}
								//}
							}
						}
					}

					if (p->Children.Num() > 0)
					{
						for (int a = 0; a < p->Children.Num(); a++)
						{
							if (p->Children[a]->IsA(SDK::AM1AbilityActor::StaticClass()))
							{
								if (!(p->Children[a]->Class->GetFullName().contains("Immun")) && !(p->Children[a]->Class->GetFullName().contains("JudgementEye")))
									continue;
								SDK::FVector2D ScreenPos = { -1, -1 };
								if (WorldToScreen(p->Children[a]->K2_GetActorLocation(), &ScreenPos))
								{
									float distance = SDK::UKismetMathLibrary::Distance2D(ScreenMiddle, ScreenPos);
									//ZeroGUI::TextCenter((char*)p->Children[a]->Class->GetFullName().c_str(), SDK::FVector2D{ 500.0f, 200.0f + (50.0f * a) }, SDK::FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);
									if (distance > cfg_AimbotFOV)
										continue;
									if (distance < closestDistance)
									{
										closestDistance = distance;
										ID = p->Children[a]->Index;
										Aimbot_BoneIndex = 999;
										ret = p->Children[a];
									}
								}
							}
						}
					}

				}
			}
		}
	}
	return ret;
}




void DrawMenu()
{
	if (ZeroGUI::Window((char*)"DescendantInternal - Killuano", &cfg_WindowPos, SDK::FVector2D{ 500.0f, 600.0f }, cfg_DrawMenu))
	{

		static int tab = 0;
		if (ZeroGUI::ButtonTab((char*)"Actors", SDK::FVector2D{ 110, 25 }, tab == 0)) tab = 0;
		if (ZeroGUI::ButtonTab((char*)"Items", SDK::FVector2D{ 110, 25 }, tab == 1)) tab = 1;
		if (ZeroGUI::ButtonTab((char*)"Aimbot", SDK::FVector2D{ 110, 25 }, tab == 2)) tab = 2;
		if (ZeroGUI::ButtonTab((char*)"Extras", SDK::FVector2D{ 110, 25 }, tab == 3)) tab = 3;
		//if (ZeroGUI::ButtonTab((char*)"Stuff", SDK::FVector2D{ 110, 25 }, tab == 4)) tab = 4;
		//if (ZeroGUI::ButtonTab((char*)"Tools", SDK::FVector2D{ 110, 25 }, tab == 3)) tab = 3;
		ZeroGUI::NextColumn(130.0f);

		if (tab == 0)
		{
			ZeroGUI::Checkbox((char*)"Enable Actor ESP", &cfg_EnablePlayerEnemyESP);
			ZeroGUI::Checkbox((char*)"Draw Player Boxes", &cfg_DrawPlayerBoxes);
			ZeroGUI::Checkbox((char*)"Draw Player Names", &cfg_DrawPlayerNames);
			ZeroGUI::Checkbox((char*)"Draw Player Lines", &cfg_DrawPlayerLines);
			ZeroGUI::Checkbox((char*)"Draw Enemy Boxes", &cfg_DrawEnemyBoxes);
			ZeroGUI::Checkbox((char*)"Draw Enemy Names", &cfg_DrawEnemyNames);
			ZeroGUI::Checkbox((char*)"Draw Enemy Lines", &cfg_DrawEnemyLines);
		}
		if (tab == 1)
		{
			ZeroGUI::Checkbox((char*)"Enable Item ESP", &cfg_EnableItemESP);
			ZeroGUI::Checkbox((char*)"Draw Item Boxes", &cfg_DrawItemBoxes);
			ZeroGUI::Checkbox((char*)"Draw Item Names", &cfg_DrawItemNames);
			ZeroGUI::Checkbox((char*)"Draw Item Lines", &cfg_DrawItemLines);
			ZeroGUI::Checkbox((char*)"Enable Loot Vacuum", &cfg_LootVacuum);
			ZeroGUI::SliderFloat((char*)"Loot Vacuum Range", &cfg_LootVacuumRange, 151.0f, 20000.0f);
			ZeroGUI::Text((char*)"Loot Vacuum Toggle:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Loot Vacuum Hotkey", SDK::FVector2D{ 110, 25 }, &cfg_LootVacuumKey);
		}
		if (tab == 2)
		{
			//ZeroGUI::Checkbox((char*)"Enable Aimbot", &cfg_EnableAimbot);
			if (ZeroGUI::Checkbox((char*)"Enable Aimbot(Hold)", &cfg_EnableAimbotHold))
			{
				if (cfg_EnableAimbotHold)
					cfg_EnableAimbotToggle = false;
			}
			ZeroGUI::Text((char*)"Aimbot Hold Key:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Aimbot Hold Key", SDK::FVector2D{ 110, 25 }, &cfg_AimbotHoldKey);
			if (ZeroGUI::Checkbox((char*)"Enable Aimbot(Toggle)", &cfg_EnableAimbotToggle))
			{
				if (cfg_EnableAimbotToggle)
					cfg_EnableAimbotHold = false;
			}
			ZeroGUI::Text((char*)"Aimbot Togle Key:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Aimbot Toggle Key", SDK::FVector2D{ 110, 25 }, &cfg_AimbotToggleKey);
			ZeroGUI::Checkbox((char*)"Enable Controller Support", &cfg_AimbotController);
			ZeroGUI::Text((char*)"(Hold Mode with Left Trigger Only)");
			ZeroGUI::SliderFloat((char*)"Aimbot Screen Distance", &cfg_AimbotFOV, 1.0f, 1000.0f);
			ZeroGUI::SliderFloat((char*)"Aimbot Speed", &cfg_AimbotSmoothing, 1.0f, 100.0f);
			//static bool NoSpreadChanged = cfg_AimbotNoSpread;
			if (ZeroGUI::Checkbox((char*)"Enable No Spread", &cfg_AimbotNoSpread))
			{
				if (cfg_AimbotNoSpread)
				{
					DWORD old;
					VirtualProtect(NoSpreadAddress, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &old);
					memcpy(NoSpreadAddress, &NoSpreadCheat, sizeof(uint8_t));
					VirtualProtect(NoSpreadAddress, sizeof(uint8_t), old, NULL);
				}
				else
				{
					DWORD old;
					VirtualProtect(NoSpreadAddress, sizeof(uint8_t), PAGE_EXECUTE_READWRITE, &old);
					memcpy(NoSpreadAddress, &NoSpreadOriginal, sizeof(uint8_t));
					VirtualProtect(NoSpreadAddress, sizeof(uint8_t), old, NULL);
				}
			}
			ZeroGUI::Checkbox((char*)"Enable Auto-Reload", &cfg_NoReload);
		}
		if (tab == 3)
		{
			//ZeroGUI::Text((char*)"The following settings will allow saving and loading of data for enemy names for ESP and bones for the Aimbot.", false, false);
			//static bool saveNames = cfg_CacheEnemyNames;
			if (ZeroGUI::Checkbox((char*)"Enable Names Cache", &cfg_CacheEnemyNames) && cfg_CacheEnemyNames)
				WriteEnemyNamesData();
			if (ZeroGUI::Checkbox((char*)"Enable Bones Cache", &cfg_CacheEnemyBones) && cfg_CacheEnemyBones)
				WriteEnemyBonesData();

			ZeroGUI::Checkbox((char*)"Show Swap Slot Overlay", &cfg_HotSwapOverlay);
			//ZeroGUI::Combobox((char*)"Character Swap Slot", SDK::FVector2D{ 100, 25 }, &HotSwapUIIndex, (char*)"1", (char*)"2", (char*)"3", (char*)"4", NULL);
			ZeroGUI::Text((char*)"Use the Up and Down keys to change slots.");
			char SlotText[64];
			sprintf_s(SlotText, "Character ID for Slot %d: %d", HotSwapIndex, HotSwapCharacters[HotSwapIndex]);
			ZeroGUI::Text((char*)SlotText);
			if (ZeroGUI::Button((char*)"Set Character Slot", SDK::FVector2D{ 120, 30 }))
			{
				HotSwapCharacters[HotSwapIndex] = LocalCharacter->CharacterId.ID;
			}
			ZeroGUI::SameLine();
			if (ZeroGUI::Button((char*)"Clear Character Slot", SDK::FVector2D{ 120, 30 }))
			{
				HotSwapCharacters[HotSwapIndex] = 0;
			}
			ZeroGUI::Text((char*)"Hot Swap Key:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Hot Swap Hotkey", SDK::FVector2D{ 110, 25 }, &cfg_HotSwapKey);

			ZeroGUI::SliderFloat((char*)"Timescale:", &cfg_TimeScale, 1.0f, 10.0f);
			ZeroGUI::Text((char*)"Timescale Toggle:");
			ZeroGUI::SameLine();
			ZeroGUI::Hotkey((char*)"Timescale Hotkey:", SDK::FVector2D{ 110, 25 }, &cfg_TimeScaleKey);
		}
		if (tab == 4)
		{
			static int habba = 0;
			if (ZeroGUI::Button((char*)"Down", SDK::FVector2D{ 120, 30 }))
			{
				if (habba != 0)
				{
					habba -= 1;
					if (GEngine->AdditionalFonts.IsValidIndex(habba))
						ZeroGUI::CurrentFont = GEngine->AdditionalFonts[habba];
				}
			}
			if (ZeroGUI::Button((char*)"Up", SDK::FVector2D{ 120, 30 }))
			{
				if (habba < GEngine->AdditionalFonts.Num())
				{
					habba += 1;
					if (GEngine->AdditionalFonts.IsValidIndex(habba))
						ZeroGUI::CurrentFont = GEngine->AdditionalFonts[habba];
				}
			}
			//for (int i = 0; i < GEngine->AdditionalFonts.Num(); i++)
			//{
			//	ZeroGUI::Text((char*)GEngine->AdditionalFonts[i]->LegacyFontName.ToString().c_str());
			//
			//}

		}
	}
}

void LoadCFG()
{
	ini.SetUnicode();
	if (ini.LoadFile("cfg.ini") < 0)
	{
		SaveCFG();
	}
	else
	{
		cfg_WindowPos = { (float)ini.GetDoubleValue("Menu", "X"), (float)ini.GetDoubleValue("Menu", "Y") };
		cfg_EnablePlayerEnemyESP = ini.GetBoolValue("ESP", "EnablePlayerEnemyESP");
		cfg_DrawPlayerNames = ini.GetBoolValue("ESP", "EnablePlayerNames");
		cfg_DrawPlayerBoxes = ini.GetBoolValue("ESP", "EnablePlayerBoxes");
		cfg_DrawPlayerLines = ini.GetBoolValue("ESP", "EnablePlayerLines");
		cfg_DrawEnemyNames = ini.GetBoolValue("ESP", "EnableEnemyNames");
		cfg_DrawEnemyBoxes = ini.GetBoolValue("ESP", "EnableEnemyBoxes");
		cfg_DrawEnemyLines = ini.GetBoolValue("ESP", "EnableEnemyLines");

		cfg_EnableItemESP = ini.GetBoolValue("ESP", "EnableItemESP");
		cfg_DrawItemBoxes = ini.GetBoolValue("ESP", "EnableItemBoxes");
		cfg_DrawItemNames = ini.GetBoolValue("ESP", "EnableItemNames");
		cfg_DrawItemLines = ini.GetBoolValue("ESP", "EnableItemLines");
		cfg_LootVacuum = ini.GetBoolValue("Extra", "EnableVacuum");
		cfg_LootVacuumRange = ini.GetDoubleValue("Extra", "VacuumRange");
		cfg_LootVacuumKey = (int)ini.GetDoubleValue("Extra", "VacuumKey");

		cfg_EnableAimbotHold = ini.GetBoolValue("Aimbot", "EnableAimbotHold");
		cfg_EnableAimbotToggle = ini.GetBoolValue("Aimbot", "EnableAimbotToggle");
		cfg_AimbotHoldKey = (int)ini.GetDoubleValue("Aimbot", "AimbotHoldKey");
		cfg_AimbotToggleKey = (int)ini.GetDoubleValue("Aimbot", "AimbotToggleKey");
		cfg_AimbotController = ini.GetBoolValue("Aimbot", "EnableController");
		cfg_AimbotFOV = ini.GetDoubleValue("Aimbot", "AimbotFOV");
		cfg_AimbotSmoothing = ini.GetDoubleValue("Aimbot", "AimbotSmooth");
		cfg_AimbotNoSpread = ini.GetBoolValue("Aimbot", "EnableNoSpread");
		cfg_NoReload = ini.GetBoolValue("Extra", "EnableNoReload");


		cfg_CacheEnemyNames = ini.GetBoolValue("Extra", "CacheNames");
		cfg_CacheEnemyBones = ini.GetBoolValue("Extra", "CacheBones");

		cfg_HotSwapKey = (int)ini.GetDoubleValue("Extra", "HotSwapKey");
		cfg_HotSwapOverlay = ini.GetBoolValue("Extra", "HotSwapOverlay");

		HotSwapCharacters[0] = (int)ini.GetDoubleValue("Extra", "HotSwapSlot1", 0);
		HotSwapCharacters[1] = (int)ini.GetDoubleValue("Extra", "HotSwapSlot2", 0);
		HotSwapCharacters[2] = (int)ini.GetDoubleValue("Extra", "HotSwapSlot3", 0);
		HotSwapCharacters[3] = (int)ini.GetDoubleValue("Extra", "HotSwapSlot4", 0);

		cfg_TimeScale = ini.GetDoubleValue("Extra", "Timescale");
		cfg_TimeScaleKey = (int)ini.GetDoubleValue("Extra", "TimescaleKey");
	}
}

void SaveCFG()
{
	ini.SetDoubleValue("Menu", "X", cfg_WindowPos.X);
	ini.SetDoubleValue("Menu", "Y", cfg_WindowPos.Y);

	ini.SetBoolValue("ESP", "EnablePlayerEnemyESP", cfg_EnablePlayerEnemyESP);
	ini.SetBoolValue("ESP", "EnablePlayerNames", cfg_DrawPlayerNames);
	ini.SetBoolValue("ESP", "EnablePlayerBoxes", cfg_DrawPlayerBoxes);
	ini.SetBoolValue("ESP", "EnablePlayerLines", cfg_DrawPlayerLines);
	ini.SetBoolValue("ESP", "EnableEnemyNames", cfg_DrawEnemyNames);
	ini.SetBoolValue("ESP", "EnableEnemyBoxes", cfg_DrawEnemyBoxes);
	ini.SetBoolValue("ESP", "EnableEnemyLines", cfg_DrawEnemyLines);
	ini.SetBoolValue("ESP", "EnableItemESP", cfg_EnableItemESP);
	ini.SetBoolValue("ESP", "EnableItemBoxes", cfg_DrawItemBoxes);
	ini.SetBoolValue("ESP", "EnableItemNames", cfg_DrawItemNames);
	ini.SetBoolValue("ESP", "EnableItemLines", cfg_DrawItemLines);

	ini.SetBoolValue("Aimbot", "EnableAimbotHold", cfg_EnableAimbotHold);
	ini.SetBoolValue("Aimbot", "EnableAimbotToggle", cfg_EnableAimbotToggle);
	ini.SetDoubleValue("Aimbot", "AimbotHoldKey", cfg_AimbotHoldKey);
	ini.SetDoubleValue("Aimbot", "AimbotToggleKey", cfg_AimbotToggleKey);
	ini.SetBoolValue("Aimbot", "EnableController", cfg_AimbotController);
	ini.SetDoubleValue("Aimbot", "AimbotFOV", cfg_AimbotFOV);
	ini.SetDoubleValue("Aimbot", "AimbotSmooth", cfg_AimbotSmoothing);

	ini.SetBoolValue("Aimbot", "EnableNoSpread", cfg_AimbotNoSpread);

	ini.SetBoolValue("Extra", "EnableNoReload", cfg_NoReload);
	ini.SetBoolValue("Extra", "EnableVacuum", cfg_LootVacuum);
	ini.SetDoubleValue("Extra", "VacuumRange", cfg_LootVacuumRange);
	ini.SetDoubleValue("Extra", "VacuumKey", cfg_LootVacuumKey);

	ini.SetBoolValue("Extra", "CacheNames", cfg_CacheEnemyNames);
	ini.SetBoolValue("Extra", "CacheBones", cfg_CacheEnemyBones);

	ini.SetDoubleValue("Extra", "HotSwapKey", cfg_HotSwapKey);
	ini.SetBoolValue("Extra", "HotSwapOverlay", cfg_HotSwapOverlay);

	ini.SetDoubleValue("Extra", "HotSwapSlot1", HotSwapCharacters[0]);
	ini.SetDoubleValue("Extra", "HotSwapSlot2", HotSwapCharacters[1]);
	ini.SetDoubleValue("Extra", "HotSwapSlot3", HotSwapCharacters[2]);
	ini.SetDoubleValue("Extra", "HotSwapSlot4", HotSwapCharacters[3]);

	ini.SetDoubleValue("Extra", "Timescale", cfg_TimeScale);
	ini.SetDoubleValue("Extra", "TimescaleKey", cfg_TimeScaleKey);

	ini.SaveFile("cfg.ini");
}


void WriteEnemyNamesData() {
	std::ofstream outFile("NameCache.dat", std::ios::binary);

	if (!outFile) {
		//std::cerr << "Error opening file for writing!" << std::endl;
		return;
	}
	outFile.clear();
	// Write the size of the map first
	size_t size = IDNameMap.size();
	outFile.write(reinterpret_cast<const char*>(&size), sizeof(size));

	// Write each key-value pair
	for (const auto& pair : IDNameMap) {
		// Write the key
		outFile.write(reinterpret_cast<const char*>(&pair.first), sizeof(pair.first));

		// Write the length of the string value
		size_t strLength = pair.second.size();
		outFile.write(reinterpret_cast<const char*>(&strLength), sizeof(strLength));

		// Write the string value
		outFile.write(pair.second.data(), strLength);
	}

	outFile.close();
}

std::unordered_map<int, std::string> ReadEnemyNamesData() {
	std::unordered_map<int, std::string> map;
	std::ifstream inFile("NameCache.dat", std::ios::binary);

	if (!inFile) {
		//std::cerr << "Error opening file for reading!" << std::endl;
		return map;
	}

	// Read the size of the map
	size_t size = 0;
	inFile.read(reinterpret_cast<char*>(&size), sizeof(size));

	for (size_t i = 0; i < size; ++i) {
		int key;
		size_t strLength;
		std::string value;

		// Read the key
		inFile.read(reinterpret_cast<char*>(&key), sizeof(key));

		// Read the length of the string value
		inFile.read(reinterpret_cast<char*>(&strLength), sizeof(strLength));

		// Read the string value
		value.resize(strLength);
		inFile.read(&value[0], strLength);

		// Insert into the map
		map[key] = value;
	}

	inFile.close();
	return map;
}

void WriteEnemyBonesData() {
	std::ofstream outFile("BoneCache.dat", std::ios::binary);

	if (!outFile) {
		//std::cerr << "Error opening file for writing!" << std::endl;
		return;
	}
	outFile.clear();
	// Write the size of the map first
	size_t mapSize = IDBoneMap.size();
	outFile.write(reinterpret_cast<const char*>(&mapSize), sizeof(mapSize));

	// Write each key-vector pair
	for (const auto& pair : IDBoneMap) {
		// Write the key
		outFile.write(reinterpret_cast<const char*>(&pair.first), sizeof(pair.first));

		// Write the size of the vector
		size_t vectorSize = pair.second.size();
		outFile.write(reinterpret_cast<const char*>(&vectorSize), sizeof(vectorSize));

		// Write the vector elements
		outFile.write(reinterpret_cast<const char*>(pair.second.data()), vectorSize * sizeof(int));
	}

	outFile.close();
}

std::unordered_map<int, std::vector<int>> ReadEnemyBonesData() {
	std::unordered_map<int, std::vector<int>> map;
	std::ifstream inFile("BoneCache.dat", std::ios::binary);

	if (!inFile) {
		//std::cerr << "Error opening file for reading!" << std::endl;
		return map;
	}

	// Read the size of the map
	size_t mapSize = 0;
	inFile.read(reinterpret_cast<char*>(&mapSize), sizeof(mapSize));

	for (size_t i = 0; i < mapSize; ++i) {
		int key;
		size_t vectorSize;
		std::vector<int> value;

		// Read the key
		inFile.read(reinterpret_cast<char*>(&key), sizeof(key));

		// Read the size of the vector
		inFile.read(reinterpret_cast<char*>(&vectorSize), sizeof(vectorSize));

		// Resize the vector to hold the elements
		value.resize(vectorSize);

		// Read the vector elements
		inFile.read(reinterpret_cast<char*>(value.data()), vectorSize * sizeof(int));

		// Insert into the map
		map[key] = value;
	}

	inFile.close();
	return map;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Init, hModule, 0, 0);

		return true;
	}
	return false;
}

DWORD WINAPI Init(HMODULE Module)
{

	//AllocConsole();
	//FILE* Dummy;
	//freopen_s(&Dummy, "CONOUT$", "w", stdout);
	//freopen_s(&Dummy, "CONIN$", "r", stdin);
	//printf("Started...\n");
	int procID = GetCurrentProcessId();
	HANDLE hModule = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procID);
	MODULEENTRY32 mEntry;
	mEntry.dwSize = sizeof(mEntry);
	sigmod GameModule = { NULL,NULL };
	do
	{
		if (!strcmp(mEntry.szModule, "M1-Win64-Shipping.exe"))
		{
			GameModule = { (uintptr_t)mEntry.hModule, mEntry.modBaseSize };
		}
	} while (Module32Next(hModule, &mEntry));
	CloseHandle(hModule);

	if (GameModule.dwBase)
	{
		uintptr_t GNamePtr = FindSignature(procID, GameModule, GNamesSig, GNamesMask);
		if (!GNamePtr)
		{
			throw std::runtime_error("Unable to find GNames.");
			return 1;
		}
		GNamePtr = GameModule.dwBase + GNamePtr;
		uintptr_t GNameOffsetAddress = GNamePtr + 3;
		int32_t GNameOffsetRelative = *reinterpret_cast<int32_t*>(GNameOffsetAddress);
		uintptr_t GNameAddress = (GNamePtr + 7) + GNameOffsetRelative;
		uintptr_t GNameOffset = GNameAddress - GameModule.dwBase;
		SDK::Offsets::GNames = GNameOffset;
		uintptr_t GObjsPtr = FindSignature(procID, GameModule, GObjectsSig, GObjectsMask);
		if (!GObjsPtr)
		{
			throw std::runtime_error("Unable to find GObjects.");
			return 1;
		}
		GObjsPtr = GameModule.dwBase + GObjsPtr;
		uintptr_t GObjOffsetAddress = GObjsPtr + 3;
		int32_t GObjOffsetRelative = *reinterpret_cast<int32_t*>(GObjOffsetAddress);
		uintptr_t GObjAddress = (GObjsPtr + 7) + GObjOffsetRelative;
		uintptr_t GObjeOffset = GObjAddress - GameModule.dwBase;
		SDK::Offsets::GObjects = GObjeOffset;


		uintptr_t SpreadPtr = FindSignature(procID, GameModule, NoSpreadSig, NoSpreadMask);
		if (!SpreadPtr)
		{
			throw std::runtime_error("Unable to find NoSpread.");
			return 1;
		}
		SpreadPtr = GameModule.dwBase + SpreadPtr;
		NoSpreadAddress = reinterpret_cast<uint8_t*>(SpreadPtr + 3);
		NoSpreadOriginal = *NoSpreadAddress;

		/*
		000 = XMM0
		001 = XMM1
		010 = XMM2
		011 = XMM3
		100 = XMM4
		101 = XMM5
		110 = XMM6
		111 = XMM7
		*/
		std::bitset<8> modifiedByte(NoSpreadOriginal);
		if (modifiedByte[5])
		{
			modifiedByte.set(2);
		}
		else
		{
			modifiedByte.reset(2);
		}
		if (modifiedByte[4])
		{
			modifiedByte.set(1);
		}
		else
		{
			modifiedByte.reset(1);
		}
		if (modifiedByte[3])
		{
			modifiedByte.set(0);
		}
		else
		{
			modifiedByte.reset(0);
		}

		NoSpreadCheat = (uint8_t)modifiedByte.to_ulong();
	}
	else
	{
		throw std::runtime_error("Unable to get game module.");
		return 1;
	}

	SDK::FName::InitInternal();
	SDK::UObject::GObjects.InitGObjects();

	bool isPostRenderHooked = false;
	do
	{
		SDK::UWorld* world = SDK::UWorld::GetWorld();
		if (world && world->IsA(SDK::UWorld::StaticClass()))
		{
			if (!GWorld)
			{
				GWorld = world;
			}
			SDK::ULocalPlayer* LocalPl = (SDK::ULocalPlayer*)((SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass())->GetPlayerController(GWorld, 0)->Player;
			if (LocalPl)
			{
				if (!LocalPlayer)
				{
					LocalPlayer = LocalPl;
				}
				SDK::UGameViewportClient* ViewportClient = LocalPlayer->ViewportClient;
				if (ViewportClient)
				{
					if (!LocalView)
					{
						LocalView = ViewportClient;
					}
					ULONG64* Func = GetDrawTransitionVTableAddress(LocalView);
					if (Func)
					{
						M1org = (decltype(M1org))*Func;
						__int64 ptr = (__int64)YourHookProc;
						DWORD old;
						VirtualProtect(Func, sizeof(void*), PAGE_EXECUTE_READWRITE, &old);
						memcpy(Func, &ptr, 8);
						VirtualProtect(Func, sizeof(void*), old, NULL);
						isPostRenderHooked = true;
					}
				}
			}
		}
		else
		{
			Sleep(1000);
		}
	} while (!isPostRenderHooked);
	ini.SetUnicode();
	LoadCFG();
	return 1;
}

ULONG64* GetDrawTransitionVTableAddress(SDK::UGameViewportClient* vp)
{
	if (vp)
	{
		__int64** vtable = NULL;
		int Index = 0;
		vtable = *reinterpret_cast<__int64***>(vp);
		if (vtable)
		{
			for (int i = 0; i < 0x200; i++)
			{
				BYTE* code = (BYTE*)vtable[i];
				for (int j = 0; j < 0x400; j++)
				{
					BYTE* p = code + j;
					if (
						(p[0] == 0x4C && p[1] == 0x8D && p[2] == 0x05) ||
						(p[0] == 0x48 && p[1] == 0x8D && p[2] == 0x15)
						)
					{
						int offset = *(int*)(p + 3);
						wchar_t* str = (wchar_t*)(p + 7 + offset);
						if (str == std::wstring(L"PAUSED"))
						{
							Index = i;
							goto ext;
						}
					}
				}
			}
		}
	ext:
		if (Index)
		{
			return (ULONG64*)&vtable[Index];
		}
	}
	return NULL;
}

bool MemoryCompare(const BYTE* bData, const BYTE* bSig, const char* szMask)
{
	for (; *szMask; szMask++, bData++, bSig++)
		if (*szMask == 'x' && *bData != *bSig)
			return false;
	return true;
}

uintptr_t FindSignature(int procID, sigmod mod, const char* sig, const char* mask)
{
	BYTE* data = new BYTE[mod.dwSize];
	SIZE_T bytesRead;

	Toolhelp32ReadProcessMemory(procID, (LPVOID)(mod.dwBase), data, mod.dwSize, &bytesRead);

	for (uintptr_t i = 0; i < mod.dwSize; i++) {
		if (MemoryCompare((const BYTE*)(data + i), (const BYTE*)sig, mask)) {
			delete[] data;
			return i; // returns offset only
		}
	}
	delete[] data;
	return NULL;
}
