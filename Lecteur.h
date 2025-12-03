#ifndef LECTEUR_H
#define LECTEUR_H
#include <string>
#include <vector>

class Lecteur{
    private:
std::string identifiant_;
std::string nom_;
std::string prenom_;
std::vector<int> isbnEmprunter_;

    public:
    Lecteur(std::string identifiant_, std::string nom_,std::string prenom_,)
    int setIdentifiant();
    int getIdentifiant();
    std::string getNom();
    std::string getPrenom();
    std::string setNom();
    std::string setPrenom();
    std::string getIsbnEmprunter();
    std::string setIsbnEmprunter();

};

#endif