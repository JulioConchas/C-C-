#include <iostream>
/*Desarrollar un programa que permita cargar 5 nombres de personas y sus 
edades respectivas. Luego de realizar la carga por teclado de todos los datos 
imprimir los nombres de las personas mayores de edad (mayores o iguales a 18 años)*/

using namespace std;

class VectoresParalelos{
private:
	char nombres[5][20];
	int edades[5];
	void isMayor();
public:
	void upload();
};
void VectoresParalelos::upload(){

		for(int i = 0;i < 5;i++){
			cout <<"Ingresa el nombre de la persona: "<<i<<" ";
			cin.getline(nombres[i],20);
			cout <<"Ingresa la edad de "<<nombres[i]<<" ";
			cin >>edades[i];
			cin.get();
		}

	isMayor();	
}
void VectoresParalelos::isMayor(){
		for(int i = 0;i < 5;i++){
			if(edades[i] > 18)cout <<nombres[i]<<" es mayor de edad: "<<edades[i]<<"\n";
		}
}
int main(){
	VectoresParalelos vP;

		vP.upload();

		cin.get();
	return 0;
}