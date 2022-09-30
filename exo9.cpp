 /**************************************************************************
 *                                                                         *
 *                                                                         *
 *      by: BUNELIER Hugo                    ::::::::     ::::::::         *
 *                                          :+:    :+:   :+:    :+:        *
 *                                                +:+   +:+    +:+         *
 *      github: bubudotsh                     +#++:     +#++:++#           *
 *                                              +#+   +#+    +#+           *
 *      Created: 2022-09-27 21:16:28     #+#   #+#   #+#    #+#            *
 *      Updated: 2022-09-30 11:00:48     ########    ########              *
 *                                                                         *
 *                                                                         *
 ***************************************************************************/





#include <iostream>
#include <math.h>

using namespace std;


int main()
{

    int nb;
    double res = 1.0;

    cout << "enter nb" << endl;
    cin >> nb;

    for (int i = 0; i != nb; i++)
    {
        res = sqrt(1 + res);
    }

    cout << res << endl;

    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}
