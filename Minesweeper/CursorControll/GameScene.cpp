/*
* 게임 화면
* @file		GameScene.cpp
* @date     Mon Nov 20 17:50:32 2017
* @author   keea
*/

#include "GameScene.h"
#include "GameCtrl.h"
#include "GameSceneView.h"
#include "InputHandler.h"
#include "Player.h"
#include "Map.h"
#include "GameSceneView.h"
#include "MapView.h"
#include "PlayerView.h"


int GameScene::Update()
{
	GameCtrl gCtrl;
	InputHandler inputHandler;
	gCtrl.Init();

	while (gCtrl.GetIsNotEnd())
	{
		Command * command = inputHandler.handlerInput();
		if (command != NULL)
			command->execute(&gCtrl);
		gCtrl.GetView()->Display();
	}

	gCtrl.GetView()->DeleteDisplay();
	return gCtrl.GetNextState();
}
