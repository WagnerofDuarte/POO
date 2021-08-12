#include <string>
#include "Pessoa.h"
#include <vector>

class Agenda {

private:

    vector<Pessoa> pessoas;
    int qtdAmigos;
    int qtdConhecidos;

public:

    Agenda(int qtdPessoas);

    void addInforma��es();
    void imprimeAniversarios();
    void imprimeEmail();

};