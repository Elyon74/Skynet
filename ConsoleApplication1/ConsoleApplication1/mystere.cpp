// mystere.cpp : Ce fichier contient une fonction pour jouer au mot mystere
#include <iostream> 
#include <string>
#include <cmath>    
#include <istream> 
#include <fstream>  
#include <chrono>
#include <thread>
#include <ctime>    //  On charge la bibliotheque ctime necessaire au jeux mot mystere
#include <cstdlib>  //  On charge la bibliotheque cstdlib necessaire au jeux du mot mystere
#include "header.h"
using namespace std;
using namespace std::chrono_literals;

std::string melangerLettres(string mot)  // On cree une variable pour melanger le mot
{
std::string melange;
int position(0);

while (mot.size() != 0) //Tant qu'on n'a pas extrait toutes les lettres du mot
{
    position = rand() % mot.size(); //On choisit un numéro de lettre au hasard dans le mot
    melange += mot[position];   //On ajoute la lettre dans le mot mélangé
    mot.erase(position, 1);  //On retire cette lettre du mot mystère pour ne pas la prendre une deuxieme fois
}
return melange; //On renvoie le mot mélangé
}
int mystere()
{

bool retry(false);

std::string motMystere, motMelange, motUtilisateur;   // On cree les variable modulable motmystere, motmelange et motutilisateur
srand(time(0)); // Initialisation de la generation des nombres aleatoires

//1 : On demande de saisir un mot
std::cout << "Saisissez un mot :" << std::endl;
std::cin >> motMystere;

//2 : On récupère le mot avec les lettres mélangées dans motMelange
motMelange = melangerLettres(motMystere);

// Avec le terme do On effectue une demande a l' utilisateur au moins une fois
do
{

} while (true); // le terme while permet de la repeter
{
    std::cout << endl << "Quel est le mot mystere ? " << motMelange << std::endl;
    std::cin >> motUtilisateur;

    if (motUtilisateur == motMystere)
    {
        ofstream utilisateur(user.c_str());
        std::cout << " Bravo ! " << userline << " c' est le bon mot ! " << std::endl;
        std::cout << " Voulez vous recommencez a jouer ? " << std::endl;
        std::cin >> retry;
        if (retry == true)
        {
        }
        if (retry == false)
        {
            std::cout << " Fin du programme de simulation Skynet . " << std::endl;
            std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
            auto start = std::chrono::high_resolution_clock::now();
            std::this_thread::sleep_for(5000ms);
            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double, std::milli> elapsed = end - start;
            exit(0);
        }
    }
    else
    {
        std::cout << " Dommage ! " << userline << " Ce n'est pas le bon mot ! " << std::endl;
    }
} while (motUtilisateur != motMystere);
//On recommence tant qu'il n'a pas eter trouvé
}