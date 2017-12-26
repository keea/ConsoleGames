/*
* 커맨드 인터페이스
* @file		Command.h
* @date     Mon Nov 20 19:40:54 2017
* @author   keea
*/

#pragma once
#include "Controller.h"

struct Command
{
public:
	virtual void execute(Controller * mCtrl) = 0;
};