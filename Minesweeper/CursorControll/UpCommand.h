/*
* ȭ��ǥ Ű ���� ������ �� ����
* @file		Upcommand.h
* @date     Mon Nov 20 19:46:57 2017
* @author   keea
*/

#pragma once
#include "Command.h"
struct UpCommand : public Command
{
public:
	virtual void execute(Controller * ctrl);
};

