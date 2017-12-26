#include "MapCtrl.h"

void MapCtrl::CreateMap(const int x, const int y)
{
	map.CreatMap(x, y);
	BlockOpen(x, y);
}

bool MapCtrl::IsBlockOpen(const int _x, const int _y)
{
	if(map.GetShape(_x, _y) == '?')
		return false;

	return true;
}

bool MapCtrl::BlockOpen(const int _x, const int _y)
{
	int check[3] = { -1, 0, 1 };
	int boomNum = 0;
	bool isboom = false;

	//¿ÀÇÂ ÇÒ °ÍÀÌ ÆøÅºÀÌ ¾Æ´Ò°æ¿ì
	if (!map.GetBlock(_x, _y)->IsBoom())
	{
		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 3; x++) {
				int tempX = _x + check[x];
				int tempY = _y + check[y];

				//ºí·ÏÀÇ ÁÂÇ¥ °ªÀÌ Á¸ÀçÇÑÁö Ã¼Å©
				bool check1 = tempX > -1 && tempY > -1;
				bool check2 = tempX < MAP_WIDTH && tempY < MAP_HEIGHT;

				if (check1 && check2) {
					if (map.GetBlock(tempX, tempY)->IsBoom())
						boomNum += 1;
				}
			}
		}
		map.GetBlock(_x, _y)->SetInfo(boomNum + '0');
	}
	else
	{
		//ÆøÅºÀÏ °æ¿ì
		isboom = true;
	}
	map.GetBlock(_x, _y)->Open();
	return isboom;
}

Map * MapCtrl::GetMap()
{
	return &map;
}
