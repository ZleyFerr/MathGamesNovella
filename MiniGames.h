#pragma once
#include "Nim.h"
#include "RussianRoullete.h"
#include "TicTacToe.h"
#include <SFML/Graphics.hpp>

//мини игры по умолчанию не запущены
bool tic_tac_minigame_start = 0;
bool nim_minigame_start = 0;
bool russian_roullete_minigame_start = 0;

void minigames() //запуск мини игр
{
    if (game_stage == 8)
    {
         tic_tac_minigame_start = 1;
         nim_minigame_start = 0;
         russian_roullete_minigame_start = 0;
    }
    if (tic_tac_minigame_start == 1) tic_tac_toe_main(); 
    if (nim_minigame_start == 1) nim_main();
    if (russian_roullete_minigame_start == 1) russian_roullete_main();
}
