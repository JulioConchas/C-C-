#include <iostream>
/*Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor 
ingresado de uno en uno.
Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30.
Es de FUNDAMENTAL importancia analizar los diagramas de flujo y la posterior codificación en C++ de 
los siguientes problemas, en varios problemas se presentan otras situaciones no vistas en el ejercicio 
anterior.*/

using namespace std;

int main(){

		int n;
		int con = 1;

		cout <<"Ingresa el numero: ";
		cin >>n;

		while(con <= n){

			cout <<con;
			cout <<"-";
			con ++;
		}

		cin.get();
		cin.get();

	return 0;
}