/*
Programme consomation essence
auteur : H BUNELIER
DATE : sept 2022
*/

#include <iostream>

using namespace std;


int main() {

	double nbKms, nbLitres, conso;

	cout << "entrer nombre de kilometre puis essence en litre ajouter : ";
	cin >> nbKms >> nbLitres;

	conso = nbLitres * 100 / nbKms;

	cout << "consomation = " << conso << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}