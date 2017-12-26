/*
* 게임 클리어에 대한 컨트롤 담당
* @file		GameClearCtrl.cpp
* @date     Sat Dec 16 17:09:41 2017
* @author   keea
*/

#include "GameClearCtrl.h"


void GameClearCtrl::CmdUp()
{
	if (state == KEY_MENU_STATE::MENU2)
		state = KEY_MENU_STATE::MENU1;
}

void GameClearCtrl::CmdDown()
{
	if (state == KEY_MENU_STATE::MENU1)
		state = KEY_MENU_STATE::MENU2;
}

int GameClearCtrl::GetState()
{
	return state;
}

void GameClearCtrl::CmdSelect()
{
	Controller::SetEnd();

	if (state == KEY_MENU_STATE::MENU1)
	{
		SetNextState(STATE::MAIN_SCENE);
	}
	else
	{
		SetNextState(STATE::END);
	}
}
