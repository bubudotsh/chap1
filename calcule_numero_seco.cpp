/*
Programme conversion temperature
auteur : H BUNELIER
DATE : sept 2022
*/

#include <iostream>

using namespace std;


int main() {

	long long cle, nb;

	cout << "numero de secu :" << endl;
	cin >> nb;

	cle = 97 - (nb % 97);

	cout << "cle : " << cle << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}