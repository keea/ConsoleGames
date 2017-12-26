/*
* 메뉴에 대한 컨트롤 담당
* @file		MenuCtrl.cpp
* @date     Tue Nov 21 12:49:18 2017
* @author   keea
*/

#include "MenuCtrl.h"

void MenuCtrl::CmdUp()
{
	if (state == KEY_MENU_STATE::MENU2)
		state = KEY_MENU_STATE::MENU1;
}

void MenuCtrl::CmdDown()
{
	if (state == KEY_MENU_STATE::MENU1)
		state = KEY_MENU_STATE::MENU2;
}

int MenuCtrl::GetState()
{
	return state;
}

void MenuCtrl::CmdSelect() {

	Controller::SetEnd();

	if (state == KEY_MENU_STATE::MENU1) 
	{
		SetNextState(STATE::GAME_SCENE);
	}
	else 
	{
		SetNextState(STATE::END);
	}
}