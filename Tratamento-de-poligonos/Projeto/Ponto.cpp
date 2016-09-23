#include "Ponto.h"
#include <iostream>
#include <cmath>
using namespace std;
Ponto::Ponto(){
     x = 0;
     y = 0;
}
Ponto::Ponto(float _x, float _y){

    x = _x;
    y = _y;
}
Ponto::~Ponto(){}
float Ponto::getX(){
    return x;
}
void Ponto::setX(float _x){
    x = _x;
}
float Ponto::getY(){
    return y;
}
void Ponto::setY(float _y){
    y = _y;
}
Ponto Ponto::addPonto(Ponto p){
    Ponto pNovo;
    pNovo.setX(x + p.getX());
    pNovo.setY(y + p.getY());
    return pNovo;
}
Ponto Ponto::subPonto(Ponto p){
    Ponto pNovo;
    pNovo.setX(x - p.getX());
    pNovo.setY(y - p.getY());
    return pNovo;
}

float Ponto::norma(){
    float a,b;
    a = pow(0-x,2);
    b = pow(0-y,2);

    return sqrt(a+b);
}

Ponto Ponto::translada(float a,float b){
    Ponto pNovo;
    pNovo.setX(x + a);
    pNovo.setY(y + b);
    return pNovo;
}
void Ponto::imprime(){
    cout<< "("<<x<<","<<y<<")";
}


