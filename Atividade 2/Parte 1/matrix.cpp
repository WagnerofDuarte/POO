#include "matrix.h"
#include <iostream>

// contrutor default - cria uma matriz vazia com nRows = nCols = 0  
Matrix::Matrix(){
     nRows = 0;
     nCols = 0;
}
    

// contrutor parametrico 1 - cria uma matriz com nRows  = rows, nCols = cols e 
// com todos os elementos iguais a elem (double)
Matrix::Matrix(int rows, int cols, double elem){
    nRows = rows;
    nCols = cols;

    m = new double *[nRows];

    for(int i=0;i<nRows;i++){

        m[i] = new double[nCols];
    }

    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++){
            m[i][j] = elem;
        }
    }
    
    //Criar uma matriz de ponteiros e igular tudo = elem

}


// destrutor
Matrix::~Matrix() {
    for(int i = 0; i < nRows; i++){
        delete [] m[i];
    }
    delete [] m;
}


// obtem o numero de linhas
int Matrix::getRows() const {
    return nRows;
}

// obtem o numero de colunas
int Matrix::getCols() const {
    return nCols;
}

// retorna uma matriz transposta
Matrix Matrix::transpose() {
    
    Matrix A(nCols, nRows, m[0][0]);

    return A;
}

// imprime o conteudo da matriz
void Matrix::print() const {
    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++){
            std::cout << " " << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}