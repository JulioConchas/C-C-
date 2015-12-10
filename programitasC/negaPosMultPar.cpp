#include <iostream>
/*Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
a) La cantidad de valores ingresados negativos.
b) La cantidad de valores ingresados positivos.
c) La cantidad de múltiplos de 15.
d) El valor acumulado de los números ingresados que son pares.*/

using namespace std;

int main(){

		int valor,negativos,positivos,multQuince,pares;
		
		negativos = 0;
		positivos = 0;
		multQuince = 0;
		pares = 0;

		for(int i = 0;i < 10;i++){

			cout <<"Ingresa el valor: "<<i<<" ";
			cin >>valor;

			if(valor < 0)negativos++;
			else if(valor > 0)positivos++;

			if(valor % 15 == 0)multQuince++;
			if(valor % 2 == 0)pares++;
		}

		cout <<"Cantidad de negativos: "<<negativos<<"\n";
		cout <<"Cantidad de positivos: "<<positivos<<"\n";
		cout <<"Cantidad de multiplos de quince: "<<multQuince<<"\n";
		cout <<"Cantidad de numero pares: "<<pares<<"\n";

		cin.get();
		cin.get();

	return 0;
}