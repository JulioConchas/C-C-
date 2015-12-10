#include <iostream>
/*Realizar un programa que permita ingresar el peso (en kilogramos) de piezas. El proceso termina cuando ingresamos el valor 0. Se debe informar:
a) Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.?, cuántas con más de 10.2 Kg.? y cuántas con menos de 9.8 Kg.?
b) La cantidad total de piezas procesadas.*/

using namespace std;

int main(){

		int nueveDiez,masDiez,menosNueve,suma;
		float pieza;

		nueveDiez = 0;
		masDiez = 0;
		menosNueve = 0;

		do{
			cout <<"Ingrese el peso de la pieza en kg :";
			cin >>pieza;

			if(pieza >= 9.8 && pieza < 10.2)nueveDiez++;
			else if(pieza > 10.2)masDiez++;
			else if(pieza < 9.8)menosNueve++;

		}while(pieza != 0);

			suma = nueveDiez + masDiez + menosNueve;

		cout <<"Piezas entre 9.8 Kg. y 10.2 Kg: "<<nueveDiez<<"\n";
		cout <<"Piezas mas a 10.2 Kg: "<<masDiez<<"\n";
		cout <<"Piezas menos de 9.8 Kg: "<<menosNueve<<"\n";
		cout <<"Cantidad total de piezas: "<<suma<<"\n";

		cin.get();
		cin.get();

	return 0;
}