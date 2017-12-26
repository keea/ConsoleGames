/*
* 게임오브젝트
* @file		GameObj.cpp
* @date     Fri Nov 24 18:41:07 2017
* @author   keea
*/
#include "GameObj.h"


int GameObj::GetX()
{
	return pos.x;
}

int GameObj::GetY()
{
	return pos.y;
}

char GameObj::GetShape()
{
	return shape;
}

void GameObj::SetX(int _x)
{
	pos.x = _x;
}

void GameObj::SetY(int _y)
{
	pos.y = _y;
}

void GameObj::SetPos(int _x, int _y)
{
	pos.x = _x;
	pos.y = _y;
}

void GameObj::SetShape(char _shape)
{
	shape = _shape;
}
