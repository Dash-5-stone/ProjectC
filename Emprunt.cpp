#include "Emprunt.h"
#include "Date.h"


Emprunt::Emprunt(Date dateEmprunt, int isbnLivre, std::string identifiantLecteur):dateEmprunt(dateEmprunt_), isbnLivre(isbnLivre_), identifiantLecteur(identifiantLecteur_){};

Date Emprunt::getDateEmprunt() const{
    return dateEmprunt_;
}
int Emprunt::getIsbnLivre() const{
    return isbnLivre_;
}
std::string Emprunt::getIdentifiantLecteur() const{
    return identifiantLecteur_;
}
Date Emprunt::setDateEmprunt(){

}
std::string Emprunt::setIdentifiantLecteur(std::string identifiantLecteur) {
 identifiantLecteur_=identifiantLecteur;
}
int Emprunt::get

