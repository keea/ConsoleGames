/*
* 플레이어 컨트롤을 담당
* @file		PlayerCtrl.h
* @date     Wed Nov 29 17:39:48 2017
* @author   keea
*/

#pragma once

#include "Player.h"

struct PlayerCtrl
{
private:
	Player player;
public:
	PlayerCtrl(const int x, const int y);
	void Move(const int x, const int y);
	POINT GetPosition();
	Player * GetPlayer();
};

