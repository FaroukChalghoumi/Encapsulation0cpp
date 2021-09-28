
#include "compte.h"
using namespace std ; 

int main ()
{
compte c ; 
compte c1;

c.saisir() ; 
c.consulterSolde();
cout << c.retireAgent(15) ;
c.consulterSolde();
c.deposerArgent(150);
c.consulterSolde();
c1.saisir();
c.transferArgent(c1);
c1.consulterSolde();
c.consulterSolde();

    return 0 ; 
}
