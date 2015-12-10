#include <iostream>
/*Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 
valores ingresados.
*/

using namespace std;

int main(){

		int numero,suma;
		suma = 0;

		for(int i= 0;i < 10;i++){

			cout <<"Ingresa el entero: "<<i<<" ";
			cin >>numero;

			if(i > 5)suma += numero;
		}

		cout <<"Suma ultimos 5 numero: "<<suma;

		cin.get();
		cin.get();


	return 0;
}