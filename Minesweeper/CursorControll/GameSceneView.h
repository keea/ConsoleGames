/*
* 게임 화면 담당
* @file		GameSceneView.h
* @date     Tue Nov 28 17:56:57 2017
* @author   keea
*/

#pragma once
#include "View.h"
#include "GameObjDisplay.h"

struct GameSceneView : public View
{
private:
	GameObjDisplay * views[10];
	int maxNum;
	int count = 0;
public:
	GameSceneView();
	void AddView(GameObjDisplay * view);
	virtual void Display();
};

