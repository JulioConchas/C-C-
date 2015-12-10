/*
Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro del mismo (El perímetro de un cuadrado se calcula multiplicando el valor del lado por cuatro) 
Pueden crear por ejemplo un proyecto llamado PerimetroCuadrado
*/
#include <iostream>

using namespace std;

int main(){

	int lado,perimetro;

	cout <<"Ingresa en lado del cuatrado:";
	cout <<"\n";
	cin >>lado;

	perimetro = lado * 4;

	cout <<"El perimetro es: ";
	cout <<perimetro;
	cin.get();
	cin.get();

	return 0;
}