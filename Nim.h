#pragma once
#include <SFML/Graphics.hpp>
#include <random>
#include "Buttons.h"
#include "Audio.h"

sf::Font font1;
sf::Text pile_1_1, pile_1_2, pile_1_3, pile_2_1, pile_2_2, pile_2_3, pile_3_1, pile_3_2, pile_3_3, pile_4_1, pile_4_2, pile_4_3;
sf::Text last_hod_text;
sf::Texture pile_hitbox_texture;
sf::Sprite pile_11_hitbox_sprite, pile_12_hitbox_sprite, pile_13_hitbox_sprite, pile_21_hitbox_sprite, pile_22_hitbox_sprite, pile_23_hitbox_sprite, pile_31_hitbox_sprite, pile_32_hitbox_sprite, pile_33_hitbox_sprite;

std::random_device rd1;
std::mt19937 gen1(rd1());
std::uniform_int_distribution<int> dist1(1, 3);
std::uniform_int_distribution<int> dist11(2, 3);
std::uniform_int_distribution<int> distbot(1, 4);

int pile_1_coins = dist11(rd1), pile_2_coins = dist11(rd1), pile_3_coins = dist11(rd1), pile_4_coins = dist11(rd1);
sf::Text pile_1_coins_show, pile_2_coins_show, pile_3_coins_show, pile_4_coins_show;

int nim_stage = 1;
int nim_last_hod = 0;

int piles_sum = 100;
int nim_win = 0;

int nim_bot_hod = 0;
int nim_bot_hod_amount = 0;

int nim_timer = 0;
int nim_end = 0;

int nim_music_started = 0;

sf::Texture nim_text_background_texture;
sf::Sprite nim_text_background_sprite;
void nim_text_background()
{
    nim_text_background_texture.loadFromFile("Images/text_background.png");
    nim_text_background_sprite.setTexture(nim_text_background_texture);
    nim_text_background_sprite.setScale(1, 0.4);
    nim_text_background_sprite.setPosition(1300, 370);
    nim_text_background_sprite.setColor(sf::Color(0, 0, 0, 128));
}

void pile_text()
{
    font1.loadFromFile("Fonts/IntroFriday.ttf");
    pile_1_1.setFont(font1);
    pile_1_2.setFont(font1);
    pile_1_3.setFont(font1);
    pile_2_1.setFont(font1);
    pile_2_2.setFont(font1);
    pile_2_3.setFont(font1);
    pile_3_1.setFont(font1);
    pile_3_2.setFont(font1);
    pile_3_3.setFont(font1);
    pile_4_1.setFont(font1);
    pile_4_2.setFont(font1);
    pile_4_3.setFont(font1);

    pile_1_1.setCharacterSize(52);
    pile_1_1.setFillColor(sf::Color::Cyan);
    pile_1_1.setPosition(sf::Vector2f(330, 970));
    pile_1_1.setString(L"1");

    pile_1_2.setCharacterSize(52);
    pile_1_2.setFillColor(sf::Color::Cyan);
    pile_1_2.setPosition(sf::Vector2f(390, 970));
    pile_1_2.setString(L"2");

    pile_1_3.setCharacterSize(52);
    pile_1_3.setFillColor(sf::Color::Cyan);
    pile_1_3.setPosition(sf::Vector2f(450, 970));
    pile_1_3.setString(L"3");

    pile_2_1.setCharacterSize(52);
    pile_2_1.setFillColor(sf::Color::Cyan);
    pile_2_1.setPosition(sf::Vector2f(600, 900));
    pile_2_1.setString(L"1");

    pile_2_2.setCharacterSize(52);
    pile_2_2.setFillColor(sf::Color::Cyan);
    pile_2_2.setPosition(sf::Vector2f(660, 900));
    pile_2_2.setString(L"2");

    pile_2_3.setCharacterSize(52);
    pile_2_3.setFillColor(sf::Color::Cyan);
    pile_2_3.setPosition(sf::Vector2f(720, 900));
    pile_2_3.setString(L"3");

    pile_3_1.setCharacterSize(52);
    pile_3_1.setFillColor(sf::Color::Cyan);
    pile_3_1.setPosition(sf::Vector2f(1260, 900));
    pile_3_1.setString(L"1");

    pile_3_2.setCharacterSize(52);
    pile_3_2.setFillColor(sf::Color::Cyan);
    pile_3_2.setPosition(sf::Vector2f(1320, 900));
    pile_3_2.setString(L"2");

    pile_3_3.setCharacterSize(52);
    pile_3_3.setFillColor(sf::Color::Cyan);
    pile_3_3.setPosition(sf::Vector2f(1380, 900));
    pile_3_3.setString(L"3");

    pile_4_1.setCharacterSize(52);
    pile_4_1.setFillColor(sf::Color::Cyan);
    pile_4_1.setPosition(sf::Vector2f(1525, 960));
    pile_4_1.setString(L"1");

    pile_4_2.setCharacterSize(52);
    pile_4_2.setFillColor(sf::Color::Cyan);
    pile_4_2.setPosition(sf::Vector2f(1585, 960));
    pile_4_2.setString(L"2");

    pile_4_3.setCharacterSize(52);
    pile_4_3.setFillColor(sf::Color::Cyan);
    pile_4_3.setPosition(sf::Vector2f(1645, 960));
    pile_4_3.setString(L"3");

    last_hod_text.setFont(font1);
    last_hod_text.setCharacterSize(40);
    last_hod_text.setFillColor(sf::Color::White);
    last_hod_text.setPosition(sf::Vector2f(1400, 400));
}

void pile_coins_show()
{
    font1.loadFromFile("Fonts/IntroFriday.ttf");
    pile_1_coins_show.setFont(font1);
    pile_2_coins_show.setFont(font1);
    pile_3_coins_show.setFont(font1);
    pile_4_coins_show.setFont(font1);

    pile_1_coins_show.setCharacterSize(52);
    pile_1_coins_show.setFillColor(sf::Color::Red);
    pile_1_coins_show.setPosition(sf::Vector2f(410, 900));
    if (pile_1_coins == 1) pile_1_coins_show.setString(L"1");
    if (pile_1_coins == 2) pile_1_coins_show.setString(L"2");
    if (pile_1_coins == 3) pile_1_coins_show.setString(L"3");
    if (pile_1_coins == 0) pile_1_coins_show.setString(L"0");

    pile_2_coins_show.setCharacterSize(52);
    pile_2_coins_show.setFillColor(sf::Color::Red);
    pile_2_coins_show.setPosition(sf::Vector2f(710, 810));
    if (pile_2_coins == 1) pile_2_coins_show.setString(L"1");
    if (pile_2_coins == 2) pile_2_coins_show.setString(L"2");
    if (pile_2_coins == 3) pile_2_coins_show.setString(L"3");
    if (pile_2_coins == 0) pile_2_coins_show.setString(L"0");

    pile_3_coins_show.setCharacterSize(52);
    pile_3_coins_show.setFillColor(sf::Color::Red);
    pile_3_coins_show.setPosition(sf::Vector2f(1310, 820));
    if (pile_3_coins == 1) pile_3_coins_show.setString(L"1");
    if (pile_3_coins == 2) pile_3_coins_show.setString(L"2");
    if (pile_3_coins == 3) pile_3_coins_show.setString(L"3");
    if (pile_3_coins == 0) pile_3_coins_show.setString(L"0");

    pile_4_coins_show.setCharacterSize(52);
    pile_4_coins_show.setFillColor(sf::Color::Red);
    pile_4_coins_show.setPosition(sf::Vector2f(1590, 900));
    if (pile_4_coins == 1) pile_4_coins_show.setString(L"1");
    if (pile_4_coins == 2) pile_4_coins_show.setString(L"2");
    if (pile_4_coins == 3) pile_4_coins_show.setString(L"3");
    if (pile_4_coins == 0) pile_4_coins_show.setString(L"0");
}

void nim_draw(sf::RenderWindow &window)
{
        window.draw(nim_text_background_sprite);
        window.draw(pile_1_1);
        window.draw(pile_1_2);
        window.draw(pile_1_3);
        window.draw(pile_2_1);
        window.draw(pile_2_2);
        window.draw(pile_2_3);
        window.draw(pile_3_1);
        window.draw(pile_3_2);
        window.draw(pile_3_3);
        window.draw(pile_4_1);
        window.draw(pile_4_2);
        window.draw(pile_4_3);

        window.draw(pile_1_coins_show);
        window.draw(pile_2_coins_show);
        window.draw(pile_3_coins_show);
        window.draw(pile_4_coins_show);

        window.draw(last_hod_text);
}
void nim_main()
{
    if (nim_music_started == 0)
    {
        music_base.stop();
        nim_music_f();
    }
    nim_music_started = 1;
    nim_timer++;

    if (pile_1_coins == 1 && pile_2_coins == 1 && pile_3_coins == 1 && pile_4_coins == 1)
    {
        pile_1_coins = dist11(rd1), pile_2_coins = dist11(rd1), pile_3_coins = dist11(rd1), pile_4_coins = dist11(rd1);
    }

    pile_coins_show();
    pile_text();
    nim_text_background();

    //игрок
    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_1_1.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_1_coins >= 1)
                {
                    pile_1_1.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_1_coins--;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 1 куча -1");
                    nim_hod_music.play();
                    nim_timer = 0;
                }
            }
        }
    }

    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_1_2.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_1_coins >= 2)
                {
                    pile_1_2.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_1_coins -= 2;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 1 куча -2");
                    nim_hod_music.play();
                    nim_timer = 0;
                }
            }
        }
    }

    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_1_3.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_1_coins == 3)
                {
                    pile_1_3.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_1_coins -= 3;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 1 куча -3");
                    nim_hod_music.play();
                    nim_timer = 0;
                }
            }
        }
    }

    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_2_1.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_2_coins >= 1)
                {
                    pile_2_1.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_2_coins -= 1;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 2 куча -1");
                    nim_hod_music.play();
                    nim_timer = 0;
                }
            }
        }
    }

    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_2_2.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_2_coins >= 2)
                {
                    pile_2_2.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_2_coins -= 2;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 2 куча -2");
                    nim_timer = 0;
                    nim_hod_music.play();
                }
            }
        }
    }

    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_2_3.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_2_coins == 3)
                {
                    pile_2_3.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_2_coins -= 3;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 2 куча -3");
                    nim_timer = 0;
                    nim_hod_music.play();
                }
            }
        }
    }

    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_3_1.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_3_coins >= 1)
                {
                    pile_3_1.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_3_coins -= 1;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 3 куча -1");
                    nim_timer = 0;
                    nim_hod_music.play();
                }
            }
        }
    }

    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_3_2.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_3_coins >= 2)
                {
                    pile_3_2.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_3_coins -= 2;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 3 куча -2");
                    nim_timer = 0;
                    nim_hod_music.play();
                }
            }
        }
    }

    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_3_3.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_3_coins >= 3)
                {
                    pile_3_3.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_3_coins -= 3;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 3 куча -3");
                    nim_timer = 0;
                    nim_hod_music.play();
                }
            }
        }
    }

    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_4_1.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_4_coins >= 1)
                {
                    pile_4_1.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_4_coins -= 1;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 4 куча -1");
                    nim_timer = 0;
                    nim_hod_music.play();
                }
            }
        }
    }

    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_4_2.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_4_coins >= 2)
                {
                    pile_4_2.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_4_coins -= 2;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 4 куча -2");
                    nim_timer = 0;
                    nim_hod_music.play();
                }
            }
        }
    }

    if (game_stage == 14)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (pile_4_3.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                if (nim_stage % 2 != 0 && pile_4_coins >= 3)
                {
                    pile_4_3.setFillColor(sf::Color::White);
                    nim_stage++;
                    pile_4_coins -= 3;
                    nim_last_hod = 1;
                    last_hod_text.setString(L"Последний ход:\nВы: 4 куча -3");
                    nim_timer = 0;
                    nim_hod_music.play();
                }
            }
        }
    }


    //bot
    if (nim_stage % 2 == 0)
    {
        nim_bot_hod = distbot(rd1);
        if (nim_bot_hod == 1)
        {
            if (pile_1_coins != 0)
            {
                nim_bot_hod_amount = dist1(rd1);
                if (nim_bot_hod_amount <= pile_1_coins)
                {
                    pile_1_coins -= nim_bot_hod_amount;
                    nim_last_hod = 0;
                    nim_stage++;
                    pile_1_coins_show.setFillColor(sf::Color::White);
                    nim_timer = 0;
                    if (nim_bot_hod_amount == 1)
                    {
                        last_hod_text.setString(L"Последний ход:\nДаша: 1 куча -1");
                        nim_hod_music.play();
                    }
                    else if (nim_bot_hod_amount == 2)
                    {
                        last_hod_text.setString(L"Последний ход:\nДаша: 1 куча -2");
                        nim_hod_music.play();
                    }
                    else if (nim_bot_hod_amount == 3)
                    {
                        last_hod_text.setString(L"Последний ход:\nДаша: 1 куча -3");
                        nim_hod_music.play();
                    }
                }
            }
            else
            {
                nim_bot_hod = distbot(rd1);
            }
        }

        if (nim_stage % 2 == 0)
        {
            if (nim_bot_hod == 1)
            {
                if (pile_2_coins != 0)
                {
                    nim_bot_hod_amount = dist1(rd1);
                    if (nim_bot_hod_amount <= pile_2_coins)
                    {
                        pile_2_coins -= nim_bot_hod_amount;
                        nim_last_hod = 0;
                        nim_stage++;
                        pile_2_coins_show.setFillColor(sf::Color::White);
                        nim_timer = 0;
                        if (nim_bot_hod_amount == 1)
                        {
                            last_hod_text.setString(L"Последний ход:\nДаша: 2 куча -1");
                            nim_hod_music.play();
                        }
                        else if (nim_bot_hod_amount == 2)
                        {
                            last_hod_text.setString(L"Последний ход:\nДаша: 2 куча -2");
                            nim_hod_music.play();
                        }
                        else if (nim_bot_hod_amount == 3)
                        {
                            last_hod_text.setString(L"Последний ход:\nДаша: 2 куча -3");
                            nim_hod_music.play();
                        }
                    }
                }
                else
                {
                    nim_bot_hod = distbot(rd1);
                }
            }
        }

        if (nim_stage % 2 == 0)
        {
            if (nim_bot_hod == 1)
            {
                if (pile_3_coins != 0)
                {
                    nim_bot_hod_amount = dist1(rd1);
                    if (nim_bot_hod_amount <= pile_3_coins)
                    {
                        pile_3_coins -= nim_bot_hod_amount;
                        nim_last_hod = 0;
                        nim_stage++;
                        pile_3_coins_show.setFillColor(sf::Color::White);
                        nim_timer = 0;
                        if (nim_bot_hod_amount == 1)
                        {
                            last_hod_text.setString(L"Последний ход:\nДаша: 3 куча -1");
                            nim_hod_music.play();
                        }
                        else if (nim_bot_hod_amount == 2)
                        {
                            last_hod_text.setString(L"Последний ход:\nДаша: 3 куча -2");
                            nim_hod_music.play();
                        }
                        else if (nim_bot_hod_amount == 3)
                        {
                            last_hod_text.setString(L"Последний ход:\nДаша: 3 куча -3");
                            nim_hod_music.play();
                        }
                    }
                }
                else
                {
                    nim_bot_hod = distbot(rd1);
                }
            }
        }

        if (nim_stage % 2 == 0)
        {
            if (nim_bot_hod == 1)
            {
                if (pile_4_coins != 0)
                {
                    nim_bot_hod_amount = dist1(rd1);
                    if (nim_bot_hod_amount <= pile_4_coins)
                    {
                        pile_4_coins -= nim_bot_hod_amount;
                        nim_last_hod = 0;
                        nim_stage++;
                        pile_4_coins_show.setFillColor(sf::Color::White);
                        nim_timer = 0;
                        if (nim_bot_hod_amount == 1)
                        {
                            last_hod_text.setString(L"Последний ход:\nДаша: 4 куча -1");
                            nim_hod_music.play();
                        }
                        else if (nim_bot_hod_amount == 2)
                        {
                            last_hod_text.setString(L"Последний ход:\nДаша: 4 куча -2");
                            nim_hod_music.play();
                        }
                        else if (nim_bot_hod_amount == 3)
                        {
                            last_hod_text.setString(L"Последний ход:\nДаша: 4 куча -3");
                            nim_hod_music.play();
                        }
                    }
                }
                else
                {
                    nim_bot_hod = distbot(rd1);
                }
            }
        }

    }

    //финал игры
    piles_sum = pile_1_coins + pile_2_coins + pile_3_coins + pile_4_coins;

    if (piles_sum == 0)
    {
        if (nim_last_hod == 1)
        {
            last_hod_text.setString(L"Последний ход:\nВы\nВы победили.");
            if (nim_timer > 120)
            {
                score++;
                game_stage = 15;
                max_game_stage = 15;
                nim_win = 1;
                nim_end = 1;
                nim_music.stop();
                music_base.play();
            }
        }
        if (nim_last_hod == 0)
        {
            last_hod_text.setString(L"Последний ход:\nДаша\nВы проиграли.");
            if (nim_timer > 120)
            {
                game_stage = 15;
                max_game_stage = 15;
                nim_win = 0;
                nim_end = 1;
                nim_music.stop();
                music_base.play();
            }
        }
    }
}
