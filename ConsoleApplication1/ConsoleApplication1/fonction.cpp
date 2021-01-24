#include <iostream>
#include "Header.h"
using namespace std;

int AjouteDeux(int A)   // On crée une fonction Ajoutedeux avec comme référence integer la lettre A
{
    A += 2; // Ici a est egal a 2 ou +2
    return A;  
}
int fonction()
{
    int nombre(4), resultat;    // On crée une variable nombre de valeur 4, on crée une variable resultat;
    resultat = AjouteDeux(nombre); // On définit la valeur de résultat a la fonction AjouteDeux + (Nombre) donc 2 + 4 on referme;

    std::cout << "Le nombre original vaut : " << nombre << endl;
    std::cout << "Le resultat vaut : " << resultat << endl;
    return 0;
}