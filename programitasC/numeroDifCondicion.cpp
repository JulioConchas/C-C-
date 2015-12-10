#include <iostream>
/*Realizar un programa que solicite la carga por teclado de dos números, 
si el primero es mayor al segundo informar su suma y diferencia, en caso contrario informar 
el producto y la división del primero respecto al segundo.*/

using namespace std;

int main(){

	int n1,n2,suma,diferencia,producto;
	float divicion;

	cout <<"Ingrese n1: ";
	cin >>n1;
	cout <<"Ingrese n2: ";
	cin >>n2;

	if(n1 > n2){
		suma = n1 + n2;
		diferencia = n1 - n2;

		cout <<"Suma: ";
		cout <<suma;
		cout <<"\nDiferencia: ";
		cout << diferencia;
	}
	else{
		producto = n1 * n2;
		divicion = (float)n1 / (float)n2;

		cout <<"Producto: ";
		cout <<producto;
		cout <<"\nDivicion: ";
		cout <<divicion;
	}
	cin.get();
	cin.get();

	return 0;
}