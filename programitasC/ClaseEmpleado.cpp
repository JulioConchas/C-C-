#include <iostream>
/*Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. 
Confeccionar los métodos para la carga, otro para imprimir sus datos y por último uno que imprima 
un mensaje si debe pagar impuestos (si el sueldo supera a 3000)*/

using namespace std;

class Empleado{
private:
	char nombre[20];
	float sueldo;
public:
	void inicializar();
	void print();
	void debeImpuestos();
};
void Empleado::inicializar(){
	cout <<"Ingrese el nombre del empleado: ";
	cin.getline(nombre,20);
	cout <<"Ingrese el sueldo de: "<<nombre;
	cin >>sueldo;
}
void Empleado::print(){
	cout <<"Nombre: "<<nombre<<"\n";
	cout <<"Sueldo de: "<<nombre<<" "<<sueldo<<"\n";
}
void Empleado::debeImpuestos(){
	if(sueldo > 3000)cout <<nombre<<" debe impuestos\n";
	else cout <<nombre<<" no debe impuestos\n";
}
int main(){

	Empleado chango;

	chango.inicializar();
	chango.print();
	chango.debeImpuestos();

	cin.get();
	cin.get();

	return 0;
}
