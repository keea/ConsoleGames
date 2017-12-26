#pragma once
/*
* 메인 화면
* @file		MainScene.h
* @date     Mon Nov 20 17:38:55 2017
* @author   keea
*/

#pragma once
#include "Scene.h"
#include "MainSceneView.h"

struct MainScene : public Scene
{
private:
	MainSceneView view;
public:
	virtual int Update();
};
