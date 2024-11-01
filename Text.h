#pragma once
#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "MiniGames.h"

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
        novella_text.setCharacterSize(26);
        novella_text.setPosition(sf::Vector2f(85, 810));
        novella_text.setString(L"Пускай первой пойдёт Ксюша,\nона просто мастер игры в Крестики Нолики!\nЕсли ты вдруг проиграешь ей, то ты будешь наказан!");
    }
    if (game_stage == 6)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Давай я объясню тебе правила.\nСначала ты ставишь крестик\nпотом я ставлю нолик\nкто собирает 3 в ряд - победил.\nЭто развивает логику.");
    }
    if (game_stage == 7)
    {
        novella_text.setCharacterSize(22);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Если ты вдруг проиграешь, то будешь отмывать весь класс,\nКаждую стену будешь оттирать\nТак, что постарайся)");
    }
    if (game_stage == 8)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Игра - Крестики Нолики\nНажмите на пустую клетку, чтобы поставить крестик\nдля победы нужно собрать 3 в ряд\nничья - считается за поражение!\nдождись пока Ксюша сходит, не спеши, она думает.");
    }
    if (game_stage == 9 && nichya > -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(140, 780));
        novella_text.setString(L"Невозможно!\nКак ты?!… Аргх!!\nБуууу, ладно, ты победил.\nЧего уставился ?! Иди дальше!\nДаша тебя уже заждалась!");
    }
    if (game_stage == 9 && nichya == -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(140, 780));
        novella_text.setString(L"Хаха, я же говорила, что лучшая.\nТак и быть, отдраивать будешь лишь парты,\nа не весь класс, иди к Ксюше\nно если еще раз тебя увижу прогуливающим\nто будешь весь класс драить!");
    }
}
