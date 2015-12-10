#include <iostream>
/*Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".*/

using namespace std;

int main(){

	int n1,n2,n3, suma;
	float promedio;

	cout <<"Ingrese la nota1: ";
	cin >>n1;
	cout <<"Ingrese la nota2: ";
	cin >>n2;
	cout <<"Ingrese la nota3: ";
	cin >>n3;

	suma = n1 + n2 + n3;
	promedio = (float)suma / 3;

	cout <<"Promedio: ";
	cout <<promedio;

	if(promedio >= 7)cout <<"\nPromocionado";
	else cout <<"\nNo promocionado";

	cin.get();
	cin.get();

	return 0;
}