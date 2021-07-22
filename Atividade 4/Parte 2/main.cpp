#include "matrix.h"

int main() {

    std::ifstream in("myMatrix.txt");

    Matrix Y;
    Matrix X(3,2);
    Matrix Z(6,6,8.0);
    Matrix A(Z);

    std::cout << "Numero de Linhas: " << A.getRows() << std::endl;
    std::cout << "Numero de Colunas: " << A.getCols() << std::endl;
    std::cout << "Na posicao [4][5] o valor eh: " << A.get(4,5) << std::endl;
    std::cout << "Transformando a matriz A em indentidade temos: " << std::endl;
    A.unit();
    A.print();
    std::cout << "Transformando a matriz X em indentidade temos (nao pode): " << std::endl;
    X.unit();
    A.print();
    std::cout << "Mudando todos os valores da matriz A para 0, temos: " << std::endl;
    A.zeros();
    A.print();
    std::cout << "Mudando todos os valores da matriz A para 1, temos: " << std::endl;
    A.ones();
    A.print();

    
    return 0;
}