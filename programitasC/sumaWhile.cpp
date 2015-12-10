#include <iostream>
/*Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre 
posteriormente la suma de los valores ingresados y su promedio.
*/

using namespace std;

int main(){

		int score,suma;
		int con = 1;
		float promedio;

		suma = 0;

		while(con <= 10){

			cout <<"Ingresa el numero ";
			cout <<con;
			cout <<" ";
			cin >>score;

			suma += score;

			con++;

		}

		promedio = (float)suma / 10;

		cout <<"Suma: ";
		cout <<suma;
		cout <<"\nPromedio: ";
		cout <<promedio;

		cin.get();
		cin.get();

	return 0;
}