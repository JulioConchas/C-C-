#include <iostream>
/*Confeccionar una clase que permita ingresar tres valores por teclado. Luego mostrar 
el mayor y el menor. Retornar dichos valores mediante el return.*/

using namespace std;

class MayorMenor{
private:
	int mayor(int,int,int);
	int menor(int,int,int);
	bool iguales(int,int,int);
public:
	void carga();
	
};
void MayorMenor::carga(){
	int v1,v2,v3;
	cout <<"Ingresa en primer numero: ";
	cin >>v1;
	cout <<"Ingresa el segundo numero: ";
	cin >>v2;
	cout <<"Ingresa en tercer numero: ";
	cin >>v3;

	if(iguales(v1,v2,v3) != true){
	cout <<"El mayor es: "<<mayor(v1,v2,v3)<<"\n";
	cout <<"El menor es: "<<menor(v1,v2,v3)<<"\n";
    }
    else cout <<"Son iguales:\n";
}
int MayorMenor::mayor(int n1,int n2,int n3){
	if(n1 > n2 && n1 > n3)return n1;
	else if(n2 > n3)return n2;
	else return n3;
}
int MayorMenor::menor(int n1,int n2,int n3){
	if(n1 < n2 && n1 < n2)return n1;
	else if(n2 < n3)return n2;
	else return n3;
}
bool MayorMenor::iguales(int n1,int n2,int n3){
	if(n1 == n2 && n2 == n3)return true;
	else return false;
}
int main(){
	MayorMenor pos;
	pos.carga();

	cin.get();
	cin.get();

	return 0;
}