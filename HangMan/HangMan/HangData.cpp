/*
* ����� ������
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

//���� ����
void HangData::SetHangWord(const char * _hangWord) {
}

//���� �� ���
char HangData::GetHangWord(int idx) {
	return hangWord[idx];
}

//���� �� ���
char * HangData::GetHangWord() {
	return hangWord;
}

//�÷��̾� �� ����
void HangData::SetPlayerAns(const char alpha, const int idx) {
	playerAns[idx] = alpha;
}

//�÷��̾� �� ���
char HangData::GetPlayerAns(int idx) {
	return playerAns[idx];
}

//���� üũ
int HangData::GetWordLen() {
	return strlen(hangWord)+1;
}