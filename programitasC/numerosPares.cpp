#include <iostream>
/*Desarrollar un programa que permita cargar n números enteros y luego nos informe cuántos valores 
fueron pares y cuántos impares.
Emplear el operador “%” en la condición de la estructura condicional (este operador retorna el resto 
de la división de dos valores, por ejemplo 11%2 retorna un 1):
	if (valor%2==0)         //Si el if da verdadero luego es par.*/

using namespace std;

int main(){

	int cont = 0;
	int nNumeros,numero,pares,impares;

	cout <<"Ingresa el número de enteros: ";
	cin >>nNumeros;

	while(cont < nNumeros){

		cout <<"Ingresa en entero "<<cont<<" ";
		cin >>numero;

		if(numero % 2 == 0)pares++;
		else impares++;

		cont++;
	}

	cout <<"Pares: "<<pares<<"\n";
	cout <<"Impares: "<<impares<<"\n";

	cin.get();
	cin.get();

	return 0;
}
