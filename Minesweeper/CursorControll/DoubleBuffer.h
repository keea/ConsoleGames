#pragma once
#include <string>

struct DoubleBuffer
{
	void CreateDoubleBuffer();
	void Draw(int x, int y, char str);
	void DrawString(int x, int y, char *str);
	void DrawString(int x, int y, std::string s);
	void SwapBuffer();
	void ClearBuffer();
	void DeleteBuffer();
	void SetCursor(int n);
};

