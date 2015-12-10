#include <iostream>
/*Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen 
notas mayores o iguales a 7 y cuántos menores.*/

using namespace std;

int main(){

		int con,mayoresIguales,menores;
		float notas;

	con = 0;
	mayoresIguales = 0;
	menores = 0;

	while(con < 10){

		cout <<"Ingresa la nota del alumno: " << con << " ";
		cin >>notas;

		if(notas >= 7)mayoresIguales++;
		else if(notas < 7)menores++;

		con++;
	}

	cout <<"Mayores o iguales a 7: " <<mayoresIguales;
	cout <<"\nMenores a 7: " <<menores;
	
	cin.get();
	cin.get();

	return 0;
}

