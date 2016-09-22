#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include "Ponto.h"

class Poligono{
private:
    int nVertices;
protected:
    Ponto p[100];
public:
    Poligono();
    void addVertice(float x, float y);
    int getVertice();
    float area();
    void mover(float x, float y);
    void rot(double ang);
    void print();



};


#endif // POLIGONO_H_INCLUDED
