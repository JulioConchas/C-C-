#include "empleado.h"
#include <iostream>

using namespace std;

void empleado::uploadSueldo(){
    cout <<"Ingresa el sueldo de "<<nombre<<"\n";
    cin >>sueldo;
}
void empleado::printSueldo(){
    cout <<"El sueldo de "<<nombre<<" es: "<<sueldo<<"\n";
}
