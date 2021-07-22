#ifndef PONTO2D_H
#define PONTO2D_H

class Ponto2D{
    double _x;
    double _y;
    int _id;
    
public:
    Ponto2D(double x = 0.0, double y = 0.0);
    Ponto2D(const Ponto2D &X);
    
    double getX();
    double getY();
    int getId();
    
    void setX(double x);
    void setY(double y);
    void setId(int id);
    
    void print();
    
    double distToOrig();
    double distTo(Ponto2D p);
    
    void sumOf(Ponto2D p);
    Ponto2D* sumAndCreate(Ponto2D p);
    
    ~Ponto2D();
};
#endif