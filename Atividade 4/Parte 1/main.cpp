#include <iostream>
#include "Ponto2D.h"
using namespace std;

int main()
{
   
    Ponto2D p1;
    Ponto2D teste(p1);
    Ponto2D teste2 = p1;

    cout << "teste de copia" << endl;

    teste.print();
    teste2.print();

    cout << "teste de copia" << endl;

    p1.print();
    double d1 = p1.distToOrig();  
    
    Ponto2D p2(3.0, 4.0);
    p2.print();
    double d2 = p2.distToOrig();
    
    Ponto2D p3(1.0, 1.0);
    double d_2_3 = p3.distTo(p2);
    
    p1.sumOf(p3);
    p1.print();
    
    Ponto2D *p4 = p2.sumAndCreate(p3);
    p4->print();
    
    delete p4;
    
    return 0;
}
