/*
Realizar un programa que solicite ingresar dos números distintos y muestre por pantalla el mayor de ellos.
*/
#include <iostream>

using namespace std;

int main(){

		int n1,n2;

		cout <<"Ingresa n1: ";
		cin >>n1;
		cout <<"Ingresa n2: ";
		cin >>n2;

		if(n1 > n2)cout <<"n1 es mayor";
		else cout <<"n2 es mayor";

			cin.get();
			cin.get();

	return 0;
}