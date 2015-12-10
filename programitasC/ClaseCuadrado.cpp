#include <iostream>
/*Desarrollar una clase que represente un Cuadrado y tenga los siguientes métodos: cargar 
el valor de su lado, imprimir su perímetro y su superficie.*/

using namespace std;

class Cuadrado{
private:
	int lado;
public:
	void inicializar();
	void perimetro();
	void superficie();
	void print();
};
void Cuadrado::inicializar(){
	cout <<"Ingrese el lado: ";
	cin >>lado;
}
void Cuadrado::perimetro(){
	int per;
	per = lado * 4;
	cout <<"Perimetro: "<<per<<"\n";
}
void Cuadrado::superficie(){
	int area;
	area = lado * lado;
	cout <<"Superficie: "<<area<<"\n";
}
int main(){

		Cuadrado cuadro;

		cuadro.inicializar();
		cuadro.perimetro();
		cuadro.superficie();

		cin.get();
		cin.get();

	return 0;
}
