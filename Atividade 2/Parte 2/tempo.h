#include <iostream>

class Tempo {
    private:

        int dia;
        int hora;
        int min;
        int seg;

    public:

        // Construtores
        Tempo(int argDia = 0, int argHora = 0, int argMin = 0, int argSeg = 0);                           

        // destrutor
        ~Tempo();
    
        // basic getters\\mo[l  \ ]
        int getDia();
        int getHora();
        int getMin();
        int getSeg();

        // basic setters
        void setDia(int argDia);
        void setHora(int argHora);
        void setMin(int argMin);
        void setSeg(int argSeg)
    
        
        // other methods
        int checarConstancia();
        void somarTempos(Tempo A, Tempo B);
        void incrementarSegundo();
        void decrementarSegundo();
        void print();

        
        
};