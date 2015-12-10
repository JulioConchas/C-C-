#include <iostream>
/*Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.*/

using namespace std;

int main(){

	int n1,n2,n3;

	cout <<"Ingrese n1: ";
	cin >>n1;
	cout <<"Ingrese n2: ";
	cin >>n2;
	cout <<"Ingrese n3: ";
	cin >>n3;

	if(n1 > n2){
		if(n1 > n3)cout <<"El mayor es n1";
		else cout <<"El mayor es n3";
	}
	else if(n2 > n3)cout <<"El mayor es n2";
	else cout <<"El mayor es n3";

	cin.get();
	cin.get();

	return 0;
}