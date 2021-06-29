#include "tempo.h"

int main(){

    Tempo A;//Sem parametros
    Tempo B(10);//Somente dia
    Tempo C(10, 12);//Dia e hora
    Tempo D(10, 12, 30);//Dia, hora e min
    Tempo E(10, 12, 30, 30); //Dia, hora, min e seg
    Tempo F(10, 12, 30, 65); //Dia, hora, min e seg (Seg Errado)
    Tempo G(10, 12, 70, 65); //Dia, hora, min e seg (Seg e Min Errado)
    Tempo H(10, 27, 70, 65); //Dia, hora, min e seg (Seg e Min e Hora Errado)
    Tempo I(10, 12, 320, 30); //Dia, hora, min e seg (Min Errado)
    Tempo J(10, 12, 3, 59); //Teste de incremento
    Tempo K(10, 12, 3, 30); //Teste de decremento

    J.incrementarSegundo();
    K.decrementarSegundo();


    A.print();
    B.print();
    C.print();
    D.print();
    E.print();
    F.print();
    G.print();
    H.print();
    I.print();
    J.print();
    K.print();
    A.somarTempos(F, G);

}