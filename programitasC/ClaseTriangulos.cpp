#include <iostream>
/*Desarrollar un programa que cargue los lados de un triángulo e implemente los siguientes métodos: 
inicializar los atributos, imprimir el valor del lado mayor y otro método que muestre si es equilátero
o no.*/
using namespace std;

class Triangulo{
private:
	float lado1,lado2,lado3;
public:
	void inicializar();
	void print();
	void esEquilatero();
};
void Triangulo::inicializar(){
	cout <<"Ingresa el primer lado: ";
	cin >>lado1;
	cout <<"Ingres el segundo lado: ";
	cin >>lado2;
	cout <<"Ingresa el tercer lado: ";
	cin >>lado3;
}
void Triangulo::print(){
	if(lado1 == lado2 && lado2 == lado3)cout <<"Los tres lado son iguales\n";
	else if(lado1 > lado2 && lado1 > lado3)cout <<"El lado uno es el mayor\n";
	else if(lado2 > lado3)cout <<"El lado dos es el mayor\n";
	else cout <<"El lado tres es el mayor\n";
}
void Triangulo::esEquilatero(){
	if(lado1 == lado2 && lado2 == lado3)cout <<"Es un triangulo equilátero\n";
	else cout <<"No es un triangulo Equilátero\n";
}
int main(){

	Triangulo triangulo;

	triangulo.inicializar();
	triangulo.print();
	triangulo.esEquilatero();

	cin.get();
	cin.get();

	return 0;
}





