#include "compte.h"

void compte :: saisir ()
{
    cout << "Nom compte = ";
    cin >> numCompte ;
    cout << "\n Nom proprietaire = ";
    cin >> nomProprietaire ; 
    cout << "\n Solde = ";
    cin >> solde ; 

}

bool compte :: retireAgent ( float r )
{
    /* solde -= r ; 
    if (solde < 0 )
    */

    if ( solde >= r )
    {
        solde -= r ; 
        return true ; 
    }
    else 
    return false ; 
    
}

void compte :: deposerArgent(float somme  )
 {
     solde +=somme ;
 } 

 void compte :: consulterSolde ()
{
    cout <<"\n Solde =  " << solde ;   
}

void compte :: transferArgent (compte &c)
{
    float somme ; 
    cout <<"\n Solde a transferer =  "  ; 
    cin >> somme ; 
    if (!retireAgent(somme) )
        cout << " Solde isuffisant pour le transfer ";
        else
        {
            solde-=somme;
            c.deposerArgent(somme);
        }
}