/*
* 게임 데이터를 보여준다.
* @file		PlayDataView.h
* @date     Sat Dec 16 16:38:03 2017
* @author   keea
*/

#pragma once
#include "GameObjDisplay.h"
#include "GamePlayData.h"

struct PlayDataView : public GameObjDisplay
{
private:
	GamePlayData * data;
public:
	PlayDataView(GamePlayData * _data);
	void Display(DoubleBuffer buffer);
};

