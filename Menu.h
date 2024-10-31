#pragma once
#include <SFML/Graphics.hpp>
#include "Buttons.h"
//стадия игры
int game_stage = 0;
int max_game_stage = 0;

int score = 0;

bool loading_check = 1;

sf::Texture loading_Texture;
sf::Sprite loading_sprite;

void game_close(sf::RenderWindow& window) //закрытие игры
{
    //открытие меню
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
    {
        game_stage = -1;
        loading_check = 1;
    }
    //закрытие игры при нажатии на кнопку закрытия
    if (game_stage == -1)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (game_close_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                game_close_sprite.setColor(sf::Color::Red);
                window.close();
            }
        }
    }
}

void loading() //экран загрузки
{
    loading_Texture.loadFromFile("Images/loading.jpg");
    loading_sprite.setTexture(loading_Texture);
    loading_sprite.setScale(1, 1);
}

void game_continue(sf::RenderWindow& window)
{
    if (game_stage == -1)
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (continue_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                game_stage = max_game_stage;
            }
        }
    }
}
