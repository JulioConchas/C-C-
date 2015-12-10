#include <iostream>
/*Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de 
las personas.*/

using namespace std;

int main(){
	
	int cont,nPersonas;
	float promedio,suma,altura;
	cont = 0;

	cout <<"Ingresa el numero de Personas: ";
	cin >>nPersonas;

	while(cont < nPersonas){

		cout <<"Ingresa la altura de la persona " <<cont <<" ";
		cin >>altura;

		suma += altura;

		cont++;
	}

	promedio = suma / (float)nPersonas;

	cout <<"Promedio de alturas: " <<promedio;

	cin.get();
	cin.get();

	return 0;
}