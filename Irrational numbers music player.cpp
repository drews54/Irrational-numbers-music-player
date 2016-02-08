#include "stdafx.h"
#include "Music_Note.h"
using namespace std;

void parser(string &rt) {
	for (unsigned int i = 0; i < rt.size(); ++i)
		switch (rt[i])
		{
		case 0:
			DO.play();
			break;
		case 1:
			RE.play();
			break;
		case 2:
			MI.play();
			break;
		case 3:
			FA.play();
			break;
		case 4:
			SO.play();
			break;
		case 5:
			LA.play();
			break;
		case 6:
			TI.play();
			break;
		case 7:
			DO1.play();
			break;
		case 8:
			RE1.play();
			break;
		case 9:
			MI1.play();
			break;
		default:
			break;
		}
}

int main() {
	setlocale(LC_ALL, "");
	unsigned int input;
	cout << "Введите число для извлечения корня: ";
	cin >> input;
	string *root = new string;
	*root = to_string(sqrtl(input));
	parser(*root);
	cout << endl << "Спасибо за прослушивание!" << endl << '\a';
	delete root;
	return NULL;
}