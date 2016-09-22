#include <iostream>
#include "Retangulo.h"
using namespace std;

int main()
{
    Retangulo r(0,0,3,4);
    cout<<"Coordenadas do retangulo inicial: ";
    r.print();
    cout<<"\nArea do retangulo: "<<r.area();
    r.mover(-3,4);
    cout<<endl;
    cout<<"Coordenadas do retangulo final: ";
    r.print();
    cout<<"\nArea do retangulo: "<<r.area()<<endl;
    return 0;
}
