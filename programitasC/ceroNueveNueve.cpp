#include <iostream>
/*Escribir un programa que solicite la carga de un número entre 0 y 999, y nos muestre un 
mensaje de cuántos dígitos tiene el mismo. Finalizar el programa cuando se cargue el valor 0.*/

using namespace std;

int main (){
		int valor;

		do{
			cout <<"Ingresa un valor entre 0 y 999 ";
			cin >>valor;

			if(valor < 10)cout <<"El numero tiene 1 digito\n";
			else if(valor >= 10 && valor < 100 )cout <<"El numero tiene 2 digitos\n";
			else cout <<"El numero tiene 3 digitos\n";

		}while(valor != 0);

		cin.get();
		cin.get();
		
	return 0;
}