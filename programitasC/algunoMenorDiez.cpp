#include <iostream>
/*Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, 
imprimir en pantalla la leyenda "Alguno de los números es menor a diez".*/

using namespace std;
void capturaNumero(int &n1,int &n2,int &n3){

		cout <<"Ingresa n1: ";
		cin >>n1;
		cout <<"Ingresa n2: ";
		cin >>n2;
		cout <<"Ingresa n3: ";
		cin >>n3;
}
int main(){	

	int n1,n2,n3;

	capturaNumero(n1,n2,n3);

	if(n1 < 10 || n2 < 10 || n3 < 10)cout <<"Alguno de los número es menos a diez";
	else cout <<"Nada menos que diez";

	cin.get();
	cin.get();

	return 0;
}