#include <iostream>
/*Confeccionar un programa que defina una cadena de caracteres para almacenar el nombre y apellido
 de una persona. La carga del dato hacerla por teclado.*/

using namespace std;

int main(){

		char nombreApellido[40];

		cout <<"Ingresa el nombre y apellido:";
		cin.getline(nombreApellido,40);
		cout <<"El nombre es: "<<nombreApellido;

		cin.get();
		cin.get();

	return 0;
}