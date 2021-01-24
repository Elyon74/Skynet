// main.cpp : Ce fichier contient la fonction 'main'. L'exécution dun programme commence toujours par main la fonction principale
#include <iostream> // On charge la bibliotheque input outpout stream pour les entre sortie vers la console
#include <string>   // On charge la bibliotheque string pour utiliser les variables strings
#include <cmath>    // On charge la bibliotheque math pour effectuer des calculs complexe
#include <istream>  // On charge la bibliotheque istream pour entrer deux mots entier
#include <fstream>  // On charge la bibliotheque fstream qui permet de creer un flux et ecrire dans un fichier
#include <chrono>   // On charge la bibliotheque chrono qui permet de poser un delai d' attente entre deux ligne de code
#include <thread>   // On charge la bibliotheque thread qui permet de poser un delai d' attente entre deux ligne de code
#include "fonction.cpp" // Pour incluer un fichier on utilise "" et non <>
#include <stdlib.h>
using namespace std;    // Necessaire pour les commandes
using namespace std::chrono_literals;   // Necessaire pour les chronos
int main()
{   // l'interieur d' une fonction commence toujours avec { on doit signalez le retour de la fonction meme vide exemple return=0; avant de refermer la fonction avec }
    std::cout << " Skynet C++17 !" << std::endl;
    std::cout << " La version est 0.01" << std::endl;
    std::cout << " Lancement du programme ... " << std::endl;
    std::cout << " En cas de probleme de connection veuillez supprimez les fichiers du dossier config " << std::endl;

    int age(0);    // Déclaration variable nombre entier integer ici on met 0 car on va demander l' age on pourrait mettre 29 pour 29 ans
    int amis(0);
    int skynetchoice(0);    //Declaration variable de choix   
    int nbenfant(0);

    double piutilisateur(0.0);  // Déclaration variable a double chiffre
    double pi(3.141592653589793);

    bool skynetpass(false);   // Déclaration variable boolean skynetpass (true, false)

    std::string nomutilisateur("???");   // Déclaration variable string
    std::string malefemale("???");
    std::string motdepass("???");
    std::string confirmeroui("Oui");
    std::string confirmernon("Non");

    if (skynetpass == false)
    {
    std::cout << " Nom d' utilisateur : " << std::endl;
    std::getline (std::cin, nomutilisateur);
    std::cout << " Utilisateur : " << nomutilisateur << std::endl;  // On peut ecrire a la suite du fichier des informations sans tout remplacer dans le fichier exemple : ofstream monFlux(nomFichier.c_str(), ios::app);
    std::string const user("config/user.txt");   // On crée une variable string flux nommer userpass et un fichier userpass.txt
    ofstream utilisateur(user.c_str());    // On ouvre le fichier flux mtpass que l' on crée , pour une variable string on ajoute .c_str au lieu de .txt
    if (utilisateur)
    {
        utilisateur << nomutilisateur << std::endl; // On ecrit dans le fichier le nom utilisateur rentrer precedemment pour que l' application le reconnaisse ulterieurement
        std::cout << " Votre nom d' utilisateur a eter sauvegarder dans un fichier. " << std::endl;
    }
    else
    {
        std::cout << "ERREUR : Impossible de sauvegarder le fichier. " << std::endl;
        std::cout << " Fin du programme de simulation Skynet . " << std::endl;
        std::cout << " Fermeture automatique du programme dans 5 secondes. " << std::flush;
        auto start = std::chrono::high_resolution_clock::now(); // Permet de fermer le programme apres 5 secondes
        std::this_thread::sleep_for(5000ms);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> elapsed = end - start;
        exit(0);
    }
    std::cout << " Entrez un mot de pass pour vous connectez ulterieurement :" << std::endl;
    std::cin >> motdepass;
    std::cout << " Mot de pass : " << motdepass << " confirmez par oui ou non . "<< std::endl;
    std::cin >> confirmeroui, confirmernon;
    if (string confirmeroui == Oui)
    {
        string const userpass("config/userpass.txt");
        ofstream mtpass(userpass.c_str());
        if (mtpass)
        {
            mtpass << motdepass << std::endl;
            std::cout << " Votre mot de pass a eter enregistrer dans un fichier . " << std::endl;
            skynetpass = true;
        }
        else
        {
            std::cout << "ERREUR : Impossible de sauvegarder le fichier. " << std::endl;
            std::cout << " Fin du programme de simulation Skynet . " << std::endl;
            std::cout << " Fermeture automatique du programme dans 5 secondes. " << std::flush;
            auto start = std::chrono::high_resolution_clock::now();
            std::this_thread::sleep_for(5000ms);
            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double, std::milli> elapsed = end - start;
            exit(0);
        }
    }
    if (string confirmernon == Non)
    {
        std::cout << "ERREUR : Impossible de confirmez la sauvegarde du fichier. " << std::endl;
        std::cout << " Fin du programme de simulation Skynet . " << std::endl;
        std::cout << " Fermeture automatique du programme dans 5 secondes. " << std::flush;
        auto start = std::chrono::high_resolution_clock::now();
        std::this_thread::sleep_for(5000ms);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> elapsed = end - start;
        exit(0);
    }
    }
    if (skynetpass == true)
    {
        ifstream utilisateur("config/user.txt");
        if (utilisateur)
        {
            string userline;    // Contient le nom dutilisateur enregistrer
            utilisateur >> userline;
            std::cout << " Bienvenue " << userline << " . " << std::endl;
        }
        else
        {
            std::cout << "ERREUR : Impossible de lire le fichier utilisateur. " << std::endl;
            std::cout << " Fin du programme de simulation Skynet . " << std::endl;
            std::cout << " Fermeture automatique du programme dans 5 secondes. " << std::flush;
            auto start = std::chrono::high_resolution_clock::now();
            std::this_thread::sleep_for(5000ms);
            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double, std::milli> elapsed = end - start;
            exit(0);
        }
        std::cout << " Entrez votre mot de pass pour vous connectez : " << std::endl;
        std::cin >> motdepass;
        ifstream mtpass("config/userpass.txt");
        if (mtpass)
        {
        string userline2;   // Contient le mot de pass enregistrer
        mtpass >> userline2;
        if (motdepass = userline2)
        {
            std::cout << " Connection effectuer, que voulez vous faire ? " << std::endl;
            std::cout << " Je veux consultez mon age taper 1 " << std::endl;
            std::cout << " Je veux consultez mon sexe (homme, femme) taper 2 " << std::endl;
            std::cout << " Je veux consultez mon nombre d' amis taper 3 " << std::endl;
            std::cout << " Je veux onsultez mon nombre d' enfants taper 4 " << std::endl;
            std::cin >> skynetchoice;
            switch (skynetchoice)
            {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                break;
            }
        }
        else
        {
            std::cout << "ERREUR : Mot de pass erroner. " << std::endl;
            std::cout << " Fin du programme de simulation Skynet . " << std::endl;
            std::cout << " Fermeture automatique du programme dans 5 secondes. " << std::flush;
            auto start = std::chrono::high_resolution_clock::now();
            std::this_thread::sleep_for(5000ms);
            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double, std::milli> elapsed = end - start;
            exit(0);
        }
        }
    }
    std::cout << nomutilisateur << " , " << " Quel age avez vous ? " << std::endl;
    std::cin >> age;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string const userage("config/userage.txt");
    ofstream userage1(userage.c_str());
    if (userage1)
    {
        userage1 << age << " ans . " << endl;
        std::cout << " Votre age a eter enregistrer dans un fichier . " << std::endl;
    }
    else
    {
        std::cout << "ERREUR : Impossible de sauvegarder le fichier. " << std::endl;
        std::cout << " Fin du programme de simulation Skynet . " << std::endl;
        std::cout << " Fermeture automatique du programme dans 5 secondes. " << std::flush;
        auto start = std::chrono::high_resolution_clock::now();
        std::this_thread::sleep_for(5000ms);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> elapsed = end - start;
        exit(0);
    }
    std::cout << " Vous avez : " << age << " ans ." << std::endl;
    std::cout << " Vous etes un Homme ou une Femme ? " << std::endl;
    std::getline (std::cin, malefemale);
    std::string const genre("config/usergenre.txt");
    ofstream genre1("config/usergenre.txt");
    if (genre1)
    {
        genre1 << malefemale << std::endl;
        std::cout << " Votre sexe a eter sauvegarder dans un fichier. " << std::endl;
    }
    else
    {
        std::cout << "ERREUR : Impossible de sauvegarder le fichier. " << std::endl;
        std::cout << " Fin du programme de simulation Skynet . " << std::endl;
        std::cout << " Fermeture automatique du programme dans 5 secondes. " << std::flush;
        auto start = std::chrono::high_resolution_clock::now();
        std::this_thread::sleep_for(5000ms);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> elapsed = end - start;
        exit(0);
    }
    std::cout << " Je suis un(e) " << malefemale << std::endl;
    std::cout << " Votre nombre d' amis : " << std::endl;
    std::cin >> amis;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string const friends("config/userfriend.txt");
    ofstream friends1("config/userfriend.txt");
    if (friends1)
    {
        friends1 << amis << " amis . " << std::endl;
        std::cout << " Votre nombre d' amis a eter sauvegarder dans un fichier. " << std::endl;
    }
    else
    {
        std::cout << "ERREUR : Impossible de sauvegarder le fichier. " << std::endl;
        std::cout << " Fin du programme de simulation Skynet . " << std::endl;
        std::cout << " Fermeture automatique du programme dans 5 secondes. " << std::flush;
        auto start = std::chrono::high_resolution_clock::now();
        std::this_thread::sleep_for(5000ms);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> elapsed = end - start;
        exit(0);
    }
    std::cout << " Vous avez : " << amis << " amis . " << std::endl;
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
            ofstream children1("config/userfriend.txt");
            if (children1)
            {
                children1 << nbenfant << " enfants . " << std::endl;
                std::cout << " Votre nombre d' enfants a eter sauvegarder dans un fichier. " << std::endl;
            }
            else
            {
                std::cout << "ERREUR : Impossible de sauvegarder le fichier. " << std::endl;
                std::cout << " Fin du programme de simulation Skynet . " << std::endl;
                std::cout << " Fermeture automatique du programme dans 5 secondes. " << std::flush;
                auto start = std::chrono::high_resolution_clock::now();
                std::this_thread::sleep_for(5000ms);
                auto end = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double, std::milli> elapsed = end - start;
                exit(0);
            }
            std::cout << " Je vais maintenant effectuer un test mathematique simple : " << std::endl;
            std::cout << " Quel est la valeur de Pi en mathematique ? " << std::endl;
    std::cin >> piutilisateur;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << " Vous avez declarez que Pi est egal a : " << piutilisateur << std::endl;
    std::cout << " La valeur exacte de Pi est de : " << pi << std::endl;
    std::cout << " La racine carrer de " << pi << " est de : " << std::endl;
    pi = sqrt(pi);
    std::cout << pi << " . " << std::endl;
    std::cout << " Fin du programme de simulation Skynet . " << std::endl;
    std::cout << " Fermeture automatique du programme dans 5 secondes. " << std::flush;
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(5000ms);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    exit(0);
}
// */ est un debut commentaire sur plusieurs lignes a la place de // sur une ligne, fin du commentaire 
// IMPORTANT On n' utilise jamais d' accent dans un programme c+= de type console.
// Pour ecrire un fichier on utilise la command ofstream et pour lire un fichier la commande ifstream, l' ecriture se fais avec un std::cout et la lecture avec std::cin
// Pour manuellement fermer un flux (peu utiliser) on utilise la commande monflux.close();
// std::cout (necessite dincluer la bibliotheque iostream) permet d' afficher un message dans la console exemple : "AfficherUnTexte" ou " " pour faire un espace
// std::cout est une entrée de commande
// std::endl permet de marquer la fin d'une commande
// ; définis la fin d' une ligne de commande
// Exemple: std::cout << "Bonjour tout le monde !" << std::endl << "Comment allez-vous ?" << std::endl;
// std::cin permet de rentrer une information exemple std::cout << " Votre age ? " << std::cin >> referenceage;
// std::cin.ignore ignore le precedent cin
// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n') vide le buffer (avancer)
// Le signe << est un chevron entre deux action
// [] permet de declarer une variable tableau exemple : int const nombrenotes(6) doublenotes[nombreNotes]; 
// && correspond a  ET .    || correspond a OU .   ! correspond a NON . le terme else correspond a sinon
// Le terme if permet de poser une condition exemple if (resultat >= 5) { std::cout << " la valeur est superieur ou égale a 5 " << std::end; }
// Combiner des conditions exemple: if (enfant && nbEnfants >= 1) se traduit par si enfant = true et nombre enfant superieur ou egal a 1
// Le terme while(conditions) { contenue } permet de redemander la condition tant que la condition dans les () n' est pas egale a ce qui est entrer dans la console
// Le terme do while est similaire sauf que le contenue avant while est lu au moins une fois . exemple : do { std::cout << "Combien d'enfants avez-vous ?" << endl; 
// std::cin >> nbEnfants; } puis on execute while (nbEnfants < 0); (voir terme while)
// Le terme for permet de condenser une initialisation ( ex compteur = 0 ) une condition ( ex compteur < 10 ) une interprétation (++compteur)
// Exemple : for (age = 0 ; age < 10 ; ++age) { contenue dans la condition si respecter ;} Ici on affiche la variable age de 0 a 9 et ajoutant +1 a chaque ligne
// A noter : On peut declarer une nouvelle variable existante seulement pendant l' utilisation du for exemple : for ( int age (0) ; age <10; ++age)
// Case : permet de poser une condition exemple : case 1: { contenue } case 2: etc
// le terme switch() permet un choix de conditions
// le terme break; permet un arret du test il doit etre attribuer a chaque fin de chaque code case:
// Le terme default: correspond a la condition par defaut si ni true ni false n' est accompli toujours terminer par un break;
// Egalement possible exemple : int a(4), b(5); ensuite on demande a ce que a = b; Affectation de la valeur de 'b' à 'a' donc a devient 5
// Addition de valeur : int a(5), b(8), resultat(0);
// resultat = a + b; la valeur de sortie est le resultat de a + b elle remplace la valeur resultat de base de 0 utilisable en multiplication division etc !
// Incrementation : int nombreJoueur = nombreJoueur + 1. decrementation : nombreJoueur = nombreJoueur - 1
// Incrementation methode 2 : ++nombreJoueur; decrementation : --nombreJoueur;
// Division : nombre = nombre / 3; division methode 2 : nombre = nombre /= 3;
// Il existe des raccourcis pour les 5 opérations de base, c'est-à-dire +=, -=, *=, /= et %=
// Le terme	sqrt() permet deffectuer une racine carrer pour un nombre a virgule exemple 5.16 on ajoute double devant la variable a double chiffre
// On retrouve d' autre terme : Sinus : sin() Cosinus : cos() tangante : tan() arrondit vers le haut : ceil() arrondit vers le bas : floor() fonctionpuissance : pow();