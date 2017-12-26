/*
* ���θ޴� ȭ�� ���
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

	GetBuffer().DrawString(35, 6, "����");
	GetBuffer().DrawString(34, 10, "���ӽ���");
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

void MainSceneView::SetKey(int _key)
{
	key = _key;
}