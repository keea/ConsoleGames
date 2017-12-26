/*
* 리스타트에 대한 컨트롤 담당
* @file		RestartCtrl.cpp
* @date     Fri Dec 15 16:29:37 2017
* @author   keea
*/


#include "RestartCtrl.h"


void RestartCtrl::CmdUp()
{
	if (state == KEY_MENU_STATE::MENU2)
		state = KEY_MENU_STATE::MENU1;
}

void RestartCtrl::CmdDown()
{
	if (state == KEY_MENU_STATE::MENU1)
		state = KEY_MENU_STATE::MENU2;
}

int RestartCtrl::GetState()
{
	return state;
}

void RestartCtrl::CmdSelect()
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
