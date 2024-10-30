#pragma once
#include <SFML/Graphics.hpp>

sf::Texture background_Texture;
sf::Sprite background_Sprite;

void background() 
{
    //бэкгранды от стадии игры
    if (game_stage == 0)
    {
        background_Texture.loadFromFile("Images/background_1.jpeg");
        max_game_stage = 1;
        game_stage = 1;
    }
    if (game_stage == 3)
    {
        background_Texture.loadFromFile("Images/background_2.jpg");
        max_game_stage = 2;
        game_stage = 2;
    }
    background_Sprite.setTexture(background_Texture);
    //экран загрузки
    if (game_stage != -1) loading_check = 0;
}
