/*
* 다시시작 화면
* @file		RestartSceneView.h
* @date     Fri Dec 15 16:31:05 2017
* @author   keea
*/

#pragma once
#include "View.h"
struct RestartSceneView : public View
{
private:
	int key;
public:
	RestartSceneView();
	virtual void Display();
	void SetKey(int _key);
};

