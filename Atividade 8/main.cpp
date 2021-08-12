#include "Agenda.h"
#include <iostream>

int main() {

	int qtdPessoas;

	std::cin >> qtdPessoas;

	Agenda agenda(qtdPessoas);

	std::cout << "Amigos: " << agenda.

	agenda.addInformações();
	agenda.imprimeAniversarios();
	agenda.imprimeEmail();

	return 0;
}