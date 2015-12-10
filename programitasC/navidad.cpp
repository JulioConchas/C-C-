#include <iostream>
/*Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha 
corresponde a Navidad.*/

using namespace std;

int main(){

		int dia,mes,año;

		cout <<"Ingresa el número de día: ";
		cin >>dia;
		cout <<"Ingresa el número de mes: ";
		cin >>mes;
		cout <<"Ingresa el número de año: ";
		cin >>año;

		if(dia == 24 && mes == 12)cout <<"Feliz navidad";
		else cout <<"Feliz no navidad";

		cin.get();
		cin.get();
		
		return 0;
}