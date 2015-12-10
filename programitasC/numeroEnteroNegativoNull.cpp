#include <iostream>
/*Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo,
 negativo o nulo (es decir cero)*/

using namespace std;

int main(){

	int numero;

	cout <<"Ingrese el numero: ";
	cin >>numero;

	if(numero > 0)cout <<"Positivo";
	else if(numero < 0)cout <<"Negativo";
	else cout <<"NULL";

	cin.get();
	cin.get();

	return 0;
}