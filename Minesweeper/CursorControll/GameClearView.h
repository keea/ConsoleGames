/*
* 게임 클리어 화면
* @file		GameClearView.h
* @date     Sat Dec 16 17:13:19 2017
* @author   keea
*/

#pragma once
#include "View.h"
class GameClearView : public View
{
private:
	int key;
public:
	GameClearView();
	virtual void Display();
	void SetKey(int _key);
};

