#include <iostream>
/*Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. Al 
comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.*/

using namespace std;

int main(){

		int nPuntos,p1Cuadrante,p2Cuadrante,p3Cuadrante,p4Cuadrante,x,y;

		p1Cuadrante = 0;
		p2Cuadrante = 0;
		p3Cuadrante = 0;
		p4Cuadrante = 0;

		cout <<"Ingres el numero de puntos a procesar: ";
		cin >>nPuntos;

		for(int i = 0;i < nPuntos;i++){

			cout <<"Ingresa la coordenada en X del punto: "<<i<<" ";
			cin >>x;
			cout <<"Ingresa la coordenada en Y del punto: "<<i<<" ";
			cin >>y;

			if(x > 0 && y > 0)p1Cuadrante++;
			else if(x < 0 && y > 0)p2Cuadrante++;
			else if(x < 0 && y < 0)p3Cuadrante++;
			else if(x > 0 && y < 0)p4Cuadrante++;
		}

		cout <<"Puntos en el 1º cuadrante: "<<p1Cuadrante<<"\n";
		cout <<"Puntos en el 2º cuadrante: "<<p2Cuadrante<<"\n";
		cout <<"Puntos en el 3º cuadrante: "<<p3Cuadrante<<"\n";
		cout <<"Puntos en el 4º cuadrante: "<<p4Cuadrante<<"\n";

		cin.get();
		cin.get();

	return 0;
}