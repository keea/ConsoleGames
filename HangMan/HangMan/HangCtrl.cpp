/*
* 행맨컨트롤 담당
* @file		HangCtrl.h
* @date     Fri Sep 15 17:26:27 2017
* @author   keea
*/

#include <iostream>
#include "HangCtrl.h"

HangCtrl::HangCtrl():HangData() {}
HangCtrl::~HangCtrl() {
}


//여태까지 입력한 값 보기
void HangCtrl::ShowPlayInput() {
	for (int i = 0; i < GetWordLen(); i++) {
		std::cout << GetPlayerAns(i);
	}
	std::cout << std::endl;
}

//문제의 문자를 맞췄는지 체크
bool HangCtrl::IsNotHang(char ch) {
	bool isTrue = false;
	for (int i = 0; i < GetWordLen(); i++) {
		if (GetHangWord(i) == ch) {
			SetPlayerAns(ch, i);
			isTrue = true;
		}
	}
	return isTrue;
}

//게임 클리어한지 확인.
bool HangCtrl::IsClear() {
	for (int i = 0; i < GetWordLen(); i++) {
		if (GetPlayerAns(i) == '_')
			return false;
	}
	return true;
}