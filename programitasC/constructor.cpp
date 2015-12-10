#include <iostream>

using namespace std;

class constructor{
private:
    float sueldos[5];
public:
    constructor();
    void imprimir();
};
constructor::constructor(){
    cout <<"Carga de sueldo. \n";
    for(int i = 0;i < 5;i++){
        cout <<"Ingrese el sueldo: \n";
        cin >>sueldos[i];
    }
}
void constructor::imprimir(){
    for(int i = 0;i < 5;i++){
        cout <<sueldos[i];
    }
}
int main(){
    constructor ct;
    ct.imprimir();

    return 0;
}
