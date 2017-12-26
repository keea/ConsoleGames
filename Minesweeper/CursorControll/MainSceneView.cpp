/*
* 메인메뉴 화면 담당
* @file		MainSceneView.cpp
* @date     Tue Nov 21 11:34:41 2017
* @author   keea
*/


#include "MainSceneView.h"
#include "Data.h"

MainSceneView::MainSceneView()
{
	key = KEY_MENU_STATE::MENU1;
	View::Init();
}

void MainSceneView::Display()
{
	GetBuffer().ClearBuffer();

	GetBuffer().DrawString(35, 6, "게임");
	GetBuffer().DrawString(34, 10, "게임시작");
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

void MainSceneView::SetKey(int _key)
{
	key = _key;
}