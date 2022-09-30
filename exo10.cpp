/**********************************************

   Description: 

   by: BUNELIER Hugo | github bubudotsh

   Created: 2022-09-30 18:45:43
   Updated: 2022-09-30 19:02:28
 
************************************************/

#include <iostream>
#include <numeric>
#include <vector>

using namespace std;


int main()
{
    int max, x;
    vector<double> tab {};
    cout << "entrer vos nombre" << endl;

    while (true) {
        double nb;
        cin >> nb;

        if (nb == -1) {
            break;
        }

        tab.push_back(nb);
    }

    // compter le nombre de vleur dans le tableau

    for (int i=0;i<50;++i) {

        if(tab[i]>max) {
            max=tab[i];
        }

    }


    double moyenne = (accumulate(begin(tab), end(tab), 0)) / tab.size();

    cout << "moyenne: " << moyenne << "; max: " << max << endl;


    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}
