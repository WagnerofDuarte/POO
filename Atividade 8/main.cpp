#include "Agenda.h"
#include <iostream>

int main() {

	int qtdPessoas;

	std::cin >> qtdPessoas;

	Agenda agenda(qtdPessoas);

	std::cout << "Amigos: " << agenda.

	agenda.addInforma��es();
	agenda.imprimeAniversarios();
	agenda.imprimeEmail();

	return 0;
}