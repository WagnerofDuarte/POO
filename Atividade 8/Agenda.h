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

    void addInformações();
    void imprimeAniversarios();
    void imprimeEmail();

};