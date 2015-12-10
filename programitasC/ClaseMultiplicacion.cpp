#include <iostream>
/*Confeccionar una clase que permita ingresar valores enteros por teclado y 
nos muestre la tabla de multiplicar de dicho valor. Finalizar el programa al ingresar el -1.*/

using namespace std;

class Tabla{
public:
	void tablaMultiplicacion(int);
};
void Tabla::tablaMultiplicacion(int n){
	for(int i = 1;i <= 10; i++){
		cout <<i<<" x "<<n<<" = "<<(i * n)<<"\n";
	}
}
int main(){

		Tabla multip;
		int valor;

	do{

		cout <<"Ingresa el numero de la tabla: ";
		cin >>valor;

	if(valor != -1)multip.tablaMultiplicacion(valor);
	else cout <<"Exit";

	}while(valor != -1);

	cin.get();
	cin.get();

	return 0;
}
