/*
* 메인 화면
* @file		MainScene.cpp
* @date     Mon Nov 20 17:40:40 2017
* @author   keea
*/

#include "Data.h"
#include "MainScene.h"
#include "InputHandler.h"
#include "MenuCtrl.h"


int MainScene::Update()
{
	view.Init(); //뷰를 초기화한다.
	InputHandler inputHandler;
	MenuCtrl mCtrl;

	while (mCtrl.GetIsNotEnd())
	{
		Command * command = inputHandler.handlerInput();
		if (command != NULL)
			command->execute(&mCtrl);

		view.SetKey(mCtrl.GetState());
		view.Display();
	}

	view.DeleteDisplay();
	return mCtrl.GetNextState();
}
