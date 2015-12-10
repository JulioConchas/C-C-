#include <iostream>
/*Escribir un programa que lea 10 números enteros y luego muestre cuántos valores ingresados fueron 
múltiplos de 3 y cuántos de 5. Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5
 a la vez.*/

using namespace std;

int main(){

		int numero,mTres,mCinco;
		mTres = 0;
		mCinco = 0;

		for(int i = 0;i < 10;i++){

			cout <<"Ingresa en numero "<<i<<" ";
			cin >>numero;

			if(numero % 3 == 0 && numero % 5 == 0){
				mTres++;
				mCinco++;
			}
			else if(numero % 5 == 0)mCinco++;
			else if(numero % 3 == 0)mTres++;
		}

		cout <<"Multiplos de tres: "<<mTres<<"\n";
		cout <<"Multiplos de cinco: "<<mCinco;

		cin.get();
		cin.get();

	return 0;
}