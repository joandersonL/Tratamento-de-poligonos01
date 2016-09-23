#include "Retangulo.h"

Retangulo::Retangulo(int x,int y,int largura,int altura){
    addVertice(x,y);
    addVertice(x,y-altura);
    addVertice(x+largura,y-altura);
    addVertice(x+largura,y);
}

Retangulo::~Retangulo(){
}
