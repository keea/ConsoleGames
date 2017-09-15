/*
* »ç¶÷
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

int Man::GetPosX() {
	return posX;
}

int Man::GetPosY() {
	return posY;
}

char Man::GetCh() {
	return ch;
}

Man& Man::operator=(const Man& ref) {
	posX = ref.posX;
	posY = ref.posY;
	ch = ref.ch;

	return *this;
}