#include <iostream>
/*Escribir un programa que solicite la carga de números por teclado, obtener su promedio. Finalizar 
la carga de valores cuando se cargue el valor 0.
Cuando la finalización depende de algún valor ingresado por el operador conviene el empleo de la 
estructura do while, por lo menos se cargará un valor (en el caso más extremo se carga 0, que indica 
la finalización de la carga de valores)*/

using namespace std;

int main(){
		int valor,suma,cont;
		float promedio;

		suma = 0;
		cont = 0;

		do{
			cout <<"Ingresa el valor: ";
			cin >>valor;

			suma += valor;
			cont++;

		}while(valor != 0);

		if(suma != 0){ 
			promedio =  (float)suma / cont - 1;

			cout <<"Promedio: "<<promedio<<" ";
		}
		else cout <<"No se ingresaron valores";

		cin.get();
		cin.get();
		
	return 0;
}