/*
* 게임오브젝트
* @file		GameObj.h
* @date     Fri Nov 24 18:39:02 2017
* @author   keea
*/

#pragma once
#include <Windows.h>
#include <windef.h>
struct GameObj
{
private:
	POINT pos = {0,0};
	char shape;
public:
	int GetX();
	int GetY();
	char GetShape();

	void SetX(int _x);
	void SetY(int _y);
	void SetPos(int x, int y);
	void SetShape(char _shape);
};

