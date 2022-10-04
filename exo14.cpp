/**********************************************

   Description: 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-10-01 17:38:56
   Updated: 2022-10-01 17:38:59
 
************************************************/

#include <iostream>
using namespace std;

int main() {

    int nb, i = 0, l, a = 0, b = 0;

    cout << "entrer un nombre: " << endl;
    cin >> nb;
    cout << "\n";

    l = nb / 2 + 1;

    while (i != l) {
        for (int y = 0; y != b; y++) {
            cout << " ";
        }
        for (int y = 0; y != nb - a; y++) {
            cout << "*";
        }
        for (int y = 0; y != b; y++) {
            cout << " ";
        }
        cout << "\n";
        a += 2;
        i++;
        b++;
    }

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}