// Complex.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex* c1 = new Complex(3, 4);
    Complex* c2 = new Complex(2, 3);

    c1->afficher();
    c2->afficher();

    Complex* c3 = new Complex(*c1 + *c2);
    Complex* c4 = new Complex(*c1 - *c2);
    Complex* c5 = new Complex(*c1 * *c2);
    Complex* c6 = new Complex(*c1 / *c2);

    double a = 5.0;

    Complex c7 = *c1 + a;
    Complex c8 = *c1 - a;
    Complex c9 = *c1 * a;
    Complex c10 = *c1 / a;

    cout << "\nAddition :" << endl;
    c3->afficher();
    c7.afficher();

    cout << "\nSoustraction :" << endl;
    c4->afficher();
    c8.afficher();

    cout << "\nMultiplication :" << endl;
    c5->afficher();
    c9.afficher();

    cout << "\nDivision :" << endl;
    c6->afficher();
    c10.afficher();

    cout << "\nComparaisons :" << endl;
    cout << boolalpha;

    cout << (*c1 == *c2) << endl;
    cout << (*c1 != *c2) << endl;
    cout << (*c1 < *c2) << endl;
    cout << (*c1 > *c2) << endl;

    cout << (*c1 == 5.0) << endl;
    cout << (*c1 != 5.0) << endl;
    cout << (*c1 < 5.0) << endl;
    cout << (*c1 > 5.0) << endl;

    cout << "\nConstructeur de copie :" << endl;
    Complex c11(*c1);
    c11.afficher();

    delete c1;
    delete c2;
    delete c3;
    delete c4;
    delete c5;
    delete c6;

    return 0;
}




// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
