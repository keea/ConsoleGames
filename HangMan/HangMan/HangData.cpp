/*
* 행맨의 데이터
* @file		Data.cpp
* @date     Fri Sep 15 12:04:51 2017
* @author   keea
*/

#include <iostream>
#include <string>
#include "HangData.h"

HangData::HangData() {
	char * tempWord = "HELLO";
	
	int hWordLen = strlen(tempWord);

	hangWord = new char[hWordLen+1];
	strcpy(hangWord, tempWord);

	playerAns = new char[hWordLen];
	for (int i = 0; i < hWordLen; i++)
		playerAns[i] = '_';
}

HangData::~HangData() {
	delete[] hangWord;
	delete[] playerAns;
}

//문제 설정
void HangData::SetHangWord(const char * _hangWord) {
}

//문제 답 얻기
char HangData::GetHangWord(int idx) {
	return hangWord[idx];
}

//문제 답 얻기
char * HangData::GetHangWord() {
	return hangWord;
}

//플레이어 답 셋팅
void HangData::SetPlayerAns(const char alpha, const int idx) {
	playerAns[idx] = alpha;
}

//플레이어 답 얻기
char HangData::GetPlayerAns(int idx) {
	return playerAns[idx];
}

//길이 체크
int HangData::GetWordLen() {
	return strlen(hangWord)+1;
}