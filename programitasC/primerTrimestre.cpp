#include <iostream>
/*Se carga una fecha (día, mes y año) por teclado. Mostrar un mensaje si corresponde 
al primer trimestre del año (enero, febrero o marzo) Cargar por teclado el valor numérico del día, 
mes y año. 
Ejemplo: dia:10 mes:1 año:2015.*/

using namespace std;

int main (){
		int dia,mes,año;

		cout <<"Ingresa el número de día: ";
		cin >>dia;
		cout <<"Ingresa el número de mes: ";
		cin >>mes;
		cout <<"Ingresa el número de año: ";
		cin >>año;

		if(mes == 1 || mes == 2 || mes == 3)cout <<"La fecha pertenece al primer trimestre del año";
		else cout <<"La fecha no pertenece al primer trimestre del año";

		cin.get();
		cin.get();
		
	return 0;

}