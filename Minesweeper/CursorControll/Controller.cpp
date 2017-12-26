/*
* 컨트롤러
* @file		Controller.cpp
* @date     Tue Nov 28 17:02:12 2017
* @author   keea
*/

#include "Controller.h"

void Controller::SetEnd()
{
	isNotEnd = false;
}

STATE Controller::GetNextState()
{
	return nextState;
}

bool Controller::GetIsNotEnd()
{
	return isNotEnd;
}

void Controller::SetNextState(STATE _next)
{
	nextState = _next;
}

