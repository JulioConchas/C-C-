#include <iostream>
/*Confeccionar un programa que pida por teclado tres notas de un alumno,
 calcule el promedio e imprima alguno de estos mensajes:
Si el promedio es >=7 mostrar "Promocionado".
Si el promedio es >=4 y <7 mostrar "Regular".
Si el promedio es <4 mostrar "Reprobado".*/

using namespace std;

int main(){
	
	int n1,n2,n3,suma;
	float promedio;

	cout <<"Ingrese la nota1: ";
	cin >>n1;
	cout <<"Ingrese la nota2: ";
	cin >>n2;
	cout <<"Ingrese la nota3: ";
	cin >>n3;

	suma = n1 + n2 + n3;
	promedio = (float)suma / 3;

	if(promedio >= 7)cout <<"Promocionado";
	else if(promedio >= 4 && promedio <7) cout <<"Regular";
	else if(promedio < 4)cout <<"Reprobado";

	cin.get();
	cin.get();

	return 0;
}