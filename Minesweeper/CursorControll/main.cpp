/*
* 메인 함수
* @file		main.cpp
* @date     Mon Nov 20 14:28:30 2017
* @author   keea
*/

#include "Data.h"
#include "SoundManager.h"
#include "Scene.h"
#include "MainScene.h"
#include "GameScene.h"
#include "RestartScene.h"
#include "GameClearScene.h"

// 게임 클리어 화면 추가.
// 새로운 게임 요소 추가.(아이템 등 등)

void main()
{
	int state = STATE::MAIN_SCENE;
	int nextState = state;

	Scene * scenes[4];
	scenes[STATE::MAIN_SCENE] = new MainScene;
	scenes[STATE::GAME_SCENE] = new GameScene;
	scenes[STATE::RESTART_SCENE] = new RestartScene;
	scenes[STATE::CLEAR_SCENE] = new GameClearScene;
	SoundManager::GetInstance()->PlayBgm();

	while (true)
	{
	
		if (state >= STATE::END)
			break;

		nextState = scenes[state]->Update();
		state = nextState;
	}

	SoundManager::GetInstance()->PurgeInstance();
}

