/*
* 다시 시작
* @file		RestartScene.h
* @date     Mon Nov 20 17:53:40 2017
* @author   keea
*/

#pragma once
#include "Scene.h"
#include "RestartSceneView.h"

struct RestartScene : public Scene
{
private:
	RestartSceneView view;
public:
	virtual int Update();
};

