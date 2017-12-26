/*
* 플레이어
* @file		Player.h
* @date     Fri Nov 24 19:26:21 2017
* @author   keea
*/

#pragma once
#include "GameObj.h"
#include "Data.h"

class Player : public GameObj
{
private:
	POINT mapIdx = {0,0};
public:
	Player(const int x, const int y);
	void SetMapPos(const int x, const int);
	POINT GetMapPos();
};

