#include <iostream>
/*Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y 
muestre un mensaje indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de 
cifras es mayor.*/

using namespace std;

int main(){

	int numero;

	cout <<"Ingrese un numero de hasta 3 cifras: ";
	cin >>numero;

	if(numero < 10)cout <<"El numero tiene 1 cifra";
	else if(numero < 100)cout <<"El numero tiene 2 cifras";
	else if(numero < 1000)cout <<"El numero tiene 3 cifras";
	else cout <<"El numero tiene mas de 3 cifras";
	

	cin.get();
	cin.get();

	return 0;
}