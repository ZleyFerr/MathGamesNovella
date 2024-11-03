#pragma once
#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Buttons.h"
#include <windows.h>
#include "Audio.h"
sf::Texture background_Texture;
sf::Sprite background_Sprite;

sf::Texture answer_texture;
sf::Sprite answer1_sprite, answer2_sprite;

int timer1 = 0;
int menu_start_check = 0;

int nim_true = 0;
void answers()
{
    answer_texture.loadFromFile("Images/answer.png");
    answer1_sprite.setTexture(answer_texture);
    answer2_sprite.setTexture(answer_texture);

    answer1_sprite.setScale(0.65, 0.025);
    answer1_sprite.setPosition(60, 850);

    answer2_sprite.setScale(0.40, 0.025);
    answer2_sprite.setPosition(60, 920);
}
void background() 
{
    answers();
    //бэкгранды от стадии игры
    if (game_stage == 0)
    {
        background_Texture.loadFromFile("Images/background_0.jpg");
        max_game_stage = 1;
        game_stage = 1;
    }
    if (game_stage == 1 && menu_start_check == 0)
    {
        game_stage = -1;
        menu_start_check = 1;
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
                swap_slide_music_f();
            }
        }
    }

    if (game_stage == 2) //переход на 3 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                max_game_stage = 3;
                game_stage = 3;
                timer1 = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 2)
        {
            timer1++;
        }
    }

    if (game_stage == 3) //переход на 4 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (answer1_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y) || answer2_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_3.png");
                max_game_stage = 4;
                game_stage = 4;
                timer1 = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 3)
        {
            timer1++;
        }
    }

    if (game_stage == 4) //переход на 5 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_1.jpg");
                max_game_stage = 5;
                game_stage = 5;
                timer1 = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 4)
        {
            timer1++;
        }
    }

    if (game_stage == 5) //переход на 6 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/tic_tac_toe_background.jpg");
                max_game_stage = 6;
                game_stage = 6;
                timer1 = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 5)
        {
            timer1++;
        }
    }

    if (game_stage == 6) //переход на 7 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/tic_tac_toe_background.jpg");
                max_game_stage = 7;
                game_stage = 7;
                timer1 = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 6)
        {
            timer1++;
        }
    }

    if (game_stage == 7) //переход на 8 стадию ( крестики нолики )
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/tic_tac_toe_background.jpg");
                max_game_stage = 8;
                game_stage = 8;
                timer1 = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 7)
        {
            timer1++;
        }
    }

    if (game_stage == 9) //переход на 10 стадию (после крестиков ноликов )
    {
        background_Texture.loadFromFile("Images/background_2.jpeg");
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_4.jpg");
                max_game_stage = 10;
                game_stage = 10;
                timer1 = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 9)
        {
            timer1++;
        }
    }

    if (game_stage == 10) //переход на 11 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_4.jpg");
                max_game_stage = 11;
                game_stage = 11;
                timer1 = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 10)
        {
            timer1++;
        }
    }

    if (game_stage == 9) //переход на 10 стадию (после крестиков ноликов )
    {
        background_Texture.loadFromFile("Images/background_2.jpeg");
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_4.jpg");
                max_game_stage = 10;
                game_stage = 10;
                timer1 = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 9)
        {
            timer1++;
        }
    }

    if (game_stage == 11) //переход на 12 стадию
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (answer1_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_4.jpg");
                max_game_stage = 12;
                game_stage = 12;
                timer1 = 0;
                nim_true = 1;
                swap_slide_music_f();
            }
            if (answer2_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_4.jpg");
                max_game_stage = 12;
                game_stage = 12;
                timer1 = 0;
                nim_true = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 11)
        {
            timer1++;
        }
    }

    if (game_stage == 12) //переход на 13 стадию 
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_5.jpg");
                max_game_stage = 13;
                game_stage = 13;
                timer1 = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 12)
        {
            timer1++;
        }
    }
    if (game_stage == 13) //переход на 14 стадию - мини игра ним
    {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_6.jpg");
                max_game_stage = 14;
                game_stage = 14;
                timer1 = 0;
                swap_slide_music_f();
            }
        }
        if (game_stage == 13)
        {
            timer1++;
        }
    }

    if (game_stage == 15) //после нима
    {
        background_Texture.loadFromFile("Images/background_4.jpg");
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && timer1 > 30)
        {
            if (next_button_sprite.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                background_Texture.loadFromFile("Images/background_7.jpg");
                max_game_stage = 16;
                game_stage = 16;
                timer1 = 0;
                swap_slide_music_f();
                music_base.stop();
                karima_music.play();
            }
        }
        if (game_stage == 15)
        {
            timer1++;
        }
    }

    background_Sprite.setTexture(background_Texture);
    //экран загрузки
    if (game_stage != -1) loading_check = 0;
}
