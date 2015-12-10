#include <iostream>
/**Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. 
(No se ingresan valores por teclado)*/

using namespace std;

int main(){

		int cont,termino;
		cont = 0;
		termino = 11;

		while(cont < 25){

			cout <<termino<<"\n";
			termino += 11;
			cont++;
		}
		cin.get();
	return 0;
}