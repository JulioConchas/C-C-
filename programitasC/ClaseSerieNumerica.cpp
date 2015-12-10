#include <iostream>
/*Plantear una clase que permita cargar un valor entero por teclado.
 Definir un método que solicite la carga del entero y llame a otro método al que le pasamos 
 el valor ingresado y proceda a mostrar los valores enteros desde el 1 hasta el valor que 
 llega como parámetro (es decir el ingresado por teclado)*/

 using namespace std;

class SerieNumerica{
private:
	void showSerie(int);
public:
	void upload();
};
void SerieNumerica::upload(){

	int numero;

	cout <<"Ingresa el numero de inicio: ";
	cin >>numero;

	showSerie(numero);
}
void SerieNumerica::showSerie(int n){

	for(int i = 1;i <= n;i++){
		cout <<i<<" - ";
	}
}
 int main(){

 		SerieNumerica sn;

 		sn.upload();

 		cin.get();
 		cin.get();

 	return 0;
 }