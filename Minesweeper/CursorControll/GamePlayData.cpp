/*
* 게임플레이에 관련된 데이터
* @file		GamePlayData.h
* @date     Fri Dec 15 16:51:44 2017
* @author   keea
*/

#include "GamePlayData.h"
#include "Data.h"

void GamePlayData::SetExistBoom(int _existBoom)
{
	existBoom = _existBoom;
	oddmentBlock = ((MAP_WIDTH * MAP_HEIGHT) - existBoom)-1;
	hp = MAP_WIDTH + (MAP_HEIGHT / 2);
}

int GamePlayData::GetExistBoom()
{
	return existBoom;
}

void GamePlayData::SubtractBlock()
{
	oddmentBlock -= 1;
}

void GamePlayData::SubtractHp()
{
	hp -= 1;
}

int GamePlayData::GetOaddmentBlock()
{
	return oddmentBlock;
}

int GamePlayData::GetHp()
{
	return hp;
}
