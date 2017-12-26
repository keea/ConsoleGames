/*
* �� ���� ���
* @file		MapCtrl.h
* @date     Thu Nov 30 12:00:57 2017
* @author   keea
*/

#pragma once
#include "Map.h"

struct MapCtrl
{
private:
	Map map;
public:
	void CreateMap(const int x, const int y);
	bool IsBlockOpen(const int x, const int y); // ����� ���µǾ� �ִ°�?
	bool BlockOpen(const int x, const int y);
	Map *  GetMap();
};

