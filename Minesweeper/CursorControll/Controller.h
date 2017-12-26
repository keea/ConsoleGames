/*
* ��Ʈ�ѷ�
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

	virtual void CmdUp() {}; //��Ű�� ������ ��
	virtual void CmdDown() {}; //�ٿ�Ű�� ������ ��
	virtual void CmdLeft() {}; //����Ű�� ������ ��
	virtual void CmdRight() {}; //������ Ű�� ������ ��
	virtual void CmdSelect() {}; //���� Ŀ�ǵ带 ����� ���
	virtual void CmdItem() {}; //������ Ŀ�ǵ带 ����� ���
};

