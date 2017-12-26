/*
* 플레이어를 보여준다.
* @file		PlayerView.h
* @date     Wed Nov 29 12:50:32 2017
* @author   keea
*/

#pragma once

#include "GameObjDisplay.h"
#include "Player.h"

struct PlayerView : public GameObjDisplay
{
private:
	Player * player;
public:
	PlayerView(Player * p);
	void Display(DoubleBuffer buffer);
};

