#include <iostream>
/*Modificar el problema anterios para realizar la carga del nombre y la edad de dos personas.
 Mostrar los datos cargados. Imprimir un mensaje si son mayor de edad o no.*/

using namespace std;

class Persona{
private:
	char nombre[20];
	int edad;
public:
	void inicializar();
	void print();
	void esMayorEdad();
};
void Persona::inicializar(){
	cout <<"Ingresa el nombre de la persona: ";
	cin.getline(nombre,20);
	cout <<"Ingresa la edad: ";
	cin >>edad;
}	
void Persona::print(){
	cout <<"Nombre: "<<nombre<<"\n";
	cout <<"Edad: "<<edad<<"\n";
}
void Persona::esMayorEdad(){
	if(edad > 18)cout <<nombre<<" es mayor de edad\n";
	else cout <<nombre<<"No es mayor de edad\n";
}
int main(){
		Persona persona1,persona2;
		
		persona1.inicializar();
		persona1.print();
		persona1.esMayorEdad();
		cin.get();
		persona2.inicializar();
		persona2.print();
		persona2.esMayorEdad();

		cin.get();
		cin.get();

	return 0;
}