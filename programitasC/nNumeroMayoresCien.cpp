#include <iostream>
/*Escribir un programa que lea n números enteros y calcule la cantidad de valores mayores o iguales a 
1000.
Este tipo de problemas también se puede resolver empleando la estructura repetitiva for. Lo primero que
se hace es cargar una variable que indique la cantidad de valores a ingresar. Dicha variable se carga
antes de entrar a la estructura repetitiva for.
La estructura for permite que el valor inicial o final dependa de una variable cargada previamente por 
teclado.*/

using namespace std;

int main(){

		int nNúmeros,mIgualMil,entero;
		mIgualMil = 0;

		cout <<"Ingrese el numero de enteros: ";
		cin >>nNúmeros;

		for(int i = 0;i < nNúmeros;i++){

			cout <<"Ingresa en entero: "<<i<<" ";
			cin >>entero;

			if(entero >= 1000)mIgualMil++;
		}

		cout <<"Enteros mayores iguales a Mil: "<<mIgualMil;

		cin.get();
		cin.get();
	return 0;
}