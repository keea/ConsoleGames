#include <stdio.h>
#include <conio.h>
#include <random>
#include <time.h>
#include <Windows.h>

const int MAP_SIZE = 9;
const int REFRESH_RATE = 1000;

void gotoxy(int x, int y)
{
	HANDLE hOut;
	COORD  coord;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(hOut, coord);
}

void DisplayMap(int * map) {
	system("cls");
	for (int i = 0; i < MAP_SIZE; i++) {
		if (i % 3 == 0 && i!=0)
			printf("\r\n");
		printf("%d", map[i]);
	}
	printf("\r\n");
}

void DisplayScore() 
{
	static int score = 0;
	score += 1;
}

void main() 
{
	srand(time(NULL));
	int beforRand = (rand() % 9);
	int map[MAP_SIZE] = { 1,2,3,4,5,6,7,8,9 };
	map[beforRand] = 0;
	DisplayMap(map);

	int cnt = 1;
	while (true)
	{
		char ch = '\0';
		if (kbhit()) 
		{
			ch = getch();
			if (ch == 27)
				break;

			if (map[(ch-'0')-1] == 0) 
			{
				printf("Àâ¾Ò´Ù.\r\n");
				DisplayScore();
			}
		}

		if (cnt%(REFRESH_RATE) == 0) 
		{
			int randNum = (rand() % 9);
			map[beforRand] = beforRand + 1;
			map[randNum] = 0;
			beforRand = randNum;

			DisplayMap(map);
		}

		Sleep(1000/REFRESH_RATE);
		cnt += 1;
	}
	getch();
}