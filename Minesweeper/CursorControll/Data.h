/*
* 게임 속 공통 데이터 관리
* @file		Data.h
* @date     Mon Nov 20 17:13:04 2017
* @author   keea
*/

#ifndef __DATA_H__
#define __DATA_H__

//맵 사이즈
const int MAP_WIDTH = 9;
const int MAP_HEIGHT = 9;

//게임 속 상태 관리
enum STATE
{
	MAIN_SCENE,
	GAME_SCENE,
	RESTART_SCENE,
	CLEAR_SCENE,
	END, //end는 가장 마지막에 둔다.
};

//키의 동작
enum INPUT_KEY
{
	ARROW_KEY = -32,
	UP_KEY = 72,
	DOWN_KEY = 80,
	ENTER = 13,
	LEFT_KEY = 75,
	RIGHT_KEY = 77,
	ESC = 27,
	ITEM_KEY = 'i',
};


//메뉴
enum KEY_MENU_STATE
{
	MENU1,
	MENU2,
};

#endif