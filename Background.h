#pragma once
#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Buttons.h"
#include <windows.h>

sf::Texture background_Texture;
sf::Sprite background_Sprite;
sf::Event event1;

int timer1 = 0;

void background() 
{
    //бэкгранды от стадии игры
    if (game_stage == 0)
    {
        background_Texture.loadFromFile("Images/background_1.jpeg");
        max_game_stage = 1;
        game_stage = 1;
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
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 15)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_1.jpeg");
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
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 15)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_1.jpeg");
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
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 15)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_1.jpeg");
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
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 15)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_1.jpeg");
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
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 15)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_1.jpeg");
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

    background_Sprite.setTexture(background_Texture);
    //экран загрузки
    if (game_stage != -1) loading_check = 0;
}
