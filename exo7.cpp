/*
addition nombre paire
auteur : H BUNELIER
DATE : sept 2022
*/

#include <iostream>

using namespace std; // utilisation de l'espace de nomage
					 // de la biblioteque standard


int main() {

    int i = 1;
    int y = 1;

    while (i != 101) {
        y = y + i;
        i += 2;
    }

    cout << y << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}