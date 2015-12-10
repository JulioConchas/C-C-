#include <iostream>
/*Confeccionar un programa que lea por teclado tres números distintos y nos muestre el mayor.*/

using namespace std;

int main(){

		int n1,n2,n3;

		cout <<"Ingresa n1: ";
		cin >>n1;
		cout <<"Ingresa n2: ";
		cin >>n2;
		cout <<"Ingresa n3: ";
		cin >>n3;

		if(n1 > n2 && n1 > n3)cout <<"El mayor es n1";
		else if(n2 > n1 && n2 > n3)cout <<"El mayot es n2";
		else cout <<"El mayor es n3";

		cin.get();
		cin.get();

	return 0;
}