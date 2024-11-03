#pragma once
#include "SFML/Audio.hpp"

sf::Music music_base;
sf::Music swap_slide_music;
sf::Music tic_tac_toe_music;
sf::Music nim_music;
sf::Music nim_hod_music;
sf::Music karima_music;

void music()
{
	music_base.openFromFile("Audio/base_sound.ogg");
	music_base.play();
	music_base.setVolume(10.0f);
}

void swap_slide_music_f()
{
	swap_slide_music.openFromFile("Audio/swap_slide.ogg");
	swap_slide_music.setVolume(5.0f);
	swap_slide_music.play();
}

void tic_tac_toe_music_f()
{
	music_base.stop();
	tic_tac_toe_music.openFromFile("Audio/tic_tac_toe_sound.mp3");
	tic_tac_toe_music.setVolume(10.0f);
	tic_tac_toe_music.play();
}

void nim_music_f()
{
	tic_tac_toe_music.stop();
	nim_music.openFromFile("Audio/nim_sound.mp3");
	nim_music.setVolume(10.0f);
	nim_music.play();

	nim_hod_music.openFromFile("Audio/nim_hod.mp3");
	nim_hod_music.setVolume(10.0f);
}

void karima_music_f()
{
	karima_music.openFromFile("Audio/karina_sound.mp3");
	karima_music.setVolume(10.0f);
}
