/*
* 게임 데이터를 보여준다.
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
	buffer.DrawString(50, 10, "아이템 사용키 : i");
	buffer.DrawString(50, 11, "※ 지뢰가 아닌 곳에");
	buffer.DrawString(50, 12, "   사용시 HP 감소");
	
	std::string str = "남은 블록 : " + std::to_string(data->GetOaddmentBlock());
	buffer.DrawString(5, 22, str);

	buffer.DrawString(5, 20, "HP");
	int x = 8;
	
	for (int i = 0; i < data->GetHp(); i++) 
	{
		buffer.Draw(x, 20, '|');
		x += 1;
	}
}
