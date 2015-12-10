#include <iostream>
/*Desarrollar una clase con dos métodos, uno para la carga de dos enteros. 
Definir un método privado que le enviemos los valores ingresados por teclado y 
nos retorne el mayor de ellos.*/
using namespace std;

class DosNumeroMayor{
private:
	int numeroMayor(int,int);
	bool numeroIguales(int,int);
public:
	void upload();
};
void DosNumeroMayor::upload(){
	int n1,n2;

	cout <<"Ingresa el primer numero: ";
	cin >>n1;
	cout <<"Ingresa el segundo numero: ";
	cin >>n2;
	if(numeroIguales(n1,n2) != true)cout <<"El numero mayor es: "<<numeroMayor(n1,n2);
	else cout <<"Los numero son iguales";
}
int DosNumeroMayor::numeroMayor(int n1,int n2){
	if(n1 > n2)return n1;
	else return n2;
}
bool DosNumeroMayor::numeroIguales(int n1,int n2){
	if(n1 == n2)return true;
	else return false;
}
int main(){
	DosNumeroMayor dNm;

	dNm.upload();

	cin.get();
	cin.get();

	return 0;
}