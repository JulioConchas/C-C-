#include "dado.h"
#include <iostream>

using namespace std;

void dado::tirar(){
    valor = rand() % 6 + 1;
}
void dado::print(){
    cout <<"Valor del dado: "<<valor<<"\n";
}
int dado::returnData(){
    return valor;
}
