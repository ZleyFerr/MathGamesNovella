#pragma once
#include <iostream>
#include <Windows.h>
void tic_tac_toe_main() 
{
	setlocale(LC_ALL, "Ru");
	char hodnow = 'X'; //����� ������ ����� �����
	int hodnow1 = 1; //����� ����
	bool WIN = false; //���� �� ������
	int hodposition = 0; //������� ���� ����������� ����� �� �������
	std::cout << "������ ����� ��� ���� 1-9" << std::endl;
	std::cout << " 1 2 3 " << std::endl << " 4 5 6" << std::endl << " 7 8 9" << std::endl;
	char map[3][3] =
	{
	{'#','#', '#'},
	{'#','#', '#'},
	{'#','#', '#'},
	}; //������� ����
	while (WIN == false) { //����� ����� ���� � ����������� �� �������� ����
		if (hodnow1 % 2 == 0)
		{
			hodnow = 'O';
		}
		else
		{
			hodnow = 'X';
		}
		//����� ����� ��� ����
		std::cin >> hodposition;
		//������� ����
		switch (hodposition)
		{
		case 1:
			if (map[0][0] == '#') { //�������� �� �� �� ������ �� ������
				map[0][0] = hodnow; // ������������ ������ �����
				hodnow1++; //���������� ������� �����
			}
			break;
		case 2:
			if (map[0][1] == '#') {
				map[0][1] = hodnow;
				hodnow1++;
			}
			break;
		case 3:
			if (map[0][2] == '#') {
				map[0][2] = hodnow;
				hodnow1++;
			}
			break;
		case 4:
			if (map[1][0] == '#') {
				map[1][0] = hodnow;
				hodnow1++;
			}
			break;
		case 5:
			if (map[1][1] == '#') {
				map[1][1] = hodnow;
				hodnow1++;
			}
			break;
		case 6:
			if (map[1][2] == '#') {
				map[1][2] = hodnow;
				hodnow1++;
			}
			break;
		case 7:
			if (map[2][0] == '#') {
				map[2][0] = hodnow;
				hodnow1++;
			}
			break;
		case 8:
			if (map[2][1] == '#') {
				map[2][1] = hodnow;
				hodnow1++;
			}
			break;
		case 9:
			if (map[2][2] == '#') {
				map[2][2] = hodnow;
				hodnow1++;
			}
			break;
		default:
			break;
		}
		//��������� �����
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				std::cout << map[i][j];
			}
			std::cout << std::endl;
		}//�������� �� ������ X
		if ((map[0][0] == 'X' and map[0][1] == 'X' and map[0][2] == 'X') or
			(map[1][0] == 'X' and map[1][1] == 'X' and map[1][2] == 'X') or
			(map[2][0] == 'X' and map[2][1] == 'X' and map[2][2] == 'X') or
			(map[0][0] == 'X' and map[1][0] == 'X' and map[2][0] == 'X') or
			(map[0][1] == 'X' and map[1][1] == 'X' and map[2][1] == 'X') or
			(map[0][2] == 'X' and map[1][2] == 'X' and map[2][2] == 'X') or
			(map[0][0] == 'X' and map[1][1] == 'X' and map[2][2] == 'X') or
			(map[2][0] == 'X' and map[1][1] == 'X' and map[0][2] == 'X'))
		{
			WIN == true;
			std::cout << "X win | game will close in 5 sec";
			Sleep(5000);
			break;
		}
		//�������� �� ������ O
		else if ((map[0][0] == 'O' and map[0][1] == 'O' and map[0][2] == 'O') or
			(map[1][0] == 'O' and map[1][1] == 'O' and map[1][2] == 'O') or
			(map[2][0] == 'O' and map[2][1] == 'O' and map[2][2] == 'O') or
			(map[0][0] == 'O' and map[1][0] == 'O' and map[2][0] == 'O') or
			(map[0][1] == 'O' and map[1][1] == 'O' and map[2][1] == 'O') or
			(map[0][2] == 'O' and map[1][2] == 'O' and map[2][2] == 'O') or
			(map[0][0] == 'O' and map[1][1] == 'O' and map[2][2] == 'O') or
			(map[2][0] == 'O' and map[1][1] == 'O' and map[0][2] == 'O'))
		{
			WIN == true;
			std::cout << "O win | game will close in 5 sec";
			Sleep(5000);
			break;
		}
		else if (hodnow1 == 10) {
			std::cout << "nichya | game will close in 5 sec";
			Sleep(5000);
			break;
		}
	}
}