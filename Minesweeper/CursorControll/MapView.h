/*
* 맵을 보여준다.
* @file		MapView.h
* @date     Wed Nov 29 10:55:07 2017
* @author   keea
*/

#pragma once

#include "GameObjDisplay.h"
#include "Map.h"

struct MapView : public GameObjDisplay
{
private:
	Map * map;
public:
	MapView(Map * _map);
	void Display(DoubleBuffer buffer);
};

