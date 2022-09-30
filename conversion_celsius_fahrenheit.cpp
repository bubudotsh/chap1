/*
Programme conversion temperature
auteur : H BUNELIER
DATE : sept 2022
*/

#include <iostream>

using namespace std; // utilisation de l'espace de nomage
					 // de la biblioteque standard


const int zero = -273.15;

int main() {

	long long temp, res;

	cout << "entrer une temperature en celsius : \n" << endl << flush;
	cin >> temp;

	if (temp < zero) {
		cout << "no" << endl;
		return(0);
	}
	
	res = 9.0 / 5.0 * temp + 32.0;

	cout <<"\n\n" << temp << "C est egale a " << res << "F\n" << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}