#include <iostream>
/*Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10, 
imprimir en pantalla la leyenda "Todos los números son menores a diez".*/

using namespace std;

int main(){

		int n1,n2,n3;

		cout <<"Ingresa n1: ";
		cin >>n1;
		cout <<"Ingresa n2: ";
		cin >>n2;
		cout <<"Ingresa n3: ";
		cin >>n3;

		if(n1 < 10 && n2 < 10 && n3 < 10)cout <<"Todos los números son menores a diez";
		else cout <<"No todos los número son menores a diez";

		cin.get();
		cin.get();
		
	return 0;
}