/*
* ºí·Ï
* @file		Block.cpp
* @date     Fri Nov 24 18:50:40 2017
* @author   keea
*/

#include "Block.h"

Block::Block(int x, int y, bool _isBoom)
{
	SetPos(x, y);
	isOpen = false;
	isBoom = false;
	info = 0 + '0';
	SetShape('?');
}

void Block::SetBoom()
{
	info = '*';
	isBoom = true;
}

void Block::SetInfo(const char _info)
{
	info = _info;
}

char Block::GetInfo()
{
	return info - '0';
}

bool Block::IsBoom()
{
	return isBoom;
}

void Block::Open() {
	isOpen = true;
	SetShape(info);
}
