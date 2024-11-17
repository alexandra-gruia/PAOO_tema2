#include <iostream>
#include "tema2PAOO.h"
using namespace std;

int main()
{
    tema2PAOO obiect1(10, "Obiect1");
    obiect1.print(); 

    tema2PAOO obiect2 = obiect1; 
    obiect2.print();

    tema2PAOO obiect3(20, "Obiect3");
    obiect3 = obiect1;  
    obiect3.print();
    
    // Constructorul default este sters si va rezulta in eroare
     //tema2PAOO obiect4;    
    
    // Constructorul de copiere este sters si va rezulta in eroare
    // tema2PAOO obiect5 = obiect2; 

  return 0;
}
