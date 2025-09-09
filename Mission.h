/*****************************************************************//**
 * \file   Mission.h
 * \brief  D�claration de la classe Mission
 *
 * \author Pierre
 * \date   June 2023
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H

#include <iostream>
#include <string>

 /*!
  * \class Mission
  * \brief Classe repr�sentant une mission (nombre de personnes, descriptif, dur�e en heures)
  *
  * Cette classe a une finalit� p�dagogique :
  * \li : Rappel du C++
  * \li : Commentaire avec Doxygen
  * \li : Git, GitHub
  */
class Mission
{
private:
    int nbPersonne;                ///< Nombre de personnes affect�es � la mission
    std::string descriptifMission; ///< Description textuelle de la mission
    int nbHeure;                   ///< Dur�e en heures de la mission

public:
    /* Forme canonique */
    Mission();                                                        // Constructeur par d�faut
    Mission(int nbPersonne, const std::string& descriptif, int nbHeure); // Constructeur avec param�tres
    Mission(const Mission& m);                                        // Constructeur de copie
    Mission& operator=(const Mission& m);                             // Op�rateur d�affectation
    ~Mission();                                                       // Destructeur

    /* Accesseurs / Mutateurs */
    int getNbPersonne() const;
    void setNbPersonne(int nb);

    std::string getDescriptifMission() const;
    void setDescriptifMission(const std::string& desc);

    int getNbHeure() const;
    void setNbHeure(int heures);
};

#endif // MISSION_H
