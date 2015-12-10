#include <iostream>
/*Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores 
enteros x e y (distintos a cero).
Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. 
(1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, 3º Cuadrante  x < 0 Y y < 0
4º Cuadrante x > 0 Y y < 0)*/

using namespace std;

int main(){

		int x,y;

		cout <<"Ingresa la coordenada en X: ";
		cin >>x;
		cout <<"Ingresa la coordenada en Y: ";
		cin >>y;

		if(x > 0 && y > 0)cout <<"Las coordenadas estan en el 1º cuadrante";
		else if(x < 0 && y > 0)cout <<"Las coordenadas estan el el 2º cuadrante";
		else if(x < 0 && y < 0)cout <<"Las coordenadas estan en el 3º cuadrante";
		else if(x > 0 && y < 0)cout <<"Las coordenadas estan el el 4º cuadrante";

		cin.get();
		cin.get();


	return 0;
}