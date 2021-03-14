#include <iostream> 
#include <string>
#include <cmath>    
#include <istream> 
#include <fstream>  
#include <chrono>
#include <thread>
#include <ctime>    
#include <cstdlib>
#include "Header.h"
// A DEBUGUER RECODER UNE FOIS LA FONCTION CHARGER
std::string melangerLettres(string mot)
{
   std::string melange;
   int position(0);
    while (mot.size() != 0)
    {
        position = rand() % mot.size();
        melange += mot[position];
        mot.erase(position, 1);
    }
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
        std::srand(time(0));

        std::cout << " Saisissez un mot" << std::endl;
        std::cin >> motMystere;

        motMelange = melangerLettres(motMystere);
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
    return 0;
}