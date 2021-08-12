#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade){

    this.nome = nome;
    this.idade = idade;
}

Pessoa::Pessoa(){

    this.nome = "Indefinido";
    this.idade = 0;

}

Pessoa:: getNome(){
    return this.nome;
}
Pessoa::getIdade(){
    return this.idade;
}
Pessoa::setNome(string nome){
    this.nome = nome;
}
Pessoa::setIdade(int idade){
    this.idade = idade;
}