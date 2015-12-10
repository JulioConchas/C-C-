#include <iostream>
/*Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre la tabla de 
multiplicar del mismo (los primeros 12 términos)
Ejemplo: Si ingreso 3 deberá aparecer en pantalla los valores 3, 6, 9, hasta el 36.*/

using namespace std;

int main(){

		int nTabla;

		cout <<"Ingresa el numero de tabla: ";
		cin >>nTabla;

		for(int i = 1;i <= 12;i++){

			cout <<i<<"x"<<nTabla<<"="<<nTabla * i<<"\n";
		}

		cin.get();
		cin.get();

	return 0;
}