/*
* 맵을 보여준다.
* @file		MapView.cpp
* @date     Wed Nov 29 11:07:42 2017
* @author   keea
*/

#include "MapView.h"
#include "Data.h"


MapView::MapView(Map * _map)
{
	map = _map;
}

void MapView::Display(DoubleBuffer buffer)
{
	for (int i = 0; i < MAP_WIDTH; i++) {
		for (int j = 0; j < MAP_HEIGHT; j++) {
			buffer.Draw(map->GetX(i, j),
				map->GetY(i, j),
				map->GetShape(i, j));
		}
	}
}
