/*****************************************************************//**
 * \file   Mission.cpp
 * \brief  Définition de la classe Mission
 *
 * \author Pierre
 * \version 0.2
 * \date   June 2023
 *
 * Programme Cpp permettant de créer des objets pour décrire les missions
 *********************************************************************/

#include "mission.h"


using namespace std;

/**
 * \brief Constructeur par défaut
 * \li nbPersonne = 0
 * \li descriptifMission = "inconnu"
 * \li nbHeure = 0
 */
Mission::Mission() {
    this->nbPersonne = 0;
    this->descriptifMission = "inconnu";
    this->nbHeure = 0;
}

/**
 * \brief Constructeur avec paramètres rentrés en argument
 *
 * \param nbPersonne nombre de personnes affectées à la mission
 * \param descriptifMission description textuelle de la mission
 * \param nbHeure nombre d'heures de la mission
 */
Mission::Mission(int nbPersonne, const std::string& descriptif, int nbHeure)
    : nbPersonne(nbPersonne), descriptifMission(descriptif), nbHeure(nbHeure) {
    this->nbPersonne = nbPersonne;
    this->descriptifMission = descriptifMission;
    this->nbHeure = nbHeure;
}

/**
 * \brief Destructeur
 */
Mission::~Mission() {
    cout << "Destruction de la mission : " << this->descriptifMission << endl;
}

/**
 * \brief Constructeur de copie
 *
 * \param m Objet de type Mission
 */
Mission::Mission(const Mission& m) {
    cout << "Copie de Mission" << endl;
    this->nbPersonne = m.nbPersonne;
    this->descriptifMission = m.descriptifMission;
    this->nbHeure = m.nbHeure;
}

/**
 * \brief Opérateur d'affectation
 *
 * \param m Objet de type Mission
 * \return Nouvelle objet de type Mission
 */
Mission& Mission::operator=(const Mission& m) {
    cout << "Affectation de la mission" << std::endl;
    if (this != &m) {
        this->nbPersonne = m.nbPersonne;
        this->descriptifMission = m.descriptifMission;
        this->nbHeure = m.nbHeure;
    }
    return *this;
}

/**
 * \brief Accesseur de nbPersonne
 *
 * \return nombre de personnes
 */
int Mission::getNbPersonne() const {
    return nbPersonne;
}


/**
 * \brief Mutateur de nbPersonne
 *
 * \param nb nouveau nombre de personnes
 */
void Mission::setNbPersonne(int nb) {
    this->nbPersonne = nb;
}

/**
 * \brief Accesseur de descriptifMission
 *
 * \return descriptif de la mission
 */
std::string Mission::getDescriptifMission() const {
    return descriptifMission;
}


/**
 * \brief Mutateur de descriptifMission
 *
 * \param desc nouveau descriptif
 */
void Mission::setDescriptifMission(const std::string& desc) {
    descriptifMission = desc;
}


/**
 * \brief Accesseur de nbHeure
 *
 * \return nombre d'heures
 */
int Mission::getNbHeure() const {
    return nbHeure;
}


/**
 * \brief Mutateur de nbHeure
 *
 * \param heures nouveau nombre d'heures
 */
void Mission::setNbHeure(int heures) {
    this->nbHeure = heures;
}
