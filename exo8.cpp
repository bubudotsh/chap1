/*
calcule somme n premier terme de la serie harmonique
auteur : H BUNELIER
DATE : sept 2022
*/

#include <iostream>

using namespace std;
using std::stoi;
using std::string;


int main() {

    int n;
    double i = 1, s = 0.0;

    cout << "enter nb" << endl;
    cin >> n;

    while (i <= n) {
        s = s + 1/i;
        i++;
    }

    cout << s << endl;

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}