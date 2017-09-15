/*
* 행맨의 모습을 보여준다.
* @file		HangDisplay
* @date     Fri Sep 15 19:16:15 2017
* @author   keea
*/

#include <Windows.h>
#include <iostream>
#include "HangDisplay.h"


void HangDisplay::gotoxy(int x, int y)
{
	HANDLE hOut;
	COORD  coord;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(hOut, coord);
}

void HangDisplay::Init() {
	Man tempMen;
	tempMen.SetMan(5, 7, '0');
	dyingMan[0] = tempMen;

	tempMen.SetMan(4, 8, '[');
	dyingMan[1] = tempMen;

	tempMen.SetMan(6, 8, ']');
	dyingMan[2] = tempMen;

	tempMen.SetMan(3, 8, '|');
	dyingMan[3] = tempMen;

	tempMen.SetMan(7, 8, '|');
	dyingMan[4] = tempMen;

	tempMen.SetMan(4, 9, '|');
	dyingMan[5] = tempMen;

	tempMen.SetMan(6, 9, '|');
	dyingMan[6] = tempMen;
}

void HangDisplay::ShowMans(int idx) {
	ShowMan(idx);
}

void HangDisplay::SetNum(int num) {
	cnt = num;
}

void  HangDisplay::ShowMans() {
	for (int i = 0; i <= cnt; i++) {
		ShowMan(i);
	}
}

void HangDisplay::ShowMan(int idx) {
	Man temp;
	temp = dyingMan[idx];
	gotoxy(temp.GetPosX(), temp.GetPosY());
	std::cout << dyingMan[idx].GetCh();
}

//단두대 보여주기
void HangDisplay::ShowDanDo(){
	gotoxy(0, 5);
	std::cout << "|";
	gotoxy(0, 6);
	std::cout << "|";
	gotoxy(0, 7);
	std::cout << "|";
	gotoxy(0, 8);
	std::cout << "|";
	gotoxy(0, 9);
	std::cout << "|";
	gotoxy(0, 10);
	std::cout << "|";
	gotoxy(1, 5);
	std::cout << "-";
	gotoxy(2, 5);
	std::cout << "-";
	gotoxy(3, 5);
	std::cout << "-";
	gotoxy(4, 5);
	std::cout << "-";
	gotoxy(5, 5);
	std::cout << "-";
	gotoxy(5, 6);
	std::cout << "|";
}