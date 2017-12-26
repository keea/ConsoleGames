/*
* 게임 플레이에 관련된 데이터
* @file		GamePlayData.h
* @date     Fri Dec 15 16:47:51 2017
* @author   keea
*/

#pragma once
struct GamePlayData
{
private:
	int existBoom; //존재하는 폭탄
	int oddmentBlock; // 남은 블록
	int hp; //hp
public:
	void SetExistBoom(int _existBoom);
	int GetExistBoom();
	void SubtractBlock(); //블록 빼기
	void SubtractHp(); //hp 감소
	int GetOaddmentBlock();
	int GetHp();
};

