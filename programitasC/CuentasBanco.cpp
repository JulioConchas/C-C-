#include <iostream>
/*En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual. 
El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:
a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
Estado de la cuenta	'Acreedor' si el saldo es >0.
			'Deudor' si el saldo es <0.
			'Nulo' si el saldo es =0.
b) La suma total de los saldos acreedores.*/

using namespace std;

int main(){

		int numeroCuenta,saldo,saldosAcreedores;
		saldosAcreedores = 0;

		do{
			
			cout <<"Ingres el numero de cuenta: ";
			cin >>numeroCuenta;
		   if(numeroCuenta > 0){
				cout <<"Ingrese el Saldo: ";
				cin >>saldo;

				if(saldo > 0){
					cout <<"Acreedor\n";
					saldosAcreedores += saldo;
				}
				else if(saldo < 0)cout <<"Deudor\n";
				else if(saldo == 0)cout <<"Null\n";
		    }

		}while(numeroCuenta > 0);

		cout <<"Suma total de saldos acreedores: "<<saldosAcreedores;

		cin.get();
		cin.get();

	return 0;
}