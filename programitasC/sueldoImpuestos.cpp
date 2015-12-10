/*
Ingresar el sueldo de una persona, si supera los 3000 pesos mostrar un mensaje en pantalla indicando 
que debe abonar impuestos.
*/
#include <iostream>

using namespace std;

int main(){
	
	float sueldo;

	cout <<"Ingresa el sueldo:\n";
	cin >>sueldo;

	if(sueldo > 3000)cout <<"Debe pagar impuestos";
	else cout <<"No debe pagar impuestos";

	cin.get();
	cin.get();

	return 0;
}