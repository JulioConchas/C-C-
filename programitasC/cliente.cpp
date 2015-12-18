#include "cliente.h"
#include <iostream>

using namespace std;

cliente::cliente(string name){
    nombre = name;
    monto  = 0;
}
void cliente::depositar(int m){
    monto += m;
}
void cliente::extraer(int m){
    monto -= m;
}
float cliente::retornarMonto(){
    return monto;
}
void cliente::print(){
    cout <<"Name: "<<nombre<<"\n";
    cout <<"Monto: "<<monto<<"\n";
}
