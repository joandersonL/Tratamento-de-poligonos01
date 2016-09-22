#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

class Ponto
{
private:
    float x;
    float y;

public:
    Ponto();
    Ponto(float x,float y);


    float getX();
    void setX(float x);
    float getY();
    void setY(float y);
    Ponto addPonto(Ponto p);
    Ponto subPonto(Ponto p);
    float norma();
    Ponto translada(float a,float b);
    void imprime();

};

#endif // PONTO_H_INCLUDED
