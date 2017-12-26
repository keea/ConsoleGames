/*
* 플레이어 컨트롤을 담당
* @file		PlayerCtrl.h
* @date     Wed Nov 29 17:39:48 2017
* @author   keea
*/

#include "PlayerCtrl.h"

PlayerCtrl::PlayerCtrl(const int x, const int y) :player(x, y)
{
}

void PlayerCtrl::Move(const int x, const int y)
{
	int mapX = (player.GetMapPos().x + x) % MAP_WIDTH;
	if (mapX < 0)
		mapX = MAP_WIDTH + x;

	int mapY = (player.GetMapPos().y + y) % MAP_HEIGHT;
	if (mapY < 0)
		mapY = MAP_HEIGHT + y;

	player.SetMapPos(mapX, mapY);
}

POINT PlayerCtrl::GetPosition()
{
	return player.GetMapPos();
}

Player * PlayerCtrl::GetPlayer()
{
	return &player;
}
