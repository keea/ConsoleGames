/*
* 게임 클리어
* @file		GameClearScene.cpp
* @date     Sat Dec 16 17:04:05 2017
* @author   keea
*/

#include "GameClearScene.h"
#include "Data.h"
#include "InputHandler.h"
#include "GameClearCtrl.h"
#include "SoundManager.h"

int GameClearScene::Update()
{
	view.Init();

	InputHandler inputHandler;
	GameClearCtrl ctrl;
	SoundManager::GetInstance()->PlayClear();
	while (ctrl.GetIsNotEnd())
	{
		Command * command = inputHandler.handlerInput();
		if (command != nullptr)
			command->execute(&ctrl);

		view.SetKey(ctrl.GetState());
		view.Display();
	}

	view.DeleteDisplay();
	return ctrl.GetNextState();
}
