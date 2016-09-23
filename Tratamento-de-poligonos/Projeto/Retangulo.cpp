#include "Retangulo.h"

Retangulo::Retangulo(int x,int y,int largura,int altura){ //Função que adiciona os vertices de um poligono retangulo
    addVertice(x,y);
    addVertice(x,y-altura);
    addVertice(x+largura,y-altura);
    addVertice(x+largura,y);
}

Retangulo::~Retangulo(){ // Destrutor da class
}
