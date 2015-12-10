#include <iostream>
/*Una planta que fabrica perfiles de hierro posee un lote de n piezas.
Confeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar 
y luego ingrese la longitud de cada perfil; sabiendo que la pieza cuya longitud esté comprendida en
 el rango de 1.20 y 1.30 son aptas. Imprimir por pantalla la cantidad de piezas aptas que hay en el 
 lote.*/

 using namespace std;

 int main(){

 		int piezas,con,cantidadPerfiles;
 		float longitud;

 		con = 0;
 		cantidadPerfiles = 0;

 		cout <<"Ingresa la cantidad de piezas a procesar ";
 		cin >>piezas;

 		while(con < piezas){

 			cout <<"Ingres la longitud del perfil ";
 			cout <<con;
 			cout <<" ";
 			cin >>longitud;

 			if(longitud >= 1.20 && longitud <= 1.30)cantidadPerfiles++;
 			
 			con++;
 		}

 		cout <<"Cantidad de perfiles aptos: ";
 		cout <<cantidadPerfiles;

 		cin.get();
 		cin.get();


 	return 0;
 }