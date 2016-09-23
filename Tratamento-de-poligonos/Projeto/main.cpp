#include <iostream>
#include<cmath>
#include "Retangulo.h"
using namespace std;

int main()
{
    /*
    Poligono p;
    Ponto centro;

    p.addVertice(1,3);
    p.addVertice(7,2);
    p.addVertice(10,0);
    p.addVertice(11,5);
    p.addVertice(8,7);
    p.addVertice(3,6);

    cout<<p.area()<<endl;
    centro = p.centroide();
    centro.imprime();*/

    Retangulo r(0,0,3,4);
    cout<<"Coordenadas do retangulo inicial: \n";
    r.print();
    cout<<"\n\n\n";

    cout<<"Area do retangulo: "<<r.area();
    r.mover(-3,4);


    cout<<"\n\n\n";
    cout<<"Coordenadas do retangulo final: \n";
    r.print();
    cout<<"\nArea do retangulo: "<<r.area();


    cout<<"\n\n\n";
    r.rot(30,r.centroide());
    r.print();
    cout<<"\n\n\n";
    cout<<"\nArea do retangulo: "<<r.area()<<endl;



    return 0;
}
