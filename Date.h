#ifndef DATE_H
#define DATE_H

class Date {
    private:
int jour_;
int mois_;
int annee_;

    public:
Date(int jour, int mois, int annee);
int getJour() const;
int setJour();
int getMois() const ;
int setMois() ;
int getAnnee() const;
int setAnnee();

};

#endif