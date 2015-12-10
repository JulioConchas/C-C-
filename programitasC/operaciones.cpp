#include <iostream>

using namespace std;

class operaciones{
private:
    int resultado,numberOne,numberTwo;
    float division;
    int suma();
    int resta();
    int multi();
    float divi();
public:
    operaciones(int,int);
    void print();
};
operaciones::operaciones(int n1,int n2){
    numberOne = n1;
    numberTwo = n2;
}
int operaciones::suma(){return resultado = numberOne + numberTwo;}
int operaciones::resta(){return resultado = numberOne - numberTwo;}
int operaciones::multi(){return resultado = numberOne * numberTwo;}
float operaciones::divi(){return division = (float)numberOne / (float)numberTwo;}
void operaciones::print(){
    cout <<"Suma: "<<suma()<<"\n";
    cout <<"Resta: "<<resta()<<"\n";
    cout <<"Multiplicacion: "<<multi()<<"\n";
    cout <<"División: "<<divi()<<"\n";
}

int main(){
    operaciones op(4,5);

    op.print();
    return 0;
}
