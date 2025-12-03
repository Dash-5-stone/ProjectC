#ifndef EMPRUNT_H
#define EMPRUNT_H
#include <string>

class Emprunt {
    private:
Date dateEmprunt_;
int getIsbnLivre_;
std::string identifiantLecteur_;

    public:
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