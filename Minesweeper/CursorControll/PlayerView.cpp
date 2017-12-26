/*
* 플레이어를 보여준다.
* @file		PlayerView.cpp
* @date     Wed Nov 29 13:03:56 2017
* @author   keea
*/

#include "PlayerView.h"

PlayerView::PlayerView(Player * p)
{
	player = p;
}

void PlayerView::Display(DoubleBuffer buffer)
{
	buffer.Draw(player->GetX(), player->GetY(), '-');
}
