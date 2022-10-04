/**********************************************

   Description: 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-10-04 17:41:10
   Updated: 2022-10-04 18:30:37
 
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