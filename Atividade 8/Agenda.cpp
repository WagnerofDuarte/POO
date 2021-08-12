#include "Agenda.h"
#include <iostream>

Agenda::Agenda(int qtdPessoas) {

}

Agenda::addInformações() {

	for (int i = 0; i < this.pessoas.size(); i++) {

		pessoas[i].setNome("Teste");
		pessoas[i].setIdade(10);

		if (/*pessoas for amigo*/) {
			pessoas[i].setDataDeAniversario("Teste");
		}
		else if (/*pessoas for conhecido*/) {
			pessoas[i].setEmail("Email");
		}
	}
}

Agenda::imprimeAniversarios() {

	for (int i = 0; i < this.pessoas.size(); i++) {

		if (/*pessoas for amigo*/) {

			std::cout << "Aniversario" << std::endl;

			pessoas[i]
		}

	}

}
Agenda::imprimeEmail() {

	for (int i = 0; i < this.pessoas.size(); i++) {

		if (/*pessoas for Conhecido*/) {

			std::cout << "Email" << std::endl;

			pessoas[i]
		}

	}

}