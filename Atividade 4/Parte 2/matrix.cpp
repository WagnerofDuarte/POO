#include "matrix.h"

Matrix::Matrix(){

    nRows = 0;
    nCols = 0;

    m = new double *[nRows];

    for(int i=0;i<nRows;i++){

        m[i] = new double[nCols];
    }
     
}

Matrix::Matrix(int rows, int cols, const double &value){

    nRows = rows;
    nCols = cols;

    m = new double *[nRows];

    for(int i=0;i<nRows;i++){

        m[i] = new double[nCols];
    }

    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++){
            m[i][j] = value;
        }
    }
    
}

Matrix::Matrix(std::ifstream &myFile){
    myFile.open("myMatrix");
    myFile >> nRows >> nCols;

    std::cout << nRows << " " << nCols;

    m = new double *[nRows];
    for(int i=0;i<nRows;i++){
        m[i] = new double[nCols];
    }

    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++){
            myFile >> m[i][j];
        }
    }

    std::cout << "tst";
}

Matrix::Matrix(const Matrix& that){

    nRows = that.nRows;
    nCols = that.nCols;
    m = new double *[nRows];
    for(int i=0;i<nRows;i++){
        m[i] = new double[nCols];
    }

    m = that.m;
    
}

Matrix::~Matrix() {
    for(int i = 0; i < nRows; i++){
        delete [] m[i];
    }
    delete [] m;
}

int Matrix::getRows() const {
    return nRows;
}

int Matrix::getCols() const {
    return nCols;
}

double Matrix::get(int row, int col) const {

    if(row < 0 || row > nRows || col < 0 || col > nCols){
        return 0;
    } else {
        return m[row][col];
    }
}

void Matrix::print() const {

    std::cout << std::endl;

    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++){
            std::cout << " " << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Matrix::unit(){

    if(nCols == nRows){
        for(int i = 0; i < nRows; i++){
            for(int j = 0; j < nCols; j++){
                if(i == j){
                    m[i][j] = 1;
                } else {
                    m[i][j] = 0;
                }
            }
        }
    } else {
        std::cout << "A indentidade nao eh possivel nessa matriz" << std::endl;
    }
}

void Matrix::zeros(){

    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++){
            m[i][j] = 0;
        }
    }
    
}

void Matrix::ones(){

    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < nCols; j++){
            m[i][j] = 1;
        }
    }
    
}