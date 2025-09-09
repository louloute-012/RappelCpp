// StageDescription.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Entreprise.h"
#include "Mission.h"

int main() {
    
    Entreprise monEntreprise;
    monEntreprise.setEntreprise("Flypc");
    monEntreprise.setVilleEntreprise("Saclas");

    Mission maMission;
    maMission.setNbPersonne(3);
    maMission.setDescriptifMission("Installation et codage d'un site");
    maMission.setNbHeure(12);

    std::cout << "=== Informations sur l'entreprise ===" << std::endl;
    std::cout << "Nom : " << monEntreprise.getNomEntreprise() << std::endl;
    std::cout << "Ville : " << monEntreprise.getVilleEntreprise() << std::endl;

    std::cout << "\n=== Informations sur la mission ===" << std::endl;
    std::cout << "Descriptif : " << maMission.getDescriptifMission() << std::endl;
    std::cout << "Nombre de personnes : " << maMission.getNbPersonne() << std::endl;
    std::cout << "Durée en heures : " << maMission.getNbHeure() << std::endl;

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
