/*
* �����Լ�
* @file		MainFunc.cpp
* @date     Wed Sep 20 16:57:34 2017
* @author   keea
*/

#include <iostream>
#include <time.h>
#include <random>
#include <conio.h>


//���ڸ� 1������ 3������ ���ϰ� ��뿡�� �ѱ�.
//�����ϴٰ� ������ ���� 31�� ���ϸ� ��.
//��ǻ�Ͱ� ���� ����

bool isLose(int num);

void main() {
	srand(time(NULL));

	bool isPlayerTurn = false; //�÷��̾� ��

	std::cout << "��ǻ�� ���� �����մϴ�." << std::endl;
	std::cout << "G�� ����, N�� �н�" << std::endl;

	int num = 0;
	while (num <= 30)
	{
		//��ǻ�� ��
		if (!isPlayerTurn) 
		{
			std::cout << std::endl;
			int loopNum = rand() % 3 + 1;
			while (loopNum > 0)
			{
				num += 1;
				std::cout << "��ǻ��(" << loopNum << ") : " << num << std::endl;

				if (isLose(num)) {
					num = 31;
					break;
				}

				loopNum -= 1;

				if (loopNum == 0)
					isPlayerTurn = !isPlayerTurn;
			}
		}
		else 
		{
			std::cout << std::endl;
			int loopNum = 3;
			while (loopNum > 0)
			{
				char c = getch();
				if (c == 'G') {
					num += 1;
					std::cout << "�÷��̾� : " << num << std::endl;
					
					if (isLose(num)) {
						num = 31;
						break;
					}
					loopNum -= 1;

					if (loopNum == 0)
						isPlayerTurn = !isPlayerTurn;
				}
				else if (c == 'N') {
					isPlayerTurn = !isPlayerTurn;
					break;
				}
			}
		}
	}

	std::cout << std::endl;
	if (isPlayerTurn) {
		std::cout << "�÷��̾ �й��߽��ϴ�." << std::endl;
	}
	else {
		std::cout << "��ǻ�Ͱ� �й��߽��ϴ�." << std::endl;
	}

	getch();
}

bool isLose(int num) {
	if (num == 31)
		return true;
	return false;
}