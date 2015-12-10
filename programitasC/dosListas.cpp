#include <iostream>
/*Realizar un programa que permita cargar dos listas de 15 valores cada una. Informar con 
un mensaje cual de las dos listas tiene un valor acumulado mayor (mensajes "Lista 1 mayor", "Lista 2 
mayor", "Listas iguales")
Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.*/

using namespace std;

int main(){

	int valor,sumaL1,sumaL2;
	int cont = 0;

	while(cont < 15){

		cout <<"Ingrese el valor "<<cont<<" ";
		cin >>valor;

		sumaL1 += valor;
		cont++;
	}
	cont = 0;
	while(cont < 15){

		cout <<"Ingrese el valor "<<cont<<" ";
		cin >>valor;

		sumaL2 += valor;
		cont++;
	}

	if(sumaL1 > sumaL2)cout <<"Lista 1 mayor";
	else if(sumaL1 < sumaL2) cout <<"Lista 2 mayor";
	else cout <<"Listas iguales";

	cin.get();
	cin.get();

	return 0;
}