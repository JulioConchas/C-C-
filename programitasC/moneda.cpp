#include <iostream>

using namespace std;

class moneda{
private:
    int valor;
public:
    moneda(int);
    void print();
};
moneda::moneda(int v){
    valor = v;
}
void moneda::print(){
    cout <<"El valor de la moneda es: "<<valor<<"\n";
}
int main(){
    moneda mx(30);
    moneda us(40);

    mx.print();
    us.print();

    return 0;
}
