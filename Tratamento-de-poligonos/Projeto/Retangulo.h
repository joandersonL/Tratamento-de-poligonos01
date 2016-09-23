#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED
#include "Poligono.h"

class Retangulo : public Poligono {
    
    public: //Declaração da função pública
    Retangulo(int x,int y, int largura,int altura);
    ~Retangulo();

 };

#endif // RETANGULO_H_INCLUDED
