/*
* 게임 화면 담당
* @file		GameSceneView.cpp
* @date     Tue Nov 28 17:58:30 2017
* @author   keea
*/

#include "GameSceneView.h"

GameSceneView::GameSceneView()
{
	View::Init();
	maxNum = 10;
}

void GameSceneView::AddView(GameObjDisplay * view)
{
	if (count < maxNum) {
		views[count] = view;
		count += 1;
	}
}

void GameSceneView::Display()
{
	GetBuffer().ClearBuffer();

	for (int i = 0; i < count; i++) 
	{
		views[i]->Display(GetBuffer());
	}

	DisplayDevInfo(); //개발자 정보 출력
	GetBuffer().SwapBuffer();
}
