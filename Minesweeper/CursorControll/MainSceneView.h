/*
* 메인 화면
* @file		MainScene.h
* @date     Mon Nov 20 17:38:55 2017
* @author   keea
*/

#pragma once
#include "View.h"

struct MainSceneView : public View
{
private:
	int key;
public:
	MainSceneView();
	virtual void Display();
	void SetKey(int _key);
};

