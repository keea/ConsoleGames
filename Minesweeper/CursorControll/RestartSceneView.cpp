/*
* ����ŸƮ ȭ��
* @file		RestartSceneView.cpp
* @date     Fri Dec 15 16:31:43 2017
* @author   keea
*/

#include "RestartSceneView.h"
#include "Data.h"

RestartSceneView::RestartSceneView()
{
	key = KEY_MENU_STATE::MENU1;
	View::Init();
}

void RestartSceneView::Display()
{
	GetBuffer().ClearBuffer();

	GetBuffer().DrawString(34, 6, "���ӿ���");
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

void RestartSceneView::SetKey(int _key)
{
	key = _key;
}


