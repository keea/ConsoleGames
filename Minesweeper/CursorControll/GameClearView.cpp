/*
* 게임 클리어 화면
* @file		GameClearView.cpp
* @date     Sat Dec 16 17:14:32 2017
* @author   keea
*/

#include "GameClearView.h"
#include "Data.h"


GameClearView::GameClearView()
{
	key = KEY_MENU_STATE::MENU1;
	View::Init();
}

void GameClearView::Display()
{
	GetBuffer().ClearBuffer();

	GetBuffer().DrawString(34, 6, "게임클리어");
	GetBuffer().DrawString(34, 10, "메인화면");
	GetBuffer().DrawString(35, 12, "끝내기");
	GetBuffer().DrawString(33, 16, "PRESS_ENTER");

	DisplayDevInfo();

	if (KEY_MENU_STATE::MENU1 == key) {
		GetBuffer().DrawString(31, 10, "->");
	}
	else if (KEY_MENU_STATE::MENU2 == key) {
		GetBuffer().DrawString(31, 12, "->");
	}

	GetBuffer().SwapBuffer();
}

void GameClearView::SetKey(int _key)
{
	key = _key;
}

