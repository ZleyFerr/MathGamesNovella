#pragma once
#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Buttons.h"
#include <windows.h>

sf::Texture background_Texture;
sf::Sprite background_Sprite;
sf::Event event1;

sf::Texture answer_texture;
sf::Sprite answer1_sprite, answer2_sprite;

int timer1 = 0;
int menu_start_check = 0;
void answers()
{
    answer_texture.loadFromFile("Images/answer.png");
    answer1_sprite.setTexture(answer_texture);
    answer2_sprite.setTexture(answer_texture);

    answer1_sprite.setScale(0.65, 0.025);
    answer1_sprite.setPosition(60, 850);

    answer2_sprite.setScale(0.40, 0.025);
    answer2_sprite.setPosition(60, 920);
}
void background() 
{
    answers();
    //бэкгранды от стадии игры
    if (game_stage == 0)
    {
        background_Texture.loadFromFile("Images/background_0.jpg");
        max_game_stage = 1;
        game_stage = 1;
    }
    if (game_stage == 1 && menu_start_check == 0)
    {
        game_stage = -1;
        menu_start_check = 1;
    }
    if (game_stage == 1) //переход на 2 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Event::MouseButtonReleased)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_1.jpg");
                max_game_stage = 2;
                game_stage = 2;
                timer1 = 0;
            }
        }
    }

    if (game_stage == 2) //переход на 3 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 5)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                max_game_stage = 3;
                game_stage = 3;
                timer1 = 0;
            }
        }
        if (game_stage == 2)
        {
            timer1++;
        }
    }

    if (game_stage == 3) //переход на 4 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 5)
        {
            if (answer1_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y) || answer2_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_3.png");
                max_game_stage = 4;
                game_stage = 4;
                timer1 = 0;
            }
        }
        if (game_stage == 3)
        {
            timer1++;
        }
    }

    if (game_stage == 4) //переход на 5 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 5)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_1.jpg");
                max_game_stage = 5;
                game_stage = 5;
                timer1 = 0;
            }
        }
        if (game_stage == 4)
        {
            timer1++;
        }
    }

    if (game_stage == 5) //переход на 6 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 5)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/tic_tac_toe_background.jpg");
                max_game_stage = 6;
                game_stage = 6;
                timer1 = 0;
            }
        }
        if (game_stage == 5)
        {
            timer1++;
        }
    }

    if (game_stage == 6) //переход на 7 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 5)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/tic_tac_toe_background.jpg");
                max_game_stage = 7;
                game_stage = 7;
                timer1 = 0;
            }
        }
        if (game_stage == 6)
        {
            timer1++;
        }
    }

    if (game_stage == 7) //переход на 8 стадию ( крестики нолики )
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 5)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/tic_tac_toe_background.jpg");
                max_game_stage = 8;
                game_stage = 8;
                timer1 = 0;
            }
        }
        if (game_stage == 7)
        {
            timer1++;
        }
    }
    if (game_stage == 9) //переход на 10 стадию (после крестиков ноликов )
    {
        background_Texture.loadFromFile("Images/background_2.jpg");
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 5)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/tic_tac_toe_background.jpg");
                max_game_stage = 10;
                game_stage = 10;
                timer1 = 0;
            }
        }
        if (game_stage == 9)
        {
            timer1++;
        }
    }

    background_Sprite.setTexture(background_Texture);
    //экран загрузки
    if (game_stage != -1) loading_check = 0;
}
