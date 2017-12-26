#include "Player.h"


Player::Player(const int x, const int y)
{
	mapIdx.x = x;
	mapIdx.y = y;
	SetShape('_');

	SetX(5 * (x + 1));
	SetY(2 * (y + 1) + 1);
}

void Player::SetMapPos(const int x, const int y)
{
	mapIdx.x = x;
	mapIdx.y = y;

	SetX(5 * (x + 1));
	SetY(2 * (y + 1) + 1);
}

POINT Player::GetMapPos()
{
	return mapIdx;
}
