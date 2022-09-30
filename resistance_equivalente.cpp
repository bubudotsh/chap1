/*
Programme resistance equivalente
auteur : H BUNELIER
DATE : sept 2022
*/

#include <iostream>
#include <math.h>

using namespace std;


int main() {

	double r1, r2, r3, rser, rpar, ch;

	cout << "entrer valeur resistance :" << endl;
	cin >> r1 >> r2 >> r3;

	cout << "1 - circuit en serie\n2 - circuit en parallele\n\nEnter number" << endl;
	cin >> ch;

	if (ch == 1) {
		rser = r1 + r2 + r3;
		cout << "\nresistance equivalente : " << rser << endl;
	}
	else if (ch == 2) {
		rpar = (r1 * r2 * r3) / (r1 * r2 + r1 * r3 + r2 * r3);
		cout << "\nresistance equivalente : " << rpar << endl;
	}
	else
	{
		cout << "\nivalide number" << endl;
	}

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}