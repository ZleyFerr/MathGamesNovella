#pragma once
#include <SFML/Graphics.hpp>
#include "Menu.h"
sf::Texture text_background_texture;
sf::Sprite text_background_sprite;

sf::Texture chose_text_background_texture;
sf::Sprite chose_text_background_sprite;

sf::Text novella_text;
sf::Font font;

void text_background() 
{
    text_background_texture.loadFromFile("Images/text_background.png");
    text_background_sprite.setTexture(text_background_texture);
    text_background_sprite.setScale(1.5, 0.7);
    text_background_sprite.setPosition(30, 720);
    text_background_sprite.setColor(sf::Color(0,0,0, 128));
}

void novella_scene_text() 
{
    font.loadFromFile("Fonts/MOSCOW2024.otf");
    novella_text.setFont(font);
    novella_text.setCharacterSize(24);
    novella_text.setFillColor(sf::Color::White);
    novella_text.setScale(1, 1.1);
    novella_text.setPosition(sf::Vector2f(70, 750));

    novella_text.setString(L"Ой, привет, привет! Давно не виделись!\nесли вдруг ты забыл, как меня зовут - то я ????????\nмихаил скинь текст заебал!");

    if (game_stage == 2)
    {
        novella_text.setString(L"Текст бэкграунда 2");
    }
    if (game_stage == 3)
    {
        novella_text.setString(L"Текст бэкграунда 3");
    }
    if (game_stage == 4)
    {
        novella_text.setString(L"Текст бэкграунда 4");
    }
    if (game_stage == 5)
    {
        novella_text.setString(L"Текст бэкграунда 5");
    }
    if (game_stage == 6)
    {
        novella_text.setString(L"Текст бэкграунда 6");
    }
    if (game_stage == 7)
    {
        novella_text.setString(L"Текст бэкграунда 7");
    }

}
