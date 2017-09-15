/*
* »ç¶÷
* @file		Man.h
* @date     Fri Sep 15 19:19:50 2017
* @author   keea
*/

#ifndef __MAN_H__
#define __MAN_H__

class Man{
private:
	int posX;
	int posY;
	char ch;
public:
	void SetMan(int x, int y, int _ch);
	int GetPosX();
	int GetPosY();
	char GetCh();
	Man& operator=(const Man& ref);
};

#endif // !__MAN_H__

