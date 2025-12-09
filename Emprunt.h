#ifndef EMPRUNT_H
#define EMPRUNT_H
#include "Date.h"
#include <string>

class Emprunt {
    private:
Date dateEmprunt_;
int isbnLivre_;
std::string identifiantLecteur_;

    public:
Emprunt(Date dateEmprunt, int isbnLivre, std::string identifiantLecteur);
Date getDateEmprunt();
int getIsbnLivre();
int setIsbnLivre();
std::string setIdentifiantLecteur();
std::string getIdentifiantLecteur();
Date setDateEmprunt();
Date getDateRetour();
Date setDateRetour();


};

#endif