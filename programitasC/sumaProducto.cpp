/*
Escribir un programa en el cual se ingresen cuatro números, calcular e informar la suma de 
los dos primeros y el producto del tercero y el cuarto.
*/
#include <iostream>

using namespace std;

int main(){

		int n1,n2,n3,n4,suma,producto;

		cout <<"Ingrese el n1:\n";
		cin >>n1;
		cout <<"Ingrese el n2:\n";
		cin >>n2;
		cout <<"Ingrese el n3:\n";
		cin >>n3;
		cout <<"Ingrese el n4:\n";
		cin >>n4;

		suma = n1 + n2;
		producto = n3 * n4;

		cout <<"Suma: ";
		cout <<suma;
		cout <<"\nProducto:";
		cout <<producto;

		cin.get();
		cin.get();

	return 0;
}