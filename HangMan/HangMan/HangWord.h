/*
* 행맨 문제 글자
* @file		HangWord
* @date     Tue Sep 19 18:59:05 2017
* @author   keea
*/

#ifndef __HANGWORD_H__
#define __HANGWORD_H__

class HangWord
{
public:
	char * GetHangWord();
	HangWord(const char * wd);
	~HangWord();

private:
	char * hangWord = NULL;
};

#endif // !__HANGWORD_H__

