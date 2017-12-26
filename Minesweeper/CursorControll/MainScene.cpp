/*
* ���� ȭ��
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
	view.Init(); //�並 �ʱ�ȭ�Ѵ�.
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
