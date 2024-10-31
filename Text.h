#pragma once
#include <SFML/Graphics.hpp>
#include "Menu.h"
sf::Texture text_background_texture;
sf::Sprite text_background_sprite;

sf::Texture chose_text_background_texture;
sf::Sprite chose_text_background_sprite;

sf::Text novella_text;
sf::Text answer_text;
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
    novella_text.setCharacterSize(20);
    novella_text.setFillColor(sf::Color::White);
    novella_text.setScale(1, 1.1);
    novella_text.setPosition(sf::Vector2f(70, 800));

    novella_text.setString(L"Я бродил по коридорам школы, где каждая стена хранила свои тайны.\nШумный звонок, возвещающий о начале пар, оставлял меня в стороне\nкак призрака, не способного найти своё место в этом бурлящем мире.");
    if (game_stage == 2)
    {

        novella_text.setString(L"Под вечер, когда солнечные лучи начали расчленять тени на асфальте,\nпрогульщик, осознавший прелесть безмятежных часов,\nнатолкнулся на группу студентов из дисциплинарного комитета.\nИх лица выражали смесь строгости и любопытства,\nа глаза искрились неподдельным интересом.");
    }
    if (game_stage == 3)
    {
        novella_text.setCharacterSize(40);
        novella_text.setPosition(sf::Vector2f(155, 750));
        novella_text.setString(L"Ты снова прогуливаешь пары?!");
        answer_text.setFont(font);
        answer_text.setCharacterSize(28);
        answer_text.setFillColor(sf::Color::Cyan);
        answer_text.setScale(1, 1.1);
        answer_text.setPosition(sf::Vector2f(65, 850));
        answer_text.setString(L"-Я и так знаю мат. логику, мне там делать нечего.\n\n-Не нужна мне эта мат. логика");
    }
    if (game_stage == 4)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Да?\n\nТогда давай в этом убедимся.\nДля начала тебя проверят Ксюша и Даша,\nА потом я лично должна буду убедиться,\nзнаешь ли ты материал или нет.");
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
    if (game_stage == 8)
    {
        novella_text.setString(L"Мини игра 1 ");
    }
}
