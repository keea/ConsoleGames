/*
* ���� �÷��̿� ���õ� ������
* @file		GamePlayData.h
* @date     Fri Dec 15 16:47:51 2017
* @author   keea
*/

#pragma once
struct GamePlayData
{
private:
	int existBoom; //�����ϴ� ��ź
	int oddmentBlock; // ���� ���
	int hp; //hp
public:
	void SetExistBoom(int _existBoom);
	int GetExistBoom();
	void SubtractBlock(); //��� ����
	void SubtractHp(); //hp ����
	int GetOaddmentBlock();
	int GetHp();
};

