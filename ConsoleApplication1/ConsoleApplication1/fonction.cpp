#include <iostream>
#include "Header.h"
using namespace std;

int AjouteDeux(int A)   // On cr�e une fonction Ajoutedeux avec comme r�f�rence integer la lettre A
{
    A += 2; // Ici a est egal a 2 ou +2
    return A;  
}
int fonction()
{
    int nombre(4), resultat;    // On cr�e une variable nombre de valeur 4, on cr�e une variable resultat;
    resultat = AjouteDeux(nombre); // On d�finit la valeur de r�sultat a la fonction AjouteDeux + (Nombre) donc 2 + 4 on referme;

    std::cout << "Le nombre original vaut : " << nombre << endl;
    std::cout << "Le resultat vaut : " << resultat << endl;
    return 0;
}