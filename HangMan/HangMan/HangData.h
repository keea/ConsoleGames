/*
* ����� ������
* @file		HangData.h
* @date     Fri Sep 15 11:55:43 2017
* @author   keea
*/
#ifndef __HANGDATA_H__
#define __HANGDATA_H__

class HangData
{
public:
	HangData();
	~HangData();

	void SetHangWord(const char * _hangWord);
	char* GetHangWord();
	char GetHangWord(int idx);

	void SetPlayerAns(const char alpha, const int idx);
	char GetPlayerAns(int idx);

	int GetWordLen();

private:
	char * hangWord; //��� ���� ��
	char * playerAns; //�÷��̾ �Է��� ��
	char * RandHangWord(int randNum);
};

#endif // !__HANGDATA_H__

