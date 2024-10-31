#pragma once
#include <SFML/Graphics.hpp>

sf::Texture next_button_texture;
sf::Sprite next_button_sprite;

sf::Texture continue_button_texture;
sf::Sprite continue_button_sprite;

sf::Texture game_close_texture;
sf::Sprite game_close_sprite;

void next_button()
{
    next_button_texture.loadFromFile("Images/button_next.png");
    next_button_sprite.setTexture(next_button_texture);
    next_button_sprite.setScale(0.5, 0.32);
    next_button_sprite.setPosition(710, 890);
    next_button_sprite.setColor(sf::Color(136, 0, 0, 250));
}

void continue_button()
{
    continue_button_texture.loadFromFile("Images/button_close.png");
    continue_button_sprite.setTexture(continue_button_texture);
    continue_button_sprite.setScale(0.5, 0.5);
    continue_button_sprite.setPosition(1120, 650);
}

void game_close_button()
{
    game_close_texture.loadFromFile("Images/button_continue.png");
    game_close_sprite.setTexture(game_close_texture);
    game_close_sprite.setPosition(1120, 400);
    game_close_sprite.setScale(0.5, 0.5);
}
