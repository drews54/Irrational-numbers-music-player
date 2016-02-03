// Irrational numbers music player.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	int input = NULL;
	double root;
	
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

	std::cout << "Введите число: ";
	std::cin >> input;

	if (input == NULL)
		throw "Нет ввода.";
	else
		root = sqrt(input);

	std::cout << root;
	return 0;
}

