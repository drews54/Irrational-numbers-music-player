// Irrational numbers music player.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

std::string to_string(double x)
{
	std::ostringstream ss;
	ss << x;
	return ss.str();
}

int main(void)
{
	setlocale(LC_ALL, "Russian");
	
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

	float input = NULL;
	std::cout << "Waiting for input: ";
	std::cin >> input;
	try
	{
		if (input == NULL)
			throw 99;
		if (input >= 100)
			throw 100;
	}
	catch (int x)
	{
		if (x == 99)
			std::cout << "Incorrect/No input. Try again.";
		if (x == 100)
			std:: cout << "Only numbers under 100 for now, sorry. :("
	}


//	std::string str = to_string(input);
//
//	std::cout << str << std::endl;
}