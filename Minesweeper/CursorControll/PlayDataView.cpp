/*
* ���� �����͸� �����ش�.
* @file		PlayDataView.cpp
* @date     Sat Dec 16 16:40:12 2017
* @author   keea
*/

#include <string>
#include "PlayDataView.h"

PlayDataView::PlayDataView(GamePlayData * _data)
{
	data = _data;
}

void PlayDataView::Display(DoubleBuffer buffer)
{
	buffer.DrawString(50, 10, "������ ���Ű : i");
	buffer.DrawString(50, 11, "�� ���ڰ� �ƴ� ����");
	buffer.DrawString(50, 12, "   ���� HP ����");
	
	std::string str = "���� ��� : " + std::to_string(data->GetOaddmentBlock());
	buffer.DrawString(5, 22, str);

	buffer.DrawString(5, 20, "HP");
	int x = 8;
	
	for (int i = 0; i < data->GetHp(); i++) 
	{
		buffer.Draw(x, 20, '|');
		x += 1;
	}
}
