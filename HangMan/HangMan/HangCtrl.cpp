/*
* �����Ʈ�� ���
* @file		HangCtrl.h
* @date     Fri Sep 15 17:26:27 2017
* @author   keea
*/

#include <iostream>
#include "HangCtrl.h"

HangCtrl::HangCtrl():HangData() {}
HangCtrl::~HangCtrl() {
}


//���±��� �Է��� �� ����
void HangCtrl::ShowPlayInput() {
	for (int i = 0; i < GetWordLen(); i++) {
		std::cout << GetPlayerAns(i);
	}
	std::cout << std::endl;
}

//������ ���ڸ� ������� üũ
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

//���� Ŭ�������� Ȯ��.
bool HangCtrl::IsClear() {
	for (int i = 0; i < GetWordLen(); i++) {
		if (GetPlayerAns(i) == '_')
			return false;
	}
	return true;
}