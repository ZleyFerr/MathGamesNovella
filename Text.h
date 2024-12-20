#pragma once
#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "MiniGames.h"
#include "Background.h"

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
    if (game_stage == 10 && nichya > -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 810));
        novella_text.setString(L"Ну привет, меня зовут Даша.\nКсюшу ты обыграл\nно меня ты никогда не победишь!\n");
    }
    if (game_stage == 10 && nichya == -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Ну привет, меня зовут Даша.\nКсюше ты проиграл,ха-ха\nно так уж и быть, я дам тебе шанс отыграться)\nНо не надейся, что ты легко победишь!");
    }
    if (game_stage == 11)
    {
        novella_text.setCharacterSize(35);
        novella_text.setPosition(sf::Vector2f(125, 750));
        answer_text.setString(L"-Ним, наверное?\n\n-Догонялки?)");
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Как думаешь, во что мы будем играть?");
    }
    if (game_stage == 12 && nim_true == 1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Да, ты угадал!\nТогда сейчас я объясню тебе правила\nИ кстати, Ним - моя любимая математическая игра!\nпойдем на улицу.");
    }
    if (game_stage == 12 && nim_true == 0)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Нет, ты не угадал!\nИграть мы с тобой, будем в Ним)\nИ кстати, Ним - моя любимая математическая игра!\nСейчас я объясню тебе правила.\nпойдем на улицу.");
    }
    if (game_stage == 13)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Слушай внимательно!\nУ нас есть 4 кучки\nв каждой из них от 2 до 3 монеток\nходим по очереди - ты первый\nбрать из одной кучки можно от 1 до 3 штук\nпобедит тот кто возьмёт последнюю монету");
    }
    if (game_stage == 14)
    {
        novella_text.setCharacterSize(24);
        text_background_sprite.setPosition(30, 320);
        novella_text.setPosition(sf::Vector2f(110, 380));
        novella_text.setString(L"Мини игра 2 - Ним\nКоличество кучек : 4 \nколичество монет в куче написано под кучей\n1 ход - игрока, 2 - даши\nбрать из одной кучки можно от 1 до 3 штук\nпобедит тот кто возьмёт последнюю монету");
    }

    if (game_stage == 15 && nim_win == 0)
    {
        text_background_sprite.setPosition(30, 720);
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Ну, я не секунду не сомневалась в себе)\nно я добрее Ксюши и Каримы\nпоэтому наказание тебе выберет Карина потом.\nона тебя уже заждалась.\nудачи тебе с ней..");
    }

    if (game_stage == 15 && nim_win == 1)
    {
        text_background_sprite.setPosition(30, 720);
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Ну, я не секунду не сомневалась в тебе)\nрада, что ты не такой глупый, как думает Карима\nя думаю тебе пора бежать к ней.\nона тебя уже заждалась.\nудачи тебе с ней..");
    }

    if (game_stage == 16)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Признаться, я удивлена, думала, ты не дойдешь до меня..\nмне казалось ты уже пойдешь на уроки..\nя даже успела пиджак поменять..");
    }

    if (game_stage == 17)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Ну раз уж ты стоишь передо мной..\nЯ, как глава дисциплинарного комитета,\nПредлагаю тебе сыграть в финальную игру..");
    }

    if (game_stage == 18)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Точнее, выбора у тебя нет, ха-ха\nМоя любимая тема это:\nматематической логика и теория вероятностей\nА это значит, что мы с тобой сыграем...");
    }

    if (game_stage == 19)
    {
        novella_text.setCharacterSize(35);
        novella_text.setPosition(sf::Vector2f(125, 750));
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Это очень весёлая игра, угадай)");
        answer_text.setFont(font);
        answer_text.setCharacterSize(28);
        answer_text.setFillColor(sf::Color::Cyan);
        answer_text.setScale(1, 1.1);
        answer_text.setPosition(sf::Vector2f(65, 850));
        answer_text.setString(L"-Морской бой?\n\n-Суефа??)");
    }

    if (game_stage == 20)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Наивный..\nМы с тобой сыграем в русскую рулетку\nно разумеется безопасную)\nна водяных пистолетах.\nПравила предельно просты.");
    }

    if (game_stage == 21)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 780));
        novella_text.setString(L"Всего есть 8 водных пистолетиков\nнекоторые из них закупорены\nа другие - открытые\nу каждого из нас есть лишь 1 попытка намочиться\nна кого вода попадает второй раз - проиграл.\nДумаю ты готов, пойдем на улицу.");
    }

    if (game_stage == 22)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 755));
        novella_text.setString(L"Выберите в кого вы стрельните в Кариму или в себя\nКоличество закупоренных и открытых (по умолчанию!) ниже\nслева - жизни игрока, справа - каримы.\nесли ход не делается - зажми кнопку");
    }

    if (game_stage == 23 && rr_win == 1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 755));
        novella_text.setString(L"Фффф...\nИз-за тебя я вся промокла..\nПрогульщик чёртов..\nладно, пойдем к остальным.\nтолько пиджак обратно переодену..");
        text_background_texture.loadFromFile("Images/text_background.png");
        text_background_sprite.setTexture(text_background_texture);
        text_background_sprite.setScale(1.5, 0.7);
        text_background_sprite.setPosition(30, 720);
        text_background_sprite.setColor(sf::Color(0, 0, 0, 128));
    }

    if (game_stage == 23 && rr_win == 0)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 755));
        novella_text.setString(L"Ха-ха, это было слишком просто, мокрый мальчик)\nСейчас мы пойдем к остальным\nи изберем тебе меру наказания.\n");
    }

    if (game_stage == 24)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 755));
        novella_text.setString(L"Ну что-ж, вся наша коллегия в сборе.\nсейчас мы решим, что будем с тобой делать.\nдавай выслушаем всех.");
    }

    if (game_stage == 25 && nichya > -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 755));
        novella_text.setString(L"Он смог обыграть меня..\nОн правда умный\nдевочки, решайте без меня..");
    }

    if (game_stage == 25 && nichya == -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 755));
        novella_text.setString(L"Он не смог обыграть меня..\nтак что он будет отдраивать парты в классе\nпускай даша скажет, выиграл ли он её");
    }

    if (game_stage == 26 && nim_win == 1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 755));
        novella_text.setString(L"Прогульщик умный.\nон победил меня в ниме,\nкарима, слово за тобой.");
    }

    if (game_stage == 26 && nim_win == 0)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(110, 755));
        novella_text.setString(L"парнишка не смог победить меня в ниме,\nно я добрая, так что\nкарима, слово за тобой.");
    }

    if (game_stage == 27 && rr_win == 1 && nim_win == 1 && nichya > -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(75, 755));
        novella_text.setString(L"Да уж.. парнишка, хоть ты и прогульщик..\nНо ты обыграл нас всех..\nтак уж и быть, можешь не ходить на мат.логику\nиди, гуляй.\n\nEscape - выход из игры");
    }

    if (game_stage == 27 && rr_win == 0 && nim_win == 1 && nichya > -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(75, 755));
        novella_text.setString(L"Да уж.. парнишка, хоть ты и прогульщик..\nНо ты обыграл моих замов..\nтак уж и быть, иди гуляй\nно, чтобы следующий раз был на уроке!\n\nEscape - выход из игры");
    }

    if (game_stage == 27 && rr_win == 1 && nim_win == 0 && nichya > -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(75, 755));
        novella_text.setString(L"Да уж.. парнишка, хоть ты и прогульщик..\nНо ты обыграл меня и Ксюшу\nтак уж и быть, иди гуляй\nно, я бы посоветовала тебе ходить на уроки!\n\nEscape - выход из игры");
    }

    if (game_stage == 27 && rr_win == 0 && nim_win == 0 && nichya > -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(75, 755));
        novella_text.setString(L"Да уж.. парнишка, хоть ты и прогульщик..\nНо ты обыграл Ксюшу\nтак, что парты драить не будешь.\nа сейчас, живо на урок!\n\nEscape - выход из игры");
    }

    if (game_stage == 27 && rr_win == 1 && nim_win == 1 && nichya == -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(75, 755));
        novella_text.setString(L"Да уж.. парнишка, хоть ты и прогульщик..\nНо ты обыграл меня и Дашу\nтак, что на урок можешь не идти,\nно завтра придешь драить парты в классе!\n\nEscape - выход из игры");
    }

    if (game_stage == 27 && rr_win == 0 && nim_win == 1 && nichya == -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(75, 755));
        novella_text.setString(L"Да уж.. парнишка, ты обыграл Дашу \nтак, что жаловаться на тебя не буду,\nно этого мало - живо на урок!\nи завтра придешь драить парты в классе!\n\nEscape - выход из игры");
    }

    if (game_stage == 27 && rr_win == 0 && nim_win == 0 && nichya == -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(75, 755));
        novella_text.setString(L"Да уж..\nТы оказался гораздо глупее, чем мы думали..\nты будешь исключён из школы за прогулы.\nживо к директору.\n\nEscape - выход из игры");
    }

    if (game_stage == 27 && rr_win == 1 && nim_win == 0 && nichya == -1)
    {
        novella_text.setCharacterSize(24);
        novella_text.setPosition(sf::Vector2f(75, 755));
        novella_text.setString(L"Да уж..\nТы оказался гораздо глупее, чем мы думали..\nты не будешь исключён из школы за прогулы.\nно сейчас живо на урок!\n\nEscape - выход из игры");
    }

}
