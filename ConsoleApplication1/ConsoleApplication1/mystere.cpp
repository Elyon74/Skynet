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
#include "Header.h"

std::string melangerLettres(string mot)
{
    std::string melange;
    int position(0);

    while (mot.size() != 0) //Tant qu'on n'a pas extrait toutes les lettres du mot
    {
        position = rand() % mot.size(); //On choisit un numéro de lettre au hasard dans le mot
        melange += mot[position];   //On ajoute la lettre dans le mot mélangé
        mot.erase(position, 1); //On retire cette lettre du mot mystère pour ne pas la prendre une deuxième fois
    }

    return melange; //On renvoie le mot mélangé
}

int mystere()
{

    std::string confirmeroui("???");
    std::string confirmernon("???");

    std::string motMystere, motMelange, motUtilisateur;

    std::srand(time(0)); //Initialisation des nombres aléatoires

    std::cout << " Saisissez un mot" << std::endl;   //1 : On demande de saisir un mot
    std::cin >> motMystere;

    motMelange = melangerLettres(motMystere); //2 : On récupère le mot avec les lettres mélangées dans motMelange

    do //3 : On demande à l'utilisateur quel est le mot mystère
    {
        std::cout << std::endl << " Quel est le mot mystere ? " << motMelange << std::endl;
        std::cin >> motUtilisateur;

        if (motUtilisateur == motMystere)
        {
            std::ifstream utilisateur("config/user.txt");
            string userline;
            utilisateur >> userline;
            if (utilisateur)
            {
                std::cout << " Bravo ! " << userline << " vous avez trouver le mot mystere ! " << std::endl;
                std::cout << " Voulez vous relancer le programme mot mystere ? " << std::endl;
                std::cin >> confirmeroui, confirmernon;
            }
        }
        if (confirmeroui == "Oui")
        {
        }
        if (confirmernon == "Non")
        {
            std::cout << " Fin du programme de simulation Skynet . " << std::endl;
            std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
            auto start = std::chrono::high_resolution_clock::now();
            std::this_thread::sleep_for(5000ms);
            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double, std::milli> elapsed = end - start;
            system("exit");
        }
        else
        {
            std::cout << " Fin du programme de simulation Skynet . " << std::endl;
            std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
            auto start = std::chrono::high_resolution_clock::now();
            std::this_thread::sleep_for(5000ms);
            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double, std::milli> elapsed = end - start;
            system("exit");
        }
    }while (motUtilisateur != motMystere);  //On recommence tant qu'il n'a pas trouvé
}