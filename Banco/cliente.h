#include <iostream>

using namespace std;

class cliente{
    string nombre;
    float monto;
public:
    cliente(string);
    void depositar(int);
    void extraer(int);
    float retornarMonto();
    void print();
};
