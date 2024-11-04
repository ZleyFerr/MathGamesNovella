#pragma once
#include <SFML/Graphics.hpp>
#include "Audio.h"
#include <random>
#include <vector>

int rr_music_started = 0;

sf::Font rr_font;
sf::Text rr_bullet_text, rr_nobullet_text, rr_player_text, rr_bot_text;

sf::Texture rr_text_background_texture;
sf::Sprite rr_text_background_sprite;

sf::Texture rr_button_texture;
sf::Sprite rr_button_1_sprite, rr_button_2_sprite;

std::random_device rd_rr;
std::mt19937 gen_rr(rd_rr());
std::uniform_int_distribution<int> dist_rr(1, 2);
std::uniform_int_distribution<int> dist_rr2(1, 2);
std::uniform_int_distribution<int> dist_rr1(1, 8);

sf::Text rr_last_hod_text;

sf::Texture rr_heart_texture;
sf::Sprite rr_1_heart_sprite, rr_2_heart_sprite, rr_3_heart_sprite, rr_4_heart_sprite;

int bullet_pattern = dist_rr2(gen_rr);
int bullets = 8;

int rr_hodnow = 1;
int rr_timer = 0;

int rr_shot_now = 0;

int shot_to_player = 0, shot_to_bot = 0;

int lives_player = 0 - shot_to_player;
int lives_bot = 0 - shot_to_bot;

int rr_win = 0;

std::vector<int> rr_shots;

void rr_last_hod()
{
	rr_last_hod_text.setFont(rr_font);
	rr_last_hod_text.setCharacterSize(40);
	rr_last_hod_text.setFillColor(sf::Color::Black);
	rr_last_hod_text.setPosition(sf::Vector2f(500, 0));
}
void rr_lives()
{
	rr_heart_texture.loadFromFile("Images/live.png");
	rr_1_heart_sprite.setTexture(rr_heart_texture);
	rr_2_heart_sprite.setTexture(rr_heart_texture);
	rr_3_heart_sprite.setTexture(rr_heart_texture);
	rr_4_heart_sprite.setTexture(rr_heart_texture);

	rr_1_heart_sprite.setScale(0.1,0.1);
	rr_2_heart_sprite.setScale(0.1, 0.1);
	rr_3_heart_sprite.setScale(0.1, 0.1);
	rr_4_heart_sprite.setScale(0.1, 0.1);

	rr_2_heart_sprite.setPosition(65,0);
	rr_3_heart_sprite.setPosition(1855, 0);
	rr_4_heart_sprite.setPosition(1795, 0);
}
void rr_buttons()
{
	rr_button_texture.loadFromFile("Images/rr_button.png");

	rr_button_1_sprite.setTexture(rr_button_texture);
	rr_button_1_sprite.setPosition(600, 825);
	rr_button_1_sprite.setScale(0.5, 0.55);
	rr_button_1_sprite.setColor(sf::Color(0, 255, 0, 200));

	rr_button_2_sprite.setTexture(rr_button_texture);
	rr_button_2_sprite.setPosition(600, 895);
	rr_button_2_sprite.setScale(0.5, 0.55);
	rr_button_2_sprite.setColor(sf::Color(255, 0, 0, 200));
}
void bullet_patterns()
{
	switch (bullet_pattern)
	{
	case 1:
		rr_bullet_text.setString(L"изначально Закупоренных: 4");
		rr_nobullet_text.setString(L"изначально Открытых: 4");
		break;
	case 2:
		rr_bullet_text.setString(L"изначально Закупоренных: 5");
		rr_nobullet_text.setString(L"изначально Открытых: 3");
		break;
	}
}

void rr_text()
{
	rr_font.loadFromFile("Fonts/MOSCOW2024.otf");
	rr_bullet_text.setFont(rr_font);
	rr_nobullet_text.setFont(rr_font);
	rr_player_text.setFont(rr_font);
	rr_bot_text.setFont(rr_font);

	rr_player_text.setCharacterSize(28);
	rr_player_text.setFillColor(sf::Color::White);
	rr_player_text.setPosition(sf::Vector2f(645, 862));
	rr_player_text.setString(L"В кариму");

	rr_bot_text.setCharacterSize(28);
	rr_bot_text.setFillColor(sf::Color::White);
	rr_bot_text.setPosition(sf::Vector2f(670, 932));
	rr_bot_text.setString(L"В себя");

	rr_bullet_text.setCharacterSize(28);
	rr_bullet_text.setFillColor(sf::Color::Green);
	rr_bullet_text.setPosition(sf::Vector2f(110, 880));

	rr_nobullet_text.setCharacterSize(28);
	rr_nobullet_text.setFillColor(sf::Color::Red);
	rr_nobullet_text.setPosition(sf::Vector2f(110, 930));

	rr_text_background_texture.loadFromFile("Images/text_background.png");
	rr_text_background_sprite.setTexture(rr_text_background_texture);
	rr_text_background_sprite.setScale(1.5, 0.7);
	rr_text_background_sprite.setPosition(30, 720);
	rr_text_background_sprite.setColor(sf::Color(0, 123, 146, 128));
}

void rr_draw(sf::RenderWindow& window)
{
	window.draw(rr_text_background_sprite);
	window.draw(rr_bullet_text);
	window.draw(rr_nobullet_text);
	window.draw(rr_button_1_sprite);
	window.draw(rr_button_2_sprite);
	window.draw(rr_player_text);
	window.draw(rr_bot_text);
	if(lives_player >= 1)
	window.draw(rr_1_heart_sprite);
	if(lives_player == 2)
	window.draw(rr_2_heart_sprite);
	if(lives_bot >= 1)
	window.draw(rr_3_heart_sprite);
	if(lives_bot == 2)
	window.draw(rr_4_heart_sprite);
	window.draw(rr_last_hod_text);
}

void russian_roullete_main()
{
	rr_lives();
	rr_text();
	rr_buttons();
	bullet_patterns();
	rr_last_hod();
	 lives_player = 2 - shot_to_player;
	 lives_bot = 2 - shot_to_bot;

	music_base.stop();
	if (rr_music_started == 0)
	{
		rr_music_f();
		rr_music_started = 1;
	}
	rr_timer++;
	//player
	if (game_stage == 22 && rr_hodnow % 2 != 0 && rr_timer > 30  && lives_player > 0 && lives_bot > 0)
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (rr_button_1_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
			{
				rr_shot_now = dist_rr1(gen_rr);
				if (count(rr_shots.begin(), rr_shots.end(), rr_shot_now) < 1)
				{
					rr_shots.push_back(rr_shot_now);
					if (bullet_pattern == 1)
					{
						if (rr_shot_now <= 4)
						{
							rr_noshot_f();
							rr_hodnow++;
							rr_timer = 0;
							rr_last_hod_text.setString(L"Последний ход: Карима - закупоренный");
						}
						else if (rr_shot_now >= 5)
						{
							rr_shot_f();
							rr_hodnow++;
							shot_to_bot++;
							rr_timer = 0;
							rr_last_hod_text.setString(L"Последний ход: Карима - выстрел");
						}
					}
					if (bullet_pattern == 2)
					{
						if (rr_shot_now <= 5)
						{
							rr_noshot_f();
							rr_hodnow++;
							rr_timer = 0;
							rr_last_hod_text.setString(L"Последний ход: Карима - закупоренный");
						}
						else if (rr_shot_now >= 6)
						{
							rr_shot_f();
							rr_hodnow++;
							shot_to_bot++;
							rr_timer = 0;
							rr_last_hod_text.setString(L"Последний ход: Карима - выстрел");
						}
					}
				}
				else
				{
					rr_shot_now = dist_rr1(gen_rr);
				}
			}
		}
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (rr_button_2_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
			{
				rr_shot_now = dist_rr1(gen_rr);
				if (count(rr_shots.begin(), rr_shots.end(), rr_shot_now) < 1)
				{
					rr_shots.push_back(rr_shot_now);
					if (bullet_pattern == 1)
					{
						if (rr_shot_now <= 4)
						{
							rr_noshot_f();
							rr_hodnow++;
							rr_timer = 0;
							rr_last_hod_text.setString(L"Последний ход: Игрок - закупоренный");
						}
						else if (rr_shot_now >= 5)
						{
							rr_shot_f();
							rr_hodnow++;
							shot_to_player++;
							rr_timer = 0;
							rr_last_hod_text.setString(L"Последний ход: Игрок - выстрел");
						}
					}
					if (bullet_pattern == 2)
					{
						if (rr_shot_now <= 5)
						{
							rr_noshot_f();
							rr_hodnow++;
							rr_timer = 0;
							rr_last_hod_text.setString(L"Последний ход: Игрок - закупоренный");
						}
						else if (rr_shot_now >= 6)
						{
							rr_shot_f();
							rr_hodnow++;
							shot_to_player++;
							rr_timer = 0;
							rr_last_hod_text.setString(L"Последний ход: Игрок - выстрел");
						}
					}
				}
				else
				{
					rr_shot_now = dist_rr1(gen_rr);
				}
			}
		}
	}
	//bot
	int rr_bot_hod = dist_rr(gen_rr);
	if (game_stage == 22 && rr_hodnow % 2 == 0 && rr_timer > 30 && lives_player > 0 && lives_bot > 0)
	{
		if (rr_bot_hod == 1)
		{
			rr_shot_now = dist_rr1(gen_rr);
			if (count(rr_shots.begin(), rr_shots.end(), rr_shot_now) < 1)
			{
				rr_shots.push_back(rr_shot_now);
				if (bullet_pattern == 1)
				{
					if (rr_shot_now <= 4)
					{
						rr_noshot_f();
						rr_hodnow++;
						rr_timer = 0;
						rr_last_hod_text.setString(L"Последний ход: Карима - закупоренный");
					}
					else if (rr_shot_now >= 5)
					{
						rr_shot_f();
						rr_hodnow++;
						shot_to_bot++;
						rr_timer = 0;
						rr_last_hod_text.setString(L"Последний ход: Карима - выстрел");
					}
				}
				if (bullet_pattern == 2)
				{
					if (rr_shot_now <= 5)
					{
						rr_noshot_f();
						rr_hodnow++;
						rr_timer = 0;
						rr_last_hod_text.setString(L"Последний ход: Карима - закупоренный");
					}
					else if (rr_shot_now >= 6)
					{
						rr_shot_f();
						rr_hodnow++;
						shot_to_bot++;
						rr_timer = 0;
						rr_last_hod_text.setString(L"Последний ход: Карима - выстрел");
					}
				}
			}
			else
			{
				rr_shot_now = dist_rr1(gen_rr);
			}
		}
		if (rr_bot_hod == 2)
		{
			rr_shot_now = dist_rr1(gen_rr);
			if (count(rr_shots.begin(), rr_shots.end(), rr_shot_now) < 1)
			{
				rr_shots.push_back(rr_shot_now);
				if (bullet_pattern == 1)
				{
					if (rr_shot_now <= 4)
					{
						rr_noshot_f();
						rr_hodnow++;
						rr_timer = 0;
						rr_last_hod_text.setString(L"Последний ход: Игрок - закупоренный");
					}
					else if (rr_shot_now >= 5)
					{
						rr_shot_f();
						rr_hodnow++;
						shot_to_player++;
						rr_timer = 0;
						rr_last_hod_text.setString(L"Последний ход: Игрок - выстрел");
					}
				}
				if (bullet_pattern == 2)
				{
					if (rr_shot_now <= 5)
					{
						rr_noshot_f();
						rr_hodnow++;
						rr_timer = 0;
						rr_last_hod_text.setString(L"Последний ход: Игрок - закупоренный");
					}
					else if (rr_shot_now >= 6)
					{
						rr_shot_f();
						rr_hodnow++;
						shot_to_player++;
						rr_timer = 0;
						rr_last_hod_text.setString(L"Последний ход: Игрок - выстрел");
					}
				}
			}
			else
			{
				rr_shot_now = dist_rr1(gen_rr);
			}
		}
	}
	if (lives_player > 0 && lives_bot == 0)
	{
		rr_last_hod_text.setString(L"Победа игрока.");
		rr_win = 1;
		if (rr_timer > 90)
		{
			game_stage = 23;
			max_game_stage = 23;
			rr_music.stop();
			karima_music.play();
		}
	}

	if (lives_player == 0 && lives_bot > 0)
	{
		rr_last_hod_text.setString(L"Победа каримы.");
		rr_win = 0;
		if (rr_timer > 90)
		{
			game_stage = 23;
			max_game_stage = 23;
			rr_music.stop();
			karima_music.play();
		}
	}
}
