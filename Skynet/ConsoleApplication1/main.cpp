#include <iostream>
#include <string>
#include <cmath>
#include <istream>
#include <fstream>
#include <chrono>
#include <thread>
#include "stdlib.h"
// BUG DE MAUVAIS ENREGISTREMENT DES VARIABLE AGE ETC SI UN ENTIER EST INSCRIT
using namespace std::chrono_literals;
int main()
{
    std::cout << " Skynet C++17 ! " << std::endl;
    std::cout << " La version est 1.13 " << std::endl;
    std::cout << " Lancement du programme ... " << std::endl;
    std::cout << " En cas de probleme de connection veuillez supprimez les fichiers du dossier config . " << std::endl;

    int age(0);
    int amis(0);
    int skynetchoice(0);  
    int nbenfant(0);

    double piutilisateur(0.0);
    double pi(3.141592653589793);

    std::string nomutilisateur("Inconnue");
    std::string malefemale("???");
    std::string motdepass("???");
    std::string confirmeroui("???");
    std::string confirmernon("???");
    std::string skynett("false");
    std::string skynettuser("false");
    std::string skynettpass("false");
    std::string skynettpasslock("false");
    std::string skynettlist("false");
    std::string skynettchoice("false");

    if (skynett == "false")
    {
        std::ifstream skynet1("config/sky.txt");
        std::string skynett1;
        skynet1 >> skynett1;
        if (skynett1 == "true")
        {
            std::ifstream utilisateur("config/user.txt");
            if (utilisateur)
            {
                std::string userline;
                utilisateur >> userline;
                std::cout << " Bienvenue " << userline << " . " << std::endl;
                skynettuser = "true";
            }
            else
            {
                std::cout << " ERREUR : Impossible de lire le fichier utilisateur . " << std::endl;
                std::cout << " Fin du programme de simulation Skynet . " << std::endl;
                std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
                auto start = std::chrono::high_resolution_clock::now();
                std::this_thread::sleep_for(5000ms);
                auto end = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double, std::milli> elapsed = end - start;
                system("exit");
            }
            std::ifstream mtpass("config/userpass.txt");
            if (mtpass)
            {
                std::cout << " Entrez votre mot de pass pour vous connectez : " << std::endl;
                std::cin >> motdepass;
                std::string userline2;
                mtpass >> userline2;
                if (motdepass == userline2)
                {
                    skynettpass = "true";
                    skynettchoice = "true";
                    if (skynettchoice == "true")
                    {
                        while (skynettchoice == "true")
                        {
                            std::cout << " Connection effectuer, que voulez vous faire ? " << std::endl;
                            std::cout << " Je veux consultez mon age taper 1 " << std::endl;
                            std::cout << " Je veux consultez mon sexe (homme, femme) taper 2 " << std::endl;
                            std::cout << " Je veux consultez mon nombre d' amis taper 3 " << std::endl;
                            std::cout << " Je veux consultez mon nombre d' enfants taper 4 " << std::endl;
                            std::cout << " Lancer le programme jeux de mot mystere taper 5 " << std::endl;
                            std::cout << " Lancer le test de mathematique du programme Skynet taper 6" << std::endl;
                            std::cout << " Quitter le programme de simulation Skynet taper 7" << std::endl;
                            std::cin >> skynetchoice;
                            switch (skynetchoice)
                            {
                            case 1:
                            {
                                std::ifstream userage1("config/userage.txt");
                                if (userage1)
                                {
                                    std::string userage2;
                                    userage1 >> userage2;
                                    std::cout << " Vous avez " << userage2 << " ans . " << std::endl;
                                }
                                break;
                            }
                            case 2:
                            {
                                std::ifstream genre1("config/usergenre.txt");
                                if (genre1)
                                {
                                    std::string genre2;
                                    genre1 >> genre2;
                                    std::cout << " Vous etes un(e) " << genre2 << " ." << std::endl;
                                }
                                break;
                            }
                            case 3:
                            {
                                std::ifstream friends1("config/userfriend.txt");
                                if (friends1)
                                {
                                    std::string friends2;
                                    friends1 >> friends2;
                                    std::cout << " Vous avez " << friends2 << " amis . " << std::endl;
                                }
                                break;
                            }
                            case 4:
                            {
                            std::ifstream children1("config/userchildren.txt");
                            if (children1)
                            {
                                std::string children2;
                                children1 >> children2;
                                std::cout << " Vous avez " << children2 << " enfants " << std::endl;
                            }
                            break;
                            }
                            case 5:
                            {
                                std::cout << " Lancement du jeux de mot mystere . " << std::endl;
                                std::cout << " ERREUR Programme non coder . " << std::endl;
                                int mystere();  // BUG NE CHARGE PAS LA FONCTION INCLUSE DANS MYSTERE.CPP
                                break;
                            }
                            case 6:
                            {
                                std::cout << " Je vais maintenant effectuer un test mathematique simple : " << std::endl;
                                std::cout << " Quel est la valeur de Pi en mathematique ? " << std::endl;
                                std::cin >> piutilisateur;
                                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                std::cout << " Vous avez declarez que Pi est egal a : " << piutilisateur << std::endl;
                                std::cout << " La valeur exacte de Pi est de : " << pi << std::endl;
                                std::cout << " La racine carrer de " << pi << " est de : " << std::endl;
                                pi = sqrt(pi);
                                std::cout << pi << " . " << std::endl;
                                break;
                            }
                            case 7:
                            {
                                std::cout << " Fin du programme de simulation Skynet . " << std::endl;
                                std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
                                auto start = std::chrono::high_resolution_clock::now();
                                std::this_thread::sleep_for(5000ms);
                                auto end = std::chrono::high_resolution_clock::now();
                                std::chrono::duration<double, std::milli> elapsed = end - start;
                                system("exit");
                                break; // BUG RELANCE LE MENU CONSOLE AU LIEU DE QUITTER
                            }
                            default:
                            {
                                std::cout << " ERREUR : Aucun choix definie par l' utilisateur . " << std::endl;
                                std::cout << " Fin du programme de simulation Skynet . " << std::endl;
                                std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
                                auto start = std::chrono::high_resolution_clock::now();
                                std::this_thread::sleep_for(5000ms);
                                auto end = std::chrono::high_resolution_clock::now();
                                std::chrono::duration<double, std::milli> elapsed = end - start;
                                system("exit");
                                break;
                            }
                            }
                        }
                    }
                }
                else
                {
                std::cout << " ERREUR : Mot de pass erroner . " << std::endl;
                std::cout << " Fin du programme de simulation Skynet . " << std::endl;
                std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
                skynettpasslock = "true";
                auto start = std::chrono::high_resolution_clock::now();
                std::this_thread::sleep_for(5000ms);
                auto end = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double, std::milli> elapsed = end - start;
                system("exit");
                }
}
}
if (skynettuser == "false")
{
    std::cout << " Nom d' utilisateur : " << std::endl;
    std::getline(std::cin, nomutilisateur);
    std::ofstream utilisateur("config/user.txt");
    if (utilisateur)
    {
        utilisateur << nomutilisateur << std::endl;
        std::cout << " Votre nom d' utilisateur a eter sauvegarder dans un fichier . " << std::endl;
        utilisateur.seekp(0, std::ios::end);
        int usertaille;
        usertaille = utilisateur.tellp();
        std::cout << " Taille du fichier : " << usertaille << " octets ." << std::endl;
    }
    else
    {
        std::cout << " ERREUR : Impossible de sauvegarder le fichier. " << std::endl;
        std::cout << " Fin du programme de simulation Skynet . " << std::endl;
        std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
        auto start = std::chrono::high_resolution_clock::now();
        std::this_thread::sleep_for(5000ms);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> elapsed = end - start;
        system("exit");
    }
}
if (skynettpass == "false")
{
    if (skynettpasslock == "false")
                    {
        std::cout << " Entrez un mot de pass pour vous connectez ulterieurement : " << std::endl;
        std::cin >> motdepass;
        std::cout << " Mot de pass : " << motdepass << " confirmez par oui ou non . " << std::endl;
        std::cin >> confirmeroui, confirmernon;
        if (confirmeroui == "Oui")
        {
            std::string const userpass("config/userpass.txt");
            std::ofstream mtpass(userpass.c_str());
            if (mtpass)
            {
                mtpass << motdepass << std::endl;
                std::cout << " Votre mot de pass a eter enregistrer dans un fichier . " << std::endl;
                mtpass.seekp(0, std::ios::end);
                int passtaille;
                passtaille = mtpass.tellp();
                std::cout << " Taille du fichier : " << passtaille << " octets ." << std::endl;
                skynettlist = "true";
            }
            else
            {
                std::cout << " ERREUR : Impossible de sauvegarder le fichier . " << std::endl;
                std::cout << " Fin du programme de simulation Skynet . " << std::endl;
                std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
                auto start = std::chrono::high_resolution_clock::now();
                std::this_thread::sleep_for(5000ms);
                auto end = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double, std::milli> elapsed = end - start;
                system("exit");
            }
        }
        if (confirmernon == "Non")
        {
            std::cout << " ERREUR : Impossible de confirmez la sauvegarde du fichier. " << std::endl;
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
if (skynettlist == "true")
{
                    std::cout << nomutilisateur << " , " << " Quel age avez vous ? " << std::endl;
                    std::cin >> age;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::string const userage("config/userage.txt");
                    std::ofstream userage1(userage.c_str());
                    if (userage1)
                    {
                        userage1 << age << " ans . " << std::endl;
                        std::cout << " Vous avez : " << age << " ans ." << std::endl;
                        std::cout << " Votre age a eter enregistrer dans un fichier . " << std::endl;
                        userage1.seekp(0, std::ios::end);
                        int agetaille;
                        agetaille = userage1.tellp();
                        std::cout << " Taille du fichier : " << agetaille << " octets ." << std::endl;
                    }
                    else
                    {
                        std::cout << " ERREUR : Impossible de sauvegarder le fichier . " << std::endl;
                        std::cout << " Fin du programme de simulation Skynet . " << std::endl;
                        std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
                        auto start = std::chrono::high_resolution_clock::now();
                        std::this_thread::sleep_for(5000ms);
                        auto end = std::chrono::high_resolution_clock::now();
                        std::chrono::duration<double, std::milli> elapsed = end - start;
                        system("exit");
                    }
                    std::cout << " Vous etes un Homme ou une Femme ? " << std::endl;
                    std::getline(std::cin, malefemale);
                    std::string const genre("config/usergenre.txt");
                    std::ofstream genre1("config/usergenre.txt");
                    if (genre1)
                    {
                        genre1 << malefemale << std::endl;
                        std::cout << " Je suis un(e) " << malefemale << std::endl;
                        std::cout << " Votre sexe a eter sauvegarder dans un fichier . " << std::endl;
                        genre1.seekp(0, std::ios::end);
                        int genretaille;
                        genretaille = genre1.tellp();
                        std::cout << " Taille du fichier : " << genretaille << " octets." << std::endl;
                    }
                    else
                    {
                        std::cout << " ERREUR : Impossible de sauvegarder le fichier . " << std::endl;
                        std::cout << " Fin du programme de simulation Skynet . " << std::endl;
                        std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
                        auto start = std::chrono::high_resolution_clock::now();
                        std::this_thread::sleep_for(5000ms);
                        auto end = std::chrono::high_resolution_clock::now();
                        std::chrono::duration<double, std::milli> elapsed = end - start;
                        system("exit");
                    }
                    std::cout << " Quel est votre nombre d' amis : " << std::endl;
                    std::cin >> amis;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::string const friends("config/userfriend.txt");
                    std::ofstream friends1("config/userfriend.txt");
                    if (friends1)
                    {
                        friends1 << amis << " amis . " << std::endl;
                        std::cout << " Vous avez : " << amis << " amis . " << std::endl;
                        std::cout << " Votre nombre d' amis a eter sauvegarder dans un fichier . " << std::endl;
                        friends1.seekp(0, std::ios::end);
                        int friendstaille;
                        friendstaille = friends1.tellp();
                        std::cout << " Taille du fichier : " << friendstaille << " octets ." << std::endl;
                    }
                    else
                    {
                        std::cout << " ERREUR : Impossible de sauvegarder le fichier . " << std::endl;
                        std::cout << " Fin du programme de simulation Skynet . " << std::endl;
                        std::cout << " Fermeture automatique du programme dans 5 secondes . " << std::flush;
                        auto start = std::chrono::high_resolution_clock::now();
                        std::this_thread::sleep_for(5000ms);
                        auto end = std::chrono::high_resolution_clock::now();
                        std::chrono::duration<double, std::milli> elapsed = end - start;
                        system("exit");
                    }
                    std::cout << " Avez vous des enfants ? Si oui combien ? " << std::endl;
                    std::cin >> nbenfant;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    if (nbenfant >= 1)
                    {
                        std::cout << " Vous avez " << nbenfant << " enfants . " << std::endl;
                    }
                    if (nbenfant <= 0)
                    {
                        std::cout << " Vous n' avez pas d' enfants . " << std::endl;
                    }
                    std::string const children("config/userchildren.txt");
                    std::ofstream children1("config/userchildren.txt");
                    if (children1)
                    {
                        children1 << nbenfant << " enfants . " << std::endl;
                        std::cout << " Votre nombre d' enfants a eter sauvegarder dans un fichier . " << std::endl;
                        children1.seekp(0, std::ios::end);
                        int childrentaille;
                        childrentaille = children1.tellp();
                        std::cout << " Taille du fichier : " << childrentaille << " octets ." << std::endl;
                        skynett = "true";
                        std::string const sky("config/sky.txt");
                        std::ofstream skynet1(sky.c_str());
                        if (skynet1)
                        {
                            skynet1 << skynett << std::endl;
                        }
                        std::cout << " A partir de maintenant vous pouvez relancez le programme pour vous connecter " << std::endl;
                        std::cout << " avec le nom d' utilisateur et le mot de pass que vous avez enregistrer . " << std::endl;
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
                        std::cout << " ERREUR : Impossible de sauvegarder le fichier . " << std::endl;
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