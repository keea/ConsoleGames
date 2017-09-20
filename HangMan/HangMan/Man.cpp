/*
* 사람
* @file		Man.cpp
* @date     Fri Sep 15 19:22:18 2017
* @author   keea
*/

#include "Man.h"


void Man::SetMan(int x, int y, int _ch) {
	posX = x;
	posY = y;
	ch = _ch;
}

//X좌표 가져오기
int Man::GetPosX() {
	return posX;
}

//Y좌표 가져오기
int Man::GetPosY() {
	return posY;
}

//사람 모양 가져오기
char Man::GetCh() {
	return ch;
}

Man& Man::operator=(const Man& ref) {
	posX = ref.posX;
	posY = ref.posY;
	ch = ref.ch;

	return *this;
}