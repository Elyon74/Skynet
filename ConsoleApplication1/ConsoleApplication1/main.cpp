// main.cpp : Ce fichier contient la fonction 'main'. L'exécution dun programme commence toujours par main la fonction principale
#include <iostream> // On charge la bibliotheque input outpout stream puis les autres (exemple qt)
#include <string>   // On charge la bibliotheque string pour utiliser les variables strings
#include <cmath>    // On charge la bibliotheque math pour effectuer des calculs complexe
#include <istream>  // On charge la bibliotheque istream pour entrer deux mots entier
#include <fstream>  // On charge la bibliotheque fstream qui permet de creer un flux et ecrire dans un fichier
#include <ctime> // Obligatoire pour obtenir les fonctions de mot aleatoire exemple : osej pour trouver jose
#include <cstdlib>
// Pour ecrire un fichier on utilise la command ofstream et pour lire un fichier la commande ifstream fichier lecriture se fais un std::cout et la lecture avec std::cin
// #include "fonction.cpp" // Pour incluer un fichier on utilise "" et non <>
using namespace std;
int main()
{   // l'interieur dune fonction commence toujours avec { on doit signalez le retour de la fonction meme vide exemple return=0; avant de refermer la fonction avec } .  
    std::cout << " Skynet C++17 !" << std::endl;
    std::cout << " La version est 0.01" << std::endl;
    std::cout << " Lancement du programme ... " << std::endl;

    int age(0);    // Déclaration variable nombre entier integer ici on met 0 car on va demander l' age on pourrait mettre 29 pour 29 ans
    int amis(0);
    int resultat(0);
    int nbenfant(0);

    double piutilisateur(0.0);    // Déclaration variable a double chiffre

    bool skynet(false);   // Déclaration variable booléan estmonami est telle Vrai ou Fausse ? (true, false)

    char trigger('A');   // Déclaration variable de lettre a ne pas oublier le signe '
    int& referenceage(age); // int& maVariable(ageUtilisateur) ici on déclare une référence nommer mavariable qui est accrocher a age utilisateur valable en string&, bool& etc

    std::string nomutilisateur("???");   // Déclaration variable std::string ne pas oublier les guillemets
    std::string malefemale("???");
    std::string motdepass("???");
    std::string confirmeroui("Oui");
    std::string confirmernon("Non");

    // */ debut commentaire sur plusieur ligne a la place de // sur une ligne, fin du commentaire */
    // std::cout (necessite dincluer iostream) permet d' afficher un message dans la console "AfficherUnTexte" ou " " pour faire un espace
    // std::cout est aussi une entrée de commande
    // std::endl permet de marquer la fin d'une commande et éventuellement un retour à la ligne
    // Exemple: std::cout << "Bonjour tout le monde !" << std::endl << "Comment allez-vous ?" << std::endl;
    // ; définis la fin d' une ligne de commande
    // Le signe << est jonction entre deux action
    // cin permet de rentrer une information exemple std::cout << " Votre age ? " << cin >> referenceage;
    // [] permet de declarer une variable tableau exemple : int const nombrenotes(6) doublenotes[nombreNotes]; 
    if (skynet == false)
    {
    std::cout << " Nom d' utilisateur : " << std::endl;
    std::getline (std::cin, nomutilisateur);
    std::cout << " Utilisateur : " << nomutilisateur << std::endl;
    std::cout << " Entrez un mot de pass pour vous connectez ulterieurement :" << std::endl;
    std::cin >> motdepass;
    std::cout << " Votre mot de pass est : " << motdepass << " confirmez par oui ou non . "<< std::endl;
    std::cin >> confirmeroui, confirmernon;
    if (confirmeroui == Oui)
    {
        std::cout << " Mot de pass enregistrer pour une connection ulterieure avec votre nom d' utilisateur ." << std::endl;
            skynet = true;
    }
    if (confirmeroui == Non)
    {
        std::cout << " Arret du programme." << std::endl;
    }
    }
    if (skynet == true)
    {
        std::cout << " Bienvenue " << nomutilisateur << " . " << std::endl;
        std::cout << " Entrez votre mot de pass pour vous connectez : " << std::endl;

    std::cout << nomutilisateur << " , " << " Quel age avez vous ? " << std::endl;
    std::cin >> referenceage;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');     // std::cin.ignore ignore le precedent cin
    std::cout << " Vous avez : " << referenceage << " ans ." << std::endl;  // (std::numeric_limits<std::streamsize>::max(), '\n') vide le buffer (avancer)
    std::cout << " Vous etes un Homme ou une Femme ? " << std::endl;
    std::getline (std::cin, malefemale);
    std::cout << " Je suis un(e) " << malefemale << std::endl;
    std::cout << " Votre nombre d' amis : " << std::endl;
    std::cin >> amis;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << " Vous avez : " << amis << " amis ." << std::endl;
    std::cout << " Avez vous des enfants ? Si oui combien ? " << std::endl;
    std::cin >> nbenfant;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    // && correspond a  ET .    || correspond a OU .   ! correspond a NON . le terme else correspond a sinon .
    // Combiner des conditions exemple: if (enfant && nbEnfants >= 1) se traduit par si enfant = true et nombre enfant superieur ou egal a 1
    // Le terme while(conditions) { contenue } permet de redemander la condition tant que la condition dans les () n' est pas egale a ce qui est entrer dans la console
    // Le terme do while est similaire sauf que le contenue avant while est lu au moins une fois . exemple : do { std::cout << "Combien d'enfants avez-vous ?" << endl; 
    // std::cin >> nbEnfants; } puis on execute while (nbEnfants < 0); (voir terme while)
    // Le terme for permet de condenser une initialisation ( ex compteur = 0 ) une condition ( ex compteur < 10 ) une interprétation (++compteur) rappel ++ = ajouter 1
    // Exemple : for (age = 0 ; age < 10 ; ++age) { contenue dans la condition si respecter ;} Ici on affiche la variable age de 0 a 9 et ajoutant +1 a chaque ligne.
    // A noter : On peut declarer une variable existante seulement pendant le for exemple : for ( int age (0) ; age <10; ++age)
    // Case : permet de poser une condition
    // le terme switch() permet un choix de conditions
    // le terme break; permet un arret du test il doit etre attribuer a chaque fin de code case:
    // Le terme default: correspond a la condition par defaut si ni true ni false n' est accompli terminer par un break;
            if (nbenfant >= 1)
            {
                std::cout << " Vous avez " << nbenfant << " enfants . " << std::endl;
            }
            if (nbenfant <= 0)
            {
                std::cout << " Vous n' avez pas d' enfants . " << std::endl;
            }
    std::cout << " Quel est la valeur de Pi en mathematique ? " << std::endl;
    std::cin >> piutilisateur;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << " Vous avez declarez que Pi est egal a : " << piutilisateur << std::endl;
    piutilisateur = 3.14;   
    // Egalement possible exemple : int a(4), b(5); Déclaration de deux variables a = b; Affectation de la valeur de 'b' à 'a' donc a devient 5
    // Addition de valeur : int a(5), b(8), resultat(0);
    // Resultat = a + b; la valeur de sortie est la resultat de a + b elle remplace la valeur resultat de base de 0 utilisable en multiplication division etc !
    // Incrementation : int nombreJoueur = nombreJoueur + 1. decrementation : nombreJoueur = nombreJoueur - 1
    // Incrementation methode 2 : ++nombreJoueur; decrementation : --nombreJoueur;
    // Division : nombre = nombre / 3; division methode 2 : nombre = nombre /= 3;
    // Il existe des raccourcis pour les 5 opérations de base, c'est-à-dire +=, -=, *=, /= et %=
    // Le terme	sqrt() par exemple permet deffectuer une racine carrer pour un nombre a virgule exemple 5.16 on ajoute double devant la variable a double chiffre
    // On retrouve d' autre terme : Sinus : sin() Cosinus : cos() tangante : tan() arrondit vers le haut : ceil() arrondit vers le bas : floor() fonctionpuissance : pow();
    std::cout << " La valeur exacte de Pi est de : " << piutilisateur << std::endl;
    std::cout << " La valeur de votre age additionner a votre nombre d' ami est de : " << std::endl;
    resultat = amis + age;
    std::cout << resultat << " . " << std::endl;
    std::cout << " La racine carrer de " << resultat << " est de : " << std::endl;
    resultat = sqrt(resultat);
    std::cout << resultat << std::endl;
    if (resultat >= 10) // Le terme if permet de poser une condition exemple if (resultat >= 5) { std::cout << " Bravo la valeur est superieur ou égale a 5 " << std::end; }
    {
        std::cout << " La solution finale est superieur ou egale a 10 . " << std::endl;
    }
    else // Le terme else permet de dire sinon je fais sa :
    {
        std::cout << " La solution finale est inferieur a 10 . " << std::endl;
    }
    // std::cout << " La position actuelle de la boolean Skynet est : " << skynet << std::endl;
    // std::cout << " La valeur actuelle de la variable Trigger est : " << trigger << std::endl;
    std::cout << " Fin du programme Skynet." << std::endl;
    return 0;
}