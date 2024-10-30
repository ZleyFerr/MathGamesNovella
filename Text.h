#pragma once
#include <SFML/Graphics.hpp>

//text background
sf::Texture text_background_texture;
sf::Sprite text_background_sprite;

//text
sf::Text novella_text;
sf::Font font;

void text_background() //фон для текста
{
    text_background_texture.loadFromFile("Images/text_background.png");
    text_background_sprite.setTexture(text_background_texture);
    text_background_sprite.setScale(0.4, 0.4);
    text_background_sprite.setPosition(1300, 400);
}

void novella_scene_text() //текст новеллы
{
    font.loadFromFile("Fonts/MOSCOW2024.otf");
    novella_text.setFont(font);
    novella_text.setCharacterSize(35);
    novella_text.setFillColor(sf::Color::White);
    novella_text.setScale(1, 1.1);
    novella_text.setPosition(sf::Vector2f(250, 650));
    novella_text.setString(L"приветствую тебя в своей игре!\nМеня зовут Максим\nи я - бог этой игры!");
}
