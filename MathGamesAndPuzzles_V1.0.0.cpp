#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Text.h"
#include "Background.h"
#include "MiniGames.h"

void funcs_load();
void drawFunc(sf::RenderWindow& window);

int main()
{
    loading_check = 1;
    sf::RenderWindow window(sf::VideoMode(1920, 1080), L"Визуальная новелла: Математические игры и головоломки", sf::Style::Fullscreen); 
    window.setFramerateLimit(240);
    while (window.isOpen()) 
    {
        sf::Event event;
        game_close(window); 
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
}

void drawFunc(sf::RenderWindow& window)
{
    window.draw(background_Sprite);
    window.draw(text_background_sprite);
    window.draw(novella_text);
    if (loading_check == 1)
    {
        window.draw(loading_sprite);
        window.draw(game_close_sprite);
    }
}