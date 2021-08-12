#include <string>

class Pessoa {

    private:

    string nome;
    int idade;
        
    public:

        Pessoa();
        Pessoa(string nome, int idade);

        string getNome();
        int getIdade();

        void setNome(string nome);
        void setIdade(int idade);
   
        ~Pessoa();

};
