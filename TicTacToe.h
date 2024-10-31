#pragma once
#include <vector>
#include <SFML/Graphics.hpp>

sf::Texture tic_tac_toe_field_texture;
sf::Sprite tic_tac_toe_field_sprite;

sf::Texture tte_zone_texture;
sf::Sprite tte_zone1_sprite, tte_zone2_sprite, tte_zone3_sprite, tte_zone4_sprite, tte_zone5_sprite, tte_zone6_sprite, tte_zone7_sprite, tte_zone8_sprite, tte_zone9_sprite;

sf::Texture tte_x_texture;
sf::Sprite tte_x_sprite;

sf::Texture tte_0_texture;
sf::Sprite tte_0_sprite;

void tte_x()
{
	tte_x_texture.loadFromFile("Images/tic_tac_toe_x.png");
	tte_x_sprite.setTexture(tte_x_texture);
}

void tte_0()
{
	tte_0_texture.loadFromFile("Images/tic_tac_toe_0.png");
}

void tte_zone()

{
	tte_zone_texture.loadFromFile("Images/tic_tac_toe_zone.png");

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
	tte_zone1_sprite.setScale(0.5, 0.5);

	tte_zone2_sprite.setPosition(1225, 330);
	tte_zone2_sprite.setScale(0.5, 0.5);

	tte_zone3_sprite.setPosition(1380, 330);
	tte_zone3_sprite.setScale(0.5, 0.5);

	tte_zone4_sprite.setPosition(1070, 480);
	tte_zone4_sprite.setScale(0.5, 0.5);

	tte_zone5_sprite.setPosition(1225, 480);
	tte_zone5_sprite.setScale(0.5, 0.5);

	tte_zone6_sprite.setPosition(1380, 480);
	tte_zone6_sprite.setScale(0.5, 0.5);

	tte_zone7_sprite.setPosition(1070, 640);
	tte_zone7_sprite.setScale(0.5, 0.5);

	tte_zone8_sprite.setPosition(1215, 640);
	tte_zone8_sprite.setScale(0.5, 0.5);

	tte_zone9_sprite.setPosition(1360, 640);
	tte_zone9_sprite.setScale(0.5, 0.5);
}

void tic_tac_toe_field()
{
	tte_x();
	tte_0();
	tte_zone();
	tic_tac_toe_field_texture.loadFromFile("Images/tic_tac_toe_field.png");
	tic_tac_toe_field_sprite.setTexture(tic_tac_toe_field_texture);
	tic_tac_toe_field_sprite.setPosition(1100, 300);
	tic_tac_toe_field_sprite.setScale(1.5, 1.5);
}

void tic_tac_toe_main()
{
	tic_tac_toe_field();

	char hodnow = 'X'; //Какая сейчас буква ходит
	int hodnow1 = 1; //Номер хода
	bool WIN = false; //Была ли победа

	int hodposition = 0;

	std::vector<std::vector<char>> map =
	{
	{'#','#', '#'},
	{'#','#', '#'},
	{'#','#', '#'},
	};

	if (hodnow1 % 2 == 0)
	{
		hodnow = 'O';
	}
	else
	{
		hodnow = 'X';
	}
	//Выбор места для хода
	//Фукнция хода
	switch (hodposition)
	{
	case 1:
		if (map[0][0] == '#') { //Проверка на то не занята ли клетка
			map[0][0] = hodnow; // Присваивание клетке буквы
			hodnow1++; //Увелечение счетика ходов
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
		WIN == true;
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
		WIN == true;
	}
	else if (hodnow1 == 10) {
	}
}

void tic_tac_toe_draw(sf::RenderWindow& window)
{
	window.draw(tte_zone1_sprite);
	window.draw(tte_zone2_sprite);
	window.draw(tte_zone3_sprite);
	window.draw(tte_zone4_sprite);
	window.draw(tte_zone5_sprite);
	window.draw(tte_zone6_sprite);
	window.draw(tte_zone7_sprite);
	window.draw(tte_zone8_sprite);
	window.draw(tte_zone9_sprite);
}
