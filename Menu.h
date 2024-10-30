#pragma once
#include <SFML/Graphics.hpp>

//стадия игры и счет
int game_stage = 0;
int max_game_stage = 0;
int score = 0;
bool loading_check = 1;

//загрузка текстура
sf::Texture loading_Texture;
sf::Sprite loading_sprite;

//кнопка закрытия игры
sf::Texture game_close_texture;
sf::Sprite game_close_sprite;

void game_close(sf::RenderWindow& window) //закрытие игры
{
    //кнопка закрытия игры
    game_close_texture.loadFromFile("Images/close.png");
    game_close_sprite.setTexture(game_close_texture);
    game_close_sprite.setPosition(925, 800);
    game_close_sprite.setScale(0.2, 0.2);
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