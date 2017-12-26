/*
* ºí·Ï
* @file		Block.h
* @date     Fri Nov 24 18:46:56 2017
* @author   keea
*/

#pragma once
#include "GameObj.h"

struct Block : public GameObj
{
private:
	bool isOpen;
	bool isBoom;
	char info;
public:
	Block() {};
	Block(int x, int y, bool _isBoom);
	void SetBoom();
	void SetInfo(const char info);
	char GetInfo();
	bool IsBoom();
	void Open();
};

