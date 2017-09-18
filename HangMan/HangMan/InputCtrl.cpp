/*
* 입력을 담당
* @file		InputCtrl.cpp
* @date     Fri Sep 15 16:28:38 2017
* @author   keea
*/

#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "InputCtrl.h"

const int ESC_KEY = 27;

//알파벳 입력
void InputCtrl::InputAlpha() {
	bool isLoop = true;
	char ch;
	while (isLoop)
	{
		std::cout << "알파벳을 입력해주세요." << std::endl;
		ch = getch();

		if (ch == ESC_KEY) {
			alpha = ESC_KEY;
			break;
		}
		isLoop = !IsAlpha(ch);
	}
	alpha = ChgAlpha(ch);
}

//알파벳 반환
char InputCtrl::GetAlpha() {
	InputAlpha();
	return alpha;
}

//알파벳인지 체크
bool InputCtrl::IsAlpha(char ch) {
	if (ch < 'A' || ch > 'z') {
		std::cout << "잘못된 입력값입니다." << std::endl;
		ClearDisplay();
		return false;
	}
	return true;
}

//소문자를 대문자로 변경
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