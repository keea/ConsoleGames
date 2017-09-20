/*
* 행맨의 데이터
* @file		Data.cpp
* @date     Fri Sep 15 12:04:51 2017
* @author   keea
*/

#include <iostream>
#include <string>
#include "HangData.h"
#include "HangWord.h"

HangData::HangData() {
	char * tempWord = RandHangWord(rand()%10);

	int hWordLen = strlen(tempWord);

	hangWord = new char[hWordLen+1];
	strcpy(hangWord, tempWord);

	playerAns = new char[hWordLen];
	for (int i = 0; i < hWordLen; i++)
		playerAns[i] = '_';
}

//랜덤으로 문제 들고 오기
char * HangData::RandHangWord(int randNum) {
	const int maxNum = 10;
	
	HangWord * hangWords[10];
	hangWords[0] = new HangWord("HELLO");
	hangWords[1] = new HangWord("SIGONGJOA");
	hangWords[2] = new HangWord("BATTLEGROUNDS");
	hangWords[3] = new HangWord("HELLOWORLD");
	hangWords[4] = new HangWord("UNREALE");
	hangWords[5] = new HangWord("UNITY");
	hangWords[6] = new HangWord("COCOS");
	hangWords[7] = new HangWord("OBJECT");
	hangWords[8] = new HangWord("COMPUTER");
	hangWords[9] = new HangWord("POINTER");

	return hangWords[randNum]->GetHangWord();
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