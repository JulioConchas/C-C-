#include <iostream>
/*Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga). 
Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.*/

using namespace std;

int main(){

		int suma,valor;

		do{
			cout <<"Ingrese el valor: ";
			cin >>valor;

			suma += valor;

		}while(valor != 9999);

		cout <<"Valor acumulado: "<<suma;

		cin.get();
		cin.get();
		
	return 0;
}