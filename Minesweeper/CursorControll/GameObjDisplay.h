/*
* ���� ������Ʈ ȭ�� ��� �������̽�
* @file		GameObjDisply.h
* @date     Wed Nov 29 10:41:23 2017
* @author   keea
*/

#pragma once

#include "DoubleBuffer.h"

struct GameObjDisplay {
	virtual void Display(DoubleBuffer buffer) = 0;
};
