#include <iostream>
/*Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. Obtener la suma de los dos vectores, 
dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente.*/

using namespace std;

class sumaVectores{
private:
	int vector1[3];
	int vector2[3];
	int vector3[3];
public:
	void upload();
	void suma();
	void print();
};
void sumaVectores::upload(){
	for(int i = 0;i <= 3;i++){
		cout <<"Ingresa el valor: "<<i<<" del primer vector ";
		cin >>vector1[i];
	}
	for(int j = 0;j <= 3;j++){
		cout <<"Ingresa el valor: "<<j<<" del segundo vector ";
		cin >>vector2[j];
	}
}
void sumaVectores::suma(){
	for(int i = 0;i <= 3;i++){
		vector3[i] = vector1[i] + vector2[i];
	}
}
void sumaVectores::print(){
	for(int i = 0;i <= 3;i++){
		cout <<vector3[i]<<"-";
	}
}
int main(){
	sumaVectores sV;

	sV.upload();
	sV.suma();
	sV.print();

	cin.get();
	cin.get();

	return 0;
}