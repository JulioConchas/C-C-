#include <iostream>
/*Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el
 segundo y a este resultado se lo multiplica por el tercero.*/

using namespace std;

int main(){

		int n1,n2,n3,suma,multiplicacion;

		cout <<"Ingresa n1: ";
		cin >>n1;
		cout <<"Ingresa n2: ";
		cin >>n2;
		cout <<"Ingresa n3: ";
		cin >>n3;

		if(n1 == n2 && n1 == n3){
			suma = n1 + n2;
			multiplicacion = suma * n3;

			cout <<"Resultado: ";
			cout <<multiplicacion;
		}
		else cout <<"Pos shido";

		cin.get();
		cin.get();
		
	return 0;
}