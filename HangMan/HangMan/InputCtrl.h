/*
* 입력을 담당.
* @file		Input.h
* @date     Fri Sep 15 16:22:40 2017
* @author   keea
*/
#ifndef __INPUTCTRL_H__
#define __INPUTCTRL_H__


class InputCtrl {

private:
	char alpha;
	void InputAlpha();
	bool IsAlpha(char ch);
public:
	char GetAlpha();
	~InputCtrl();
	void ClearDisplay();
};

#endif // !__INPUTCTRL_H__