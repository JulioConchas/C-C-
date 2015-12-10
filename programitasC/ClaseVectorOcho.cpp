#include <iostream>
/*Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50.*/
using namespace std;

class vectorOcho{
private:
	int vectorcito[8];
	int valorAcumulado();
	int valorAcumuladoTresSeis();
	int cantidadMayoresCincuenta();
public:
	void upload();
};
void vectorOcho::upload(){
	for(int i = 0;i < 8;i++){
		cout <<"Ingresa el elemento: "<<i<<" ";
		cin >>vectorcito[i];
	}
	cout <<"Valor acumulado de todos los elementos: "<<valorAcumulado()<<"\n";
	cout <<"Valor acumulado de elementos mayores a 36: "<<valorAcumuladoTresSeis()<<"\n";
	cout <<"Cantidad de valores mayores 50: "<<cantidadMayoresCincuenta()<<"\n";
}
int vectorOcho::valorAcumulado(){
	int acumulado;
	for(int i = 0;i < 8;i++){
		acumulado += vectorcito[i];
	}
	return acumulado;
}
int vectorOcho::valorAcumuladoTresSeis(){
	int treintaYseis;

	for(int i = 0;i < 8;i++){
		if(vectorcito[i] < 36)treintaYseis += vectorcito[i];
	}
	return treintaYseis;
}
int vectorOcho::cantidadMayoresCincuenta(){
	int mayoresCincuenta = 0;
	for(int i = 0;i < 8;i++){
		if(vectorcito[i] > 50)mayoresCincuenta++;
	}
	return mayoresCincuenta;
}

int main(){
	vectorOcho vO;

	vO.upload();

	cin.get();
	cin.get();
	
	return 0;
}
