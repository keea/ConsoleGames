/*
* ���� Ŭ���� ȭ��
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

	GetBuffer().DrawString(34, 6, "����Ŭ����");
	GetBuffer().DrawString(34, 10, "����ȭ��");
	GetBuffer().DrawString(35, 12, "������");
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

