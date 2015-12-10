#include <iostream>
/*Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios.
 Definir dos vectores paralelos. Mostrar cuantos productos tienen un precio mayor al primer 
 producto ingresado.*/

 using namespace std;

class Tiendita{
private:
	char productos[5][20];
	float precios[5];
	void isMayor();
public:
	void upload();
};
void Tiendita::upload(){
	for(int i = 0;i < 5;i++){
		cout <<"Ingresa el producto: "<<i<<" ";
		cin.getline(productos[i],20);
		cout <<"Ingresa el precio del: "<<productos[i]<<" ";
		cin >>precios[i];
		cin.get();
	}
	isMayor();
}
void Tiendita::isMayor(){
	float first = precios[0];
	int cont = 0;

	for(int i = 1;i < 5;i++){
		if(precios[i] > first)cont++;
	}

	cout <<cont<<" Productos tienen un precio mayor al primer producto ingresado\n";
}

 int main(){
 	Tiendita t;
 	t.upload();
 	cin.get();
 	return 0;
 }