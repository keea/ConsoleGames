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
		isLoop = !IsAlpha(ch);
	}
	alpha = ch;
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

void InputCtrl::ClearDisplay() {
	Sleep(1000);
	system("cls");
}

InputCtrl::~InputCtrl() {
}