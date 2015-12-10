#include <iostream>
/*Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre 
posteriormente la suma de los valores ingresados y su promedio. Este problema ya lo desarrollamos, 
lo resolveremos empleando la estructura for.*/

using namespace std;

int main(){

		int valor,suma,promedio;

		for(int i = 0;i < 10;i++){

			cout <<"Ingrese el valor "<<i<<" ";
			cin >>valor;

			suma += valor;
		}

		promedio = suma / 10;

		cout <<"Suma: "<<suma<<"\n";
		cout <<"Promedio: "<<promedio;

		cin.get();
		cin.get();

	return 0;
}