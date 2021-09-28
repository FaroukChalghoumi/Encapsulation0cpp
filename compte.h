#ifndef HEADER_H_INCLUDED
#include <string>
#include<iostream>
using namespace std ; 
class compte
{
public:
    int numCompte ; 
    string nomProprietaire ; 
    float solde ; 

    void saisir(); 
    bool retireAgent(float r);
    void deposerArgent(float somme ); 
    void consulterSolde (); 
    void transferArgent (compte &c ); 
 
};

#endif