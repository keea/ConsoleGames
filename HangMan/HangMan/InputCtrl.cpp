/*
* �Է��� ���
* @file		InputCtrl.cpp
* @date     Fri Sep 15 16:28:38 2017
* @author   keea
*/

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "InputCtrl.h"

const int ESC_KEY = 27;

//���ĺ� �Է�
void InputCtrl::InputAlpha() {
	bool isLoop = true;
	char ch;
	while (isLoop)
	{
		std::cout << "���ĺ��� �Է����ּ���." << std::endl;
		ch = getch();

		if (ch == ESC_KEY) {
			alpha = ESC_KEY;
			break;
		}
		isLoop = !IsAlpha(ch);
	}
	alpha = ChgAlpha(ch);
}

//���ĺ� ��ȯ
char InputCtrl::GetAlpha() {
	InputAlpha();
	return alpha;
}

//���ĺ����� üũ
bool InputCtrl::IsAlpha(char ch) {
	if (ch < 'A' || ch > 'z') {
		std::cout << "�߸��� �Է°��Դϴ�." << std::endl;
		ClearDisplay();
		return false;
	}
	return true;
}

//�ҹ��ڸ� �빮�ڷ� ����
char InputCtrl::ChgAlpha(char ch) {
	if (ch >= 'a' || 'z' <= ch) {
		return ch - 32;
	}
	return ch;
}

void InputCtrl::ClearDisplay() {
	Sleep(500);
	system("cls");
}

InputCtrl::~InputCtrl() {
}