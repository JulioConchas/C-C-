/*
Se debe desarrollar un programa que pida el ingreso del precio de un artículo y la cantidad que lleva el cliente.
 Mostrar lo que debe abonar el comprador.
*/

 #include <iostream>

 using namespace std;

 int main(){

 		float precio,deuda;
 		int cantidad;

 		cout <<"Ingresa el precio del artículo: ";
 		cin >>precio;
 		cout <<"Ingresa la cantidad de artículos: ";
 		cin >>cantidad;

 		deuda = precio * (float)cantidad;

 		cout <<"Total: ";
 		cout <<deuda;
 		cout <<" $";

 		cin.get();
 		cin.get();
 	return 0;
 }