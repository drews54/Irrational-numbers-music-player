#include "stdafx.h"
#include "Music_Note.h"
using namespace std;

template <typename T>
string toString(T x) {
	std::ostringstream ss;
	ss.precision(54);
	ss << x;
	return ss.str();
}

void parser(string &rt) {
	for (unsigned int i = 0; i < rt.size(); ++i)
	{
		switch (rt[i] - '0')
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
		cout << rt[i];
	}
}

int main() {
	setlocale(LC_ALL, "");
	long double input = NULL;
	cout.precision(100);
	cout << "Введите число для извлечения корня: ";
	cin >> input;
	string *root = new string;
	*root = toString(sqrtl(input));
	parser(*root);
	cout << endl << "Спасибо за прослушивание!" << endl << '\a';
	delete root;
	return NULL;
}