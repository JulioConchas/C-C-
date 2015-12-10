#include <iostream>
/*Escribir un programa en el cual: dada una lista de tres valores numéricos distintos se calcule e 
informe su rango de variación (debe mostrar el mayor y el menor de ellos)*/

using namespace std;

int main(){
	int n1,n2,n3,mayor,menor;

		cout <<"Ingrese n1: ";
		cin >>n1;
		cout <<"Ingrese n2: ";
		cin >>n2;
		cout <<"Ingrese n3: ";
		cin >>n3;

	if(n1 > n2 && n1 > n3){
		mayor = n1;
		if(n2 > n3)menor = n3;
		else menor = n2;
	}
	else if(n2 > n3){
		mayor = n2;
		menor = n1;
	}
	else{
		mayor = n3;
		menor = n1;
	}

	cout <<"Mayor: ";
	cout <<mayor;
	cout <<"\nMenor: ";
	cout <<menor;

	cin.get();
	cin.get();

	return 0;
}