/*
* ��� ���� ����
* @file		HangWord.cpp
* @date     Tue Sep 19 19:01:45 2017
* @author   keea
*/

#include <string>
#include "HangWord.h"

HangWord::~HangWord() {
	delete[] hangWord;
}

HangWord::HangWord(const char * wd) {
	if (hangWord != NULL)
		hangWord = NULL;

	int wdLen = strlen(wd) + 1;

	hangWord = new char[wdLen];
	strcpy(hangWord, wd);
}

//��� �ܾ� ��������
char * HangWord::GetHangWord() {
	return hangWord;
}
