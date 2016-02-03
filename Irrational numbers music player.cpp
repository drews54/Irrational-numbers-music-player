// Irrational numbers music player.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

std::string to_string(double x)
{
	std::ostringstream ss;
	ss << x;
	return ss.str();
}

int main()
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

	int input = NULL;
	std::cout << "Введите число: ";
	std::cin >> input;
	if (input == NULL)
		throw "Нет ввода.";

	std::string str = to_string(input);

	std::cout << root;
	return 0;
}