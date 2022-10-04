/**********************************************

   Description: 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-10-01 17:38:56
   Updated: 2022-10-01 17:38:59
 
************************************************/

#include <iostream>
using namespace std;

int main() {

    int nb;

    cout << "enter un nombre" << endl;
    cin >> nb;

    for (int i = 0; i != nb; i++) {
        cout << "*";
    }
    cout << "\n";

    for (int a = 0; a != nb - 2; a++) {
        cout << "*";
        for (int y = 0; y != nb - 2; y++) {
            cout << " ";
        }
        cout << "*";
        cout << "\n";
    }

    for (int i = 0; i != nb; i++) {
        cout << "*";
    }

	cin.get(); cin.ignore();

	return EXIT_SUCCESS;
}