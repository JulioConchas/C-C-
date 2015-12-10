#include <iostream>
/*Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de 
la base y la altura de un triángulo. El programa deberá informar:
a) De cada triángulo la medida de su base, su altura y su superficie. 
b) La cantidad de triángulos cuya superficie es mayor a 12.*/

using namespace std;

int main(){

		int nPares,base,altura,mayorDoce;
		float area;
		mayorDoce = 0;

		cout <<"Ingresa el número de triangulos: ";
		cin >>nPares;


		for(int i = 0;i <nPares;i++){

			cout <<"Ingresa la base del triangulo: "<<i<<" ";
			cin >>base;
			cout <<"Ingrese la altura del triangulo: "<<i<<" ";
			cin >>altura;

			area = (float)(base * altura) / 2;

			if(area > 12)mayorDoce++;

			cout <<"Base triangulo "<<i<<": "<<base<<"\n";
			cout <<"Altura triangulo "<<i<<": "<<altura<<"\n";
			cout <<"Area triangulo "<<i<<": "<<area<<"\n";

		}

		cout <<"Cantidad de tringulos con area mayor a 12: "<<mayorDoce;

		cin.get();
		cin.get();

	return 0;
}