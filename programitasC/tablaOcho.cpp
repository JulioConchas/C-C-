#include <iostream>
/*Mostrar los múltiplos de 8 hasta el valor 500. Debe aparecer en pantalla 8 - 16 - 24, etc.*/

using namespace std;

int main(){

	int multiplos = 8;

	while(multiplos <= 500){

		cout <<multiplos<<"-";
		multiplos += 8;
	}

	cin.get();

	return 0 ;
}