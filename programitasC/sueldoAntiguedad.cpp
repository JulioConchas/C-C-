#include <iostream>
/*De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que 
lea los datos de entrada e informe:
a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento
 del 20 %, mostrar el sueldo a pagar.
b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.*/

//multiplicar el número del porcentaje por la cantidad total:
//dividir la cifra obtenida entre 100:

using namespace std;

float porcentaje(int sueldo,int porcen){

		int multip;
		float porcentaje;

			multip = porcen * sueldo;
			porcentaje =  (float)multip / 100;

			return porcentaje;
}

int main(){

		int sueldo,antigüedad;

		cout <<"Ingresa el sueldo: ";
		cin >>sueldo;
		cout <<"Ingres los años de antigüedad: ";
		cin >>antigüedad;

		if(sueldo < 500 && antigüedad >=  10){
				
			cout <<"Tienes un aumento de: ";
			cout <<porcentaje(sueldo,20);
		}
		else if(sueldo < 500 && antigüedad < 10){
			
			cout <<"Tines un aumento de: ";
			cout <<porcentaje(sueldo,5);
		}
		else if(sueldo > 500) cout <<sueldo;

		cin.get();
		cin.get();

	return 0;
}