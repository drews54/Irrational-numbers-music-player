// Irrational numbers music player.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

std::string to_string(double x)
{
	std::ostringstream ss;
	ss.precision(60);
	ss << x;
	return ss.str();
}

int main()
{
	SetConsoleCP(1251); // установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	
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

	std::string root = to_string(sqrt(input));
	for (int i = 0; i < root.length(); i++)
	{
		switch (root[i])
		{
		case Do:
			Beep(261.63, 100);
			break;
		case Re:
			Beep(293.66, 100);
			break;
		case Mi:
			Beep(329.63, 100);
			break;
		case Fa:
			Beep(349.23, 100);
			break;
		case So:
			Beep(392, 100);
			break;
		case La:
			Beep(440, 100);
			break;
		case Ti:
			Beep(493.88, 100);
			break;
		case Do1:
			Beep(523.25, 100);
			break;
		case Re1:
			Beep(587.33, 100);
			break;
		case Mi1:
			Beep(659.26, 100);
			break;
		}
	}
}