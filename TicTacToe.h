#pragma once
#include <vector>
#include <random>
#include <SFML/Graphics.hpp>
#include "Audio.h"

char map[3][3] =
{
{'#','#', '#'},
{'#','#', '#'},
{'#','#', '#'},
};

int hodnow1 = 1; //Номер хода
int nichya = 0;

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> dist(0, 2);

sf::Texture tic_tac_toe_field_texture;
sf::Sprite tic_tac_toe_field_sprite;

sf::Texture tte_zone_texture;
sf::Sprite tte_zone1_sprite, tte_zone2_sprite, tte_zone3_sprite, tte_zone4_sprite, tte_zone5_sprite, tte_zone6_sprite, tte_zone7_sprite, tte_zone8_sprite, tte_zone9_sprite;

sf::Texture tte_x_texture;
sf::Sprite tte_x_sprite,tte_x2_sprite, tte_x3_sprite, tte_x4_sprite, tte_x5_sprite, tte_x6_sprite, tte_x7_sprite, tte_x8_sprite, tte_x9_sprite;

sf::Texture tte_0_texture;
sf::Sprite tte_0_sprite, tte_02_sprite, tte_03_sprite, tte_04_sprite, tte_05_sprite, tte_06_sprite, tte_07_sprite, tte_08_sprite, tte_09_sprite;

int x1 = 0,x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;
int t01 = 0, t02 = 0, t03 = 0, t04 = 0, t05 = 0, t06 = 0, t07 = 0, t08 = 0, t09 = 0;
int tte0_x = 0, tte0_y = 0;

int tte_music_started = 0;
void tte_x()
{
	tte_x_texture.loadFromFile("Images/tic_tac_toe_x.png");
	tte_x_sprite.setTexture(tte_x_texture);
	tte_x2_sprite.setTexture(tte_x_texture);
	tte_x3_sprite.setTexture(tte_x_texture);
	tte_x4_sprite.setTexture(tte_x_texture);
	tte_x5_sprite.setTexture(tte_x_texture);
	tte_x6_sprite.setTexture(tte_x_texture);
	tte_x7_sprite.setTexture(tte_x_texture);
	tte_x8_sprite.setTexture(tte_x_texture);
	tte_x9_sprite.setTexture(tte_x_texture);

	tte_x_sprite.setPosition(1030, 340);
	tte_x_sprite.setScale(0.1, 0.1);

	tte_x2_sprite.setPosition(1200, 340);
	tte_x2_sprite.setScale(0.1, 0.1);

	tte_x3_sprite.setPosition(1370, 340);
	tte_x3_sprite.setScale(0.1, 0.1);

	tte_x4_sprite.setPosition(1030, 500);
	tte_x4_sprite.setScale(0.1, 0.1);

	tte_x5_sprite.setPosition(1200, 500);
	tte_x5_sprite.setScale(0.1, 0.1);

	tte_x6_sprite.setPosition(1370, 500);
	tte_x6_sprite.setScale(0.1, 0.1);

	tte_x7_sprite.setPosition(1030, 700);
	tte_x7_sprite.setScale(0.1, 0.1);

	tte_x8_sprite.setPosition(1200, 700);
	tte_x8_sprite.setScale(0.1, 0.1);

	tte_x9_sprite.setPosition(1370, 700);
	tte_x9_sprite.setScale(0.1, 0.1);

}

void tte_0()
{
	tte_0_texture.loadFromFile("Images/tic_tac_toe_0.png");
	tte_0_sprite.setTexture(tte_0_texture);
	tte_02_sprite.setTexture(tte_0_texture);
	tte_03_sprite.setTexture(tte_0_texture);
	tte_04_sprite.setTexture(tte_0_texture);
	tte_05_sprite.setTexture(tte_0_texture);
	tte_06_sprite.setTexture(tte_0_texture);
	tte_07_sprite.setTexture(tte_0_texture);
	tte_08_sprite.setTexture(tte_0_texture);
	tte_09_sprite.setTexture(tte_0_texture);

	tte_0_sprite.setPosition(1030, 340);
	tte_0_sprite.setScale(0.1, 0.1);

	tte_02_sprite.setPosition(1200, 340);
	tte_02_sprite.setScale(0.1, 0.1);

	tte_03_sprite.setPosition(1370, 340);
	tte_03_sprite.setScale(0.1, 0.1);

	tte_04_sprite.setPosition(1030, 500);
	tte_04_sprite.setScale(0.1, 0.1);

	tte_05_sprite.setPosition(1200, 500);
	tte_05_sprite.setScale(0.1, 0.1);

	tte_06_sprite.setPosition(1370, 500);
	tte_06_sprite.setScale(0.1, 0.1);

	tte_07_sprite.setPosition(1030, 700);
	tte_07_sprite.setScale(0.1, 0.1);

	tte_08_sprite.setPosition(1200, 700);
	tte_08_sprite.setScale(0.1, 0.1);

	tte_09_sprite.setPosition(1370, 700);
	tte_09_sprite.setScale(0.1, 0.1);
}

void tte_zone()

{
	tte_zone_texture.loadFromFile("Images/answer.png");

	tte_zone1_sprite.setTexture(tte_zone_texture);
	tte_zone2_sprite.setTexture(tte_zone_texture);
	tte_zone3_sprite.setTexture(tte_zone_texture);
	tte_zone4_sprite.setTexture(tte_zone_texture);
	tte_zone5_sprite.setTexture(tte_zone_texture);
	tte_zone6_sprite.setTexture(tte_zone_texture);
	tte_zone7_sprite.setTexture(tte_zone_texture);
	tte_zone8_sprite.setTexture(tte_zone_texture);
	tte_zone9_sprite.setTexture(tte_zone_texture);

	tte_zone1_sprite.setPosition(1070, 330);
	tte_zone1_sprite.setScale(0.1, 0.1);

	tte_zone2_sprite.setPosition(1225, 330);
	tte_zone2_sprite.setScale(0.1, 0.1);

	tte_zone3_sprite.setPosition(1380, 330);
	tte_zone3_sprite.setScale(0.1, 0.1);

	tte_zone4_sprite.setPosition(1070, 500);
	tte_zone4_sprite.setScale(0.1, 0.1);

	tte_zone5_sprite.setPosition(1225, 500);
	tte_zone5_sprite.setScale(0.1, 0.1);

	tte_zone6_sprite.setPosition(1380, 500);
	tte_zone6_sprite.setScale(0.1, 0.1);

	tte_zone7_sprite.setPosition(1070, 640);
	tte_zone7_sprite.setScale(0.1, 0.1);

	tte_zone8_sprite.setPosition(1215, 640);
	tte_zone8_sprite.setScale(0.1, 0.1);

	tte_zone9_sprite.setPosition(1360, 640);
	tte_zone9_sprite.setScale(0.1, 0.1);
}

void tic_tac_toe_field()
{
	if (tte_music_started == 0)
	{
		tic_tac_toe_music_f();
	}
	tte_music_started = 1;

	tte_x();
	tte_0();
	tte_zone();

	tic_tac_toe_field_texture.loadFromFile("Images/tic_tac_toe_field.png");
	tic_tac_toe_field_sprite.setTexture(tic_tac_toe_field_texture);
	tic_tac_toe_field_sprite.setPosition(990, 270);
	tic_tac_toe_field_sprite.setScale(1.6, 1.6);
}

void tic_tac_toe_main()
{
	//игрок
	tic_tac_toe_field();
	if (game_stage == 8) 
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (tte_zone1_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
			{	
				if (map[0][0] == '#') 
				{ //Проверка на то не занята ли клетка
					map[0][0] = 'X'; // Присваивание клетке буквы
					hodnow1++; //Увелечение счетика ходов
					x1 = 1;
				}
			}
		}
	}

	if (game_stage == 8)
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (tte_zone2_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
			{
				if (map[0][1] == '#')
				{ 
					map[0][1] = 'X'; // Присваивание клетке буквы
					hodnow1++; //Увелечение счетика ходов
					x2 = 1;
				}
			}
		}
	}

	if (game_stage == 8)
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (tte_zone3_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
			{
				if (map[0][2] == '#')
				{
					map[0][2] = 'X'; // Присваивание клетке буквы
					hodnow1++; //Увелечение счетика ходов
					x3 = 1;
				}
			}
		}
	}

	if (game_stage == 8)
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (tte_zone4_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
			{
				if (map[1][0] == '#')
				{
					map[1][0] = 'X'; // Присваивание клетке буквы
					hodnow1++; //Увелечение счетика ходов
					x4 = 1;
				}
			}
		}
	}

	if (game_stage == 8)
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (tte_zone5_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
			{
				if (map[1][1] == '#')
				{
					map[1][1] = 'X'; // Присваивание клетке буквы
					hodnow1++; //Увелечение счетика ходов
					x5 = 1;
				}
			}
		}
	}

	if (game_stage == 8)
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (tte_zone6_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
			{
				if (map[1][2] == '#')
				{
					map[1][2] = 'X'; // Присваивание клетке буквы
					hodnow1++; //Увелечение счетика ходов
					x6 = 1;
				}
			}
		}
	}

	if (game_stage == 8)
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (tte_zone7_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
			{
				if (map[2][0] == '#')
				{
					map[2][0] = 'X'; // Присваивание клетке буквы
					hodnow1++; //Увелечение счетика ходов
					x7 = 1;
				}
			}
		}
	}

	if (game_stage == 8)
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (tte_zone8_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
			{
				if (map[2][1] == '#')
				{
					map[2][1] = 'X'; // Присваивание клетке буквы
					hodnow1++; //Увелечение счетика ходов
					x8 = 1;
				}
			}
		}
	}

	if (game_stage == 8)
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (tte_zone9_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
			{
				if (map[2][2] == '#')
				{
					map[2][2] = 'X'; // Присваивание клетке буквы
					hodnow1++; //Увелечение счетика ходов
					x9 = 1;
				}
			}
		}
	}
	if (hodnow1 % 2 == 0)
	{
		tte0_x = dist(rd);
		tte0_y = dist(rd);
		if (map[tte0_x][tte0_y] == '#')
		{
			map[tte0_x][tte0_y] = 'O';
			if (tte0_x == 0 and tte0_y == 0)
			{
				t01 = 1;
				hodnow1++;
			}
			if (tte0_x == 0 and tte0_y == 1)
			{
				t02 = 1;
				hodnow1++;
			}
			if (tte0_x == 0 and tte0_y == 2)
			{
				t03 = 1;
				hodnow1++;
			}
			if (tte0_x == 1 and tte0_y == 0)
			{
				t04 = 1;
				hodnow1++;
			}
			if (tte0_x == 1 and tte0_y == 1)
			{
				t05 = 1;
				hodnow1++;
			}
			if (tte0_x == 1 and tte0_y == 2)
			{
				t06 = 1;
				hodnow1++;
			}
			if (tte0_x == 2 and tte0_y == 0)
			{
				t07 = 1;
				hodnow1++;
			}
			if (tte0_x == 2 and tte0_y == 1)
			{
				t08 = 1;
				hodnow1++;
			}
			if (tte0_x == 2 and tte0_y == 2)
			{
				t09 = 1;
				hodnow1++;
			}
		}

	}
	//Проверка на победу X
	if ((map[0][0] == 'X' and map[0][1] == 'X' and map[0][2] == 'X') or
		(map[1][0] == 'X' and map[1][1] == 'X' and map[1][2] == 'X') or
		(map[2][0] == 'X' and map[2][1] == 'X' and map[2][2] == 'X') or
		(map[0][0] == 'X' and map[1][0] == 'X' and map[2][0] == 'X') or
		(map[0][1] == 'X' and map[1][1] == 'X' and map[2][1] == 'X') or
		(map[0][2] == 'X' and map[1][2] == 'X' and map[2][2] == 'X') or
		(map[0][0] == 'X' and map[1][1] == 'X' and map[2][2] == 'X') or
		(map[2][0] == 'X' and map[1][1] == 'X' and map[0][2] == 'X'))
	{
		game_stage = 9;
		max_game_stage = 9;
		score++;
		tic_tac_toe_music.stop();
		music_base.play();
	}
	//Проверка на победу O
	else if ((map[0][0] == 'O' and map[0][1] == 'O' and map[0][2] == 'O') or
		(map[1][0] == 'O' and map[1][1] == 'O' and map[1][2] == 'O') or
		(map[2][0] == 'O' and map[2][1] == 'O' and map[2][2] == 'O') or
		(map[0][0] == 'O' and map[1][0] == 'O' and map[2][0] == 'O') or
		(map[0][1] == 'O' and map[1][1] == 'O' and map[2][1] == 'O') or
		(map[0][2] == 'O' and map[1][2] == 'O' and map[2][2] == 'O') or
		(map[0][0] == 'O' and map[1][1] == 'O' and map[2][2] == 'O') or
		(map[2][0] == 'O' and map[1][1] == 'O' and map[0][2] == 'O'))
	{
		nichya = -1;
		game_stage = 9;
		max_game_stage = 9;
		tic_tac_toe_music.stop();
		music_base.play();
	}
	else if (hodnow1 == 10) 
	{
		game_stage = 9;
		max_game_stage = 9;
		nichya = -1;
		tic_tac_toe_music.stop();
		music_base.play();
	}
}

void tic_tac_toe_draw(sf::RenderWindow& window)
{
	if (x1 == 1)
	{
		window.draw(tte_x_sprite);
	}
	if (x2 == 1)
	{
		window.draw(tte_x2_sprite);
	}
	if (x3 == 1)
	{
		window.draw(tte_x3_sprite);
	}
	if (x4 == 1)
	{
		window.draw(tte_x4_sprite);
	}
	if (x5 == 1)
	{
		window.draw(tte_x5_sprite);
	}
	if (x6 == 1)
	{
		window.draw(tte_x6_sprite);
	}
	if (x7 == 1)
	{
		window.draw(tte_x7_sprite);
	}
	if (x8 == 1)
	{
		window.draw(tte_x8_sprite);
	}
	if (x9 == 1)
	{
		window.draw(tte_x9_sprite);
	}

	if (t01 == 1)
	{
		window.draw(tte_0_sprite);
	}
	if (t02 == 1)
	{
		window.draw(tte_02_sprite);
	}
	if (t03 == 1)
	{
		window.draw(tte_03_sprite);
	}
	if (t04 == 1)
	{
		window.draw(tte_04_sprite);
	}
	if (t05 == 1)
	{
		window.draw(tte_05_sprite);
	}
	if (t06 == 1)
	{
		window.draw(tte_06_sprite);
	}
	if (t07 == 1)
	{
		window.draw(tte_07_sprite);
	}
	if (t08 == 1)
	{
		window.draw(tte_08_sprite);
	}
	if (t09 == 1)
	{
		window.draw(tte_09_sprite);
	}
}
