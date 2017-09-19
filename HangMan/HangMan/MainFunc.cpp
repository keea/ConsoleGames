/*
* ЗаёЗ
* @file		MainFunc.cpp
* @date     Fri Sep 15 10:47:35 2017
* @author   keea
*/

#include "GameCtrl.h"
#include <iostream>
#include <windows.h>
#include <ctime>

void main() {
	srand(time(NULL));
	GameCtrl gc;
	gc.Init();
	gc.Update();
}