#include <iostream>
/*Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje 
indicando si el número tiene uno o dos dígitos.
(Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)*/

using namespace std;

int main(){

		int numero;

		cout <<"Ingresa un numero positivo de uno o dos dígitos (1..99)";
		cin >>numero;

		if(numero < 0)cout <<"El numero es negativo";
		else if(numero < 10)cout <<"El numero tiene 1 digito";
		else cout <<"El numero tiene 2 digitos";

		cin.get();
		cin.get();
		
	return 0;
}