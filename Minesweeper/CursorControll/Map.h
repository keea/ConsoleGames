/*
* ��
* @file		Map.h
* @date     Fri Nov 24 18:56:21 2017
* @author   keea
*/

#pragma once
#include "Block.h"
#include "Data.h"

struct Map
{
private:
	Block * block[MAP_WIDTH][MAP_HEIGHT];
	int maxBoom; //�ִ� ��ź ����
	int boomNum; //���� ��ź����
public:
	Map();
	void CreatMap(const int x, const int y); //�ʰ� ��ź��ġ �����
	Block * GetBlock(const int x, const int y);
	int GetX(const int x, const int y);
	int GetY(const int x, const int y);
	char GetShape(const int x, const int y);
	int BoomNum();
};

