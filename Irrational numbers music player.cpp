// Irrational numbers music player.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

std::string to_string(double x) {
	std::ostringstream ss;
	ss.precision(60);
	ss << x;
	return ss.str();
}

template <typename T>
void play_sound(T freq, int ms) {
	Beep(freq, ms);
}

int main(void) {
	enum Notes
	{
		Do,
		Re,
		Mi,
		Fa,
		So,
		La,
		Ti,
		Do1,
		Re1,
		Mi1
	};

	double input = NULL;
	std::cout << "Waiting for input: ";
	std::cin >> input;
	try
	{
		if (input == NULL)
			throw 99;
		if ((input >= 100) || (input) < 0)
			throw 100;
	}
	catch (int x)
	{
		switch (x)
		{
		case 99:
			std::cout << "Incorrect/No input. Try again." << std::endl;
			break;
		case 100:
			std::cout << "Only 0-99 numbers for now, sorry. :(" << std::endl;
			break;
		}
	}
	std::cout << "You choose to play a square root of " << input << std::endl;

	std::string root = to_string(sqrt(input));
	std::cout << "Now playing: ";
	for (int i = 0; i < root.length(); i++)
	{
		std::cout << root[i];
		int out = root[i] - '0';
		switch (out)
		{
		case Do:
			play_sound(261.63, 500);
			break;
		case Re:
			play_sound(293.66, 500);
			break;
		case Mi:
			play_sound(329.63, 500);
			break;
		case Fa:
			play_sound(349.23, 500);
			break;
		case So:
			play_sound(392, 500);
			break;
		case La:
			play_sound(440, 500);
			break;
		case Ti:
			play_sound(493.88, 500);
			break;
		case Do1:
			play_sound(523.25, 500);
			break;
		case Re1:
			play_sound(587.33, 500);
			break;
		case Mi1:
			play_sound(659.26, 500);
			break;
		}
	}
	std::cout << std::endl << "Thank you for listening!" << std::endl << '\a';
}