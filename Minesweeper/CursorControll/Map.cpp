/*
* ¸Ê
* @file		Map.h
* @date     Fri Nov 24 18:56:21 2017
* @author   keea
*/


#include <random>
#include "Map.h"

Map::Map()
{
	for (int i = 0; i < MAP_WIDTH; i++) {
		for (int j = 0; j < MAP_HEIGHT; j++) {
			int x = 5 * (i + 1);
			int y = 2 * (j + 1);
			block[i][j] = new Block(x, y, false);
		}
	}

	maxBoom = (MAP_WIDTH*MAP_HEIGHT) - 5;
}

void Map::CreatMap(const int x, const int y)
{
	int curtBoom = rand() % maxBoom + 1;
	boomNum = curtBoom;
	while (curtBoom > 0)
	{
		int randX = rand() % MAP_WIDTH;
		int randY = rand() % MAP_HEIGHT;

		bool isStartPos = randX == x && randY == y;
		bool isBoomPos = block[randX][randY]->IsBoom();

		if (isStartPos || isBoomPos) 
		{
		}
		else 
		{
			block[randX][randY]->SetBoom();
			curtBoom -= 1;
		}
	}
}

Block * Map::GetBlock(const int x, const int y)
{
	return block[x][y];
}

int Map::GetX(const int x, const int y)
{
	return block[x][y]->GetX();
}

int Map::GetY(const int x, const int y)
{
	return block[x][y]->GetY();
}

char Map::GetShape(const int x, const int y)
{
	return block[x][y]->GetShape();
}

int Map::BoomNum()
{
	return boomNum;
}
