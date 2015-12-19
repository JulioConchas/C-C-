#include "persona.h"
#include <iostream>

using namespace std;

void persona::upload(){
    cout <<"Ingresa el nomnbre\n";
    cin >>nombre;
    cout <<"Ingresa la edad de: "<<nombre<<"\n";
    cin >>edad;
}
void persona::show(){
    cout <<"Nombre: "<<nombre<<"\n";
    cout <<"Edad: "<<edad<<"\n";
}
