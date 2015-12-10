#include <iostream>
/*Implementar la clase operaciones. Se deben cargar dos valores enteros, calcular su suma, 
resta, multiplicación y división, cada una en un método, imprimir dichos resultados.*/

using namespace std;
class Operaciones{
private:
	int valor1,valor2;
public:
	void inicializar();
	int suma();
	int resta();
	int multiplicacion();
	float division();
};
void Operaciones::inicializar(){
	cout <<"Ingresa valor1: ";
	cin >>valor1;
	cout <<"Ingresa valor2: ";
	cin >>valor2;
}
int Operaciones::suma(){
	int suma = valor1 + valor2;
	return suma;
}
int Operaciones::resta(){
	int resta = valor1 - valor2;
	return resta;
}
int Operaciones::multiplicacion(){
	int mult = valor1 * valor2;
	return mult;
}
float Operaciones::division(){
	float divi = (float)valor1 / (float)valor2;
	return divi;
}

int main(){
	Operaciones oper;

	oper.inicializar();
	cout <<"Suma: "<<oper.suma()<<"\n";
	cout <<"Resta: "<<oper.resta()<<"\n";
	cout <<"Multiplicacion: "<<oper.multiplicacion()<<"\n";
	cout <<"Division: "<<oper.division()<<"\n";

	cin.get();
	cin.get();

	return 0;
}