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
    //Tant qu'on n'a pas extrait toutes les lettres du mot
    while (mot.size() != 0)
    {
        //On choisit un numéro de lettre au hasard dans le mot
        position = rand() % mot.size();
        //On ajoute la lettre dans le mot mélangé
        melange += mot[position];
        //On retire cette lettre du mot mystère
        //Pour ne pas la prendre une deuxième fois
        mot.erase(position, 1);
    }
    //On renvoie le mot mélangé
    return melange;
}

int mystere()
{

    std::string confirmeroui("???");
    std::string confirmernon("???");
    std::string motmystereretry("Oui");
    std::string motMystere, motMelange, motUtilisateur;

    if (motmystereretry == "Oui")
    {
    std::srand(time(0)); //Initialisation des nombres aléatoires

    std::cout << " Saisissez un mot" << std::endl;   //1 : On demande de saisir un mot
    std::cin >> motMystere;

    motMelange = melangerLettres(motMystere); //2 : On récupère le mot avec les lettres mélangées dans motMelange
    //3 : On demande à l'utilisateur quel est le mot mystère
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
                if (confirmeroui == "Oui")
                {
                    motmystereretry = "Oui";
                }
                if (confirmernon == "Non")
                {
                    motmystereretry = "Non";
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
                    motmystereretry = "Non";
                    std::cout << " Fin du programme de simulation Skynet . " << std::endl;
                    std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
                    auto start = std::chrono::high_resolution_clock::now();
                    std::this_thread::sleep_for(5000ms);
                    auto end = std::chrono::high_resolution_clock::now();
                    std::chrono::duration<double, std::milli> elapsed = end - start;
                    system("exit");
                }
            }
            else
            {
                std::cout << "Ce n'est pas le bon mot !" << std::endl;
                std::cout << " Voulez vous relancer le programme mot mystere ? " << std::endl;
                std::cin >> confirmeroui, confirmernon;
                if (confirmeroui == "Oui")
                {
                    motmystereretry = "Oui";
                }
                if (confirmernon == "Non")
                {
                    motmystereretry = "Non";
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
                    motmystereretry = "Non";
                    std::cout << " Fin du programme de simulation Skynet . " << std::endl;
                    std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
                    auto start = std::chrono::high_resolution_clock::now();
                    std::this_thread::sleep_for(5000ms);
                    auto end = std::chrono::high_resolution_clock::now();
                    std::chrono::duration<double, std::milli> elapsed = end - start;
                    system("exit");
                }
            }
        }
    }