#include <iostream>
/*Escribir un programa que lea 10 notas de alumnos y nos informe cuántos tienen notas mayores o 
iguales a 7 y cuántos menores.*/

using namespace std;

int main(){

		int mayorIgual7,menor7;
		float nota;

		mayorIgual7 = 0;
		menor7 = 0;
		
		for(int i = 0;i < 10;i++){

			cout <<"Ingrese la nota del alumno "<<i<<" ";
			cin >>nota;

			if(nota >= 7)mayorIgual7++;
			else menor7++;
		}

		cout <<"Número de alumnos con notas mayores o iguales a 7: "<<mayorIgual7<<"\n";
		cout <<"Numero de alumnos con notas menores a 7: "<<menor7;

		cin.get();
		cin.get();

	return 0;
}