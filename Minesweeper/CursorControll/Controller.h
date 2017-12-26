/*
* 컨트롤러
* @file		Controller.h
* @date     Tue Nov 28 17:02:12 2017
* @author   keea
*/

#pragma once

#include "Data.h"

class Controller
{
private:
	bool isNotEnd = true;
	STATE nextState;
public:
	virtual void SetEnd();
	virtual STATE GetNextState();
	virtual bool GetIsNotEnd();
	virtual void SetNextState(STATE _next);

	virtual void CmdUp() {}; //업키를 눌렸을 떄
	virtual void CmdDown() {}; //다운키를 눌렸을 떄
	virtual void CmdLeft() {}; //왼쪽키를 눌렸을 때
	virtual void CmdRight() {}; //오른쪽 키를 눌렸을 떄
	virtual void CmdSelect() {}; //선택 커맨드를 사용한 경우
	virtual void CmdItem() {}; //아이템 커맨드를 사용할 경우
};

