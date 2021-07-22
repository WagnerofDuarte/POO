#include "Ponto2D.h"
#include <iostream>
#include <math.h>
using namespace std;

#define EXPONENT 2

int lastId = 0;

Ponto2D::Ponto2D(double x, double y){
    _x = x;
    _y = y;
    _id = lastId;
    lastId++;
}

Ponto2D::Ponto2D(const Ponto2D &X){

    _x = X._x;
    _y = X._y;
    _id = X._id;
    lastId++;

}

double Ponto2D::getX(){
    return _x;
}

double Ponto2D::getY(){
    return _y;
}

int Ponto2D::getId(){
    return _id;
}

void Ponto2D::setX(double x){
    _x = x;    
}

void Ponto2D::setY(double y){
    _y = y;
}

void Ponto2D::setId(int id){
    _id = id;
}

void Ponto2D::print(){
    cout << "x:" << this->getX() << endl;
    cout << "y:" << this->getY() << endl;
    cout << "id:" << this->getId() << endl;
}

double Ponto2D::distToOrig(){
    double x_2 = pow(this->getX(), EXPONENT);
    double y_2 = pow(this->getY(), EXPONENT);
    double sum = x_2 + y_2;
    return sqrt(sum);
}

double Ponto2D::distTo(Ponto2D p){
    double dist_x = p.getX() - this->getX();
    double dist_y = p.getY() - this->getY();
    Ponto2D newPoint = Ponto2D(dist_x, dist_y);
    return newPoint.distToOrig();
}

void Ponto2D::sumOf(Ponto2D p){
    this->setX(this->getX() + p.getX());
    this->setY(this->getY() + p.getY());
}

Ponto2D* Ponto2D::sumAndCreate(Ponto2D p){
    double newX = this->getX() + p.getX();
    double newY = this->getY() + p.getY();
    Ponto2D *newPoint= new Ponto2D(newX, newY);
    newPoint->setId(lastId++);
    return newPoint;
}

Ponto2D::~Ponto2D(){
    lastId --;
    cout << "last id:" << lastId << endl;
}