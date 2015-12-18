#include "banco.h"

banco::banco():c1("Pancho"),c2("Juancha"),c3("Chema"){
}
void banco::operar(){
    c1.depositar(100);
    c2.depositar(150);
    c3.depositar(200);
    c3.extraer(150);
}
void banco::depositosTotales(){
    float t = c1.retornarMonto() + c2.retornarMonto() + c3.retornarMonto();

    c1.print();
    c2.print();
    c3.print();
}
