#include "tempo.h"
#include <iostream>

//Construtores
Tempo::Tempo(int argDia, int argHora, int argMin, int argSeg){

     dia = argDia;
     hora = argHora;
     min = argMin;
     seg = argSeg;

     checarConstancia();

}

//Destrutores
Tempo::~Tempo() {

}

//seters
void Tempo::setDia(int argDia){
    dia = argDia;
    checarConstancia();
}

void Tempo::setHora(int argHora){
    hora = argHora;
    checarConstancia();
}
void Tempo::setMin(int argMin){
    min = argMin;
    checarConstancia();
}
void Tempo::setSeg(int argSeg){
    seg = argSeg;
    checarConstancia();
}

//getters
int Tempo::getDia(){
    return dia;
}

int Tempo::getHora(){
    return hora;
}

int Tempo::getMin(){
    return min;
}

int Tempo::getSeg(){
    return seg;
}

//outras funcoes
void Tempo::somarTempos(Tempo A, Tempo B){
    Tempo C(A.getDia()+B.getDia(), A.getHora()+B.getHora(), A.getMin()+B.getMin(), A.getSeg()+B.getSeg());

    C.checarConstancia();

    C.print();

}

void Tempo::incrementarSegundo(){
    setSeg(seg + 1);
    checarConstancia();
}

void Tempo::decrementarSegundo(){
    setSeg(seg - 1);
    checarConstancia();
}

void Tempo::print(){

    std::cout << "Dia: " << getDia() << std::endl;
    std::cout << "Hora: " << getHora() << std::endl;
    std::cout << "Min: " << getMin() << std::endl;
    std::cout << "Seg: " << getSeg() << std::endl;
    std::cout << std::endl;
}

int Tempo::checarConstancia(){

    if(dia < 0 || hora < 0 || min < 0 || seg < 0){
        return 1;
    }

    if((hora < 24 || hora == 0) && (min < 60 || min == 0) && (seg < 60 || seg == 0)){

        return 0;

    }



    bool concistenciaHora = false;
    bool concistenciaMin = false;
    bool concistenciaSeg = false;

    while(!concistenciaHora && !concistenciaMin && !concistenciaSeg){
        
        if(seg >= 60){

            int novoSeg;
            int novoMin;

            novoMin = seg/60;
            novoSeg = seg % 60;

            setSeg(novoSeg);
            setMin(getMin() + novoMin);
            
            concistenciaSeg = true;
            
        } else {
            concistenciaSeg = true;
        }
        
        if (min >= 60) {

            int novoMin;
            int novaHora;

            novaHora = min/60;
            novoMin = min % 60;

            setMin(novoMin);
            setHora(getHora() + novaHora);

            concistenciaMin = true;

        } else {
            concistenciaMin = true;
        }
            
        if (hora >= 24){

            int novaHora;
            int novoDia;

            novoDia = hora/24;
            novaHora = hora % 24;

            setHora(novaHora);
            setDia(getDia() + novoDia);
            
            concistenciaHora = true;

        } else {
            concistenciaHora = true;
        }
    }

    return 0;
}