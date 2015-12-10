#include <iostream>
/*Realizar un programa que imprima en pantalla los números del 1 al 100.
Sin conocer las estructuras repetitivas podemos resolver el problema empleando una estructura 
secuencial. Inicializamos una variable con el valor 1, luego imprimimos la variable, incrementamos 
nuevamente la variable y así sucesivamente.*/

using namespace std;

int main(){
	int cont = 2;

	while(cont <= 100){
		
		cout <<cont;
		cout <<"\n";

		cont += 2;
	}

	cin.get();

	return 0;
}