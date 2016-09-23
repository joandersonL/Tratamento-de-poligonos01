#include "Ponto.h"
#include <iostream>
#include <cmath>

using namespace std;

Ponto::Ponto(){ // Inicialização do ponto na coordenada (0,0)
     x = 0;
     y = 0;
}
Ponto::Ponto(float _x, float _y){

    x = _x;
    y = _y;
}

Ponto::~Ponto(){} // Destrutor da class

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

Ponto Ponto::addPonto(Ponto p){ // Função para adicionar um ponto
    Ponto pNovo;
    pNovo.setX(x + p.getX());
    pNovo.setY(y + p.getY());
    return pNovo;
}
Ponto Ponto::subPonto(Ponto p){ // Função que subtrai as coordenadas de um ponto
    Ponto pNovo;
    pNovo.setX(x - p.getX());
    pNovo.setY(y - p.getY());
    return pNovo;
}

float Ponto::norma(){ // Função que calcular a norma de um ponto
    float a,b;
    a = pow(0-x,2);
    b = pow(0-y,2);

    return sqrt(a+b);
}

Ponto Ponto::translada(float a,float b){ // Função para transladar um Poligono
    Ponto pNovo;
    pNovo.setX(x + a);
    pNovo.setY(y + b);
    return pNovo;
}
void Ponto::imprime(){ // Função que imprime
    cout<< "("<<x<<","<<y<<")";
}


