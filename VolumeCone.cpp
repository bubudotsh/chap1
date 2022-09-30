/*
Programme qui calcule le volume d'un cone
auteur : H BUNELIER
DATE : sept 2022
*/

#include <iostream>

using namespace std; // utilisation de l'espace de nomage
					 // de la biblioteque standard

const double PI = 3.14159;

int main(void) {
	double rayon, hauteur, volume;

	cout << "rayons de la base : " << endl << flush;
	cin >> rayon;
	cout << "hauteur cone : " << endl << flush;
	cin >> hauteur;

	/*
	ou²
	cout << "rayons puis hauteur";
	cin >> hauteur >> rayon;

	*/

	volume = PI * rayon * rayon * hauteur / 3.0;

	cout << "volume de cone de rayon : " << rayon << " et de hauteur"
		<< hauteur << " est " << volume << endl;


	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}