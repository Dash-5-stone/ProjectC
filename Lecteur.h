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
    Lecteur(std::string identifiant, std::string nom,std::string prenom);
    int setIdentifiant();
    int getIdentifiant() const;
    std::string getNom() const;
    std::string getPrenom() const;
    std::string setNom();
    std::string setPrenom();
    std::string getIsbnEmprunter() const;
    std::string setIsbnEmprunter();

};

#endif