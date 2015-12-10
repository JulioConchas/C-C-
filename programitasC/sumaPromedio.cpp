/*
Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio.
*/
#include <iostream>

using namespace std;

int main(){

		int n1,n2,n3,n4,suma,promedio;

		cout <<"Ingrese n1:";
		cin >>n1;
		cout <<"Ingrese n2:";
		cin >>n2;
		cout <<"Ingrese n3:";
		cin >>n3;
		cout <<"Ingrese n4:";
		cin >>n4;

		suma = n1 + n2 + n3 + n4;
		promedio = suma / 4;

		cout <<"Promeido: ";
		cout <<promedio;

		cin.get();
		cin.get();

	return 0;
}