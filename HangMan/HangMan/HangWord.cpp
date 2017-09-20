/*
* 행맨 문제 글자
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

//행맨 단어 가져오기
char * HangWord::GetHangWord() {
	return hangWord;
}
