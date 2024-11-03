#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Text.h"
#include "Background.h"
#include "MiniGames.h"
#include "Buttons.h"
#include "Audio.h"
void funcs_load();
void drawFunc(sf::RenderWindow& window);
void music_load();
int main()
{
    music_load();
    loading_check = 1;
    sf::RenderWindow window(sf::VideoMode(1920, 1080), L"Визуальная новелла: Математические игры и головоломки", sf::Style::Fullscreen); 
    window.setFramerateLimit(240);
    while (window.isOpen()) 
    {
        sf::Event event;
        event1;
        game_close(window); 
        game_continue(window);
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        funcs_load();
        window.clear();
        drawFunc(window); 
        window.display();
    }
}

void funcs_load()
{
    background();
    text_background();
    novella_scene_text();
    loading();
    next_button();
    continue_button();
    game_close_button();
    minigames();
}

void drawFunc(sf::RenderWindow& window)
{
    window.draw(background_Sprite);
    window.draw(text_background_sprite);
    window.draw(novella_text);
    if (game_stage != 8 and game_stage != 3 and game_stage != 11 and game_stage != 14)
    {
        window.draw(next_button_sprite);
    }
    if (loading_check == 1)
    {
        window.draw(loading_sprite);
        window.draw(game_close_sprite);
        window.draw(continue_button_sprite);
    }

    if (game_stage == 8)
    {
        window.draw(tic_tac_toe_field_sprite);
        tic_tac_toe_draw(window);
    }
    if (game_stage == 3 || game_stage == 11)
    {
        window.draw(answer_text);
    }
    
    if (game_stage == 14)
    {
        nim_draw(window);
    }
}

void music_load()
{
    music();
    karima_music_f();
}
