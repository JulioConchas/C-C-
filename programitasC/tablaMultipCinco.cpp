#include <iostream>
/*Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)*/

using namespace std;

int main(){

		int tabla = 5;

		for(int i = 1;i <= 50;i++){

			cout <<i<<" x "<<tabla<<" = "<<tabla * i<<"\n";
		}
		
		cin.get();
	return 0;
}