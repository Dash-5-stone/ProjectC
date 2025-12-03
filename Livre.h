#ifndef LIVRE_H
#define LIVRE_H
#include 'Date.h'
#include <string>
#include <vector>

class Livre {
private:
std::string titre_;
std::string auteur_;
std::string genre_ ;
Date datePublication_;
int isbn_;
std::string langue_;
bool disponibilite_;
std::vector<std::string> identifiantEmprunteur_;


public:
Livre(std::string titre, std::string auteur, std::string langue,Date datePublication, std::string genre, int isbn, bool disponibilite);
Livre();
std::string getTitre();
std::string getAuteur();
std::string getLangue();
std::string getGenre();
std::string setLangue();
std::string setGenre();
std::string setAuteur();
int getIsbn();
int setIsbn();
bool getDisponibilite();
bool setDisponibilite();


};



#endif