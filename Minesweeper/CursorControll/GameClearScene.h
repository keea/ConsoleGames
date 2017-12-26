/*
* 게임클리어
* @file		GameClearScene.h
* @date     Sat Dec 16 17:03:01 2017
* @author   keea
*/

#pragma once
#include "Scene.h"
#include "GameClearView.h"

struct GameClearScene : public Scene
{
private:
	GameClearView view;
public:
	virtual int Update();
};

