#include <iostream>
/*Confeccionar un programa que permita ingresar dos cadenas de caracteres por teclado y 
luego mostrar un mensaje indicando si: "son iguales", "la primer cadena ingresada es mayor 
alfabéticamente" o "la segunda cadena ingresada es mayor alfabéticamente".*/

using namespace std;

int main(){

		char cadenaUno[40];
		char cadenaDos[40];

		cout <<"Ingresa la cadena uno: ";
		cin.getline(cadenaUno,40);
		cout <<"Ingresa la cadena dos: ";
		cin.getline(cadenaDos,40);

		if(strcmp(cadenaUno,cadenaDos) == 0)cout <<"Cadenas iguales\n";
		else if(strcmp(cadenaUno,cadenaDos) > 0)cout <<"La primera cadena es mayor alfabéticamente\n";
		else if(strcmp(cadenaUno,cadenaDos) < 0)cout <<"La segunda cadena es mayor alfabéticamente\n";

		cin.get();
		cin.get();
		
	return 0;
}