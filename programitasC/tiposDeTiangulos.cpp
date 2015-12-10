#include <iostream>
/*Realizar un programa que lea los lados de n triángulos, e informar:
a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles
 (dos lados iguales), o escaleno (ningún lado igual)
b) Cantidad de triángulos de cada tipo.
c) Tipo de triángulo que posee menor cantidad*/

using namespace std;

int main(){

		int nTriangulos,l1,l2,l3,nEquiláteros,nIsósceles,nEscalenos;

		nEquiláteros = 0;
		nIsósceles = 0;
		nEscalenos = 0;

		cout <<"Ingresa la cantidad de triangulos: ";
		cin >>nTriangulos;

		for(int i = 0;i < nTriangulos;i++){

			cout <<"Ingres el primer lado del triangulo: "<<i<<" ";
			cin >>l1;
			cout <<"Ingresa el segundo lado del triangulo: "<<i<<" ";
			cin >>l2;
			cout <<"Ingresa el tercer lado del triangulo: "<<i<<" ";
			cin >>l3;

			if(l1 == l2 && l1 == l3){

				cout <<"El triangulo es un Equilátero\n";

				nEquiláteros++;
			}
			else if(l1 == l2 || l1 == l3 || l2 == l3){
				cout <<"El triangulo es un isósceles\n";
				nIsósceles++;
			}
			else if(l1 != l2 && l1 != l3){
				cout <<"El triangulo es un Escaleno\n";
				nEscalenos++;
			}

		}

		cout <<"Cantidad de Equiláteros: "<<nEquiláteros<<"\n";
		cout <<"Cantidad de Isósceles: "<<nIsósceles<<"\n";
		cout <<"Cantidad de Escaleno: "<<nEscalenos<<"\n";

		if(nEquiláteros > nIsósceles && nEquiláteros > nEscalenos)cout <<"Mas muchos Equiláteros\n";
		else if(nIsósceles > nEscalenos)cout <<"Mas munchos Isósceles";
		else if(nEquiláteros == nIsósceles && nEquiláteros == nEscalenos)cout <<"Misma cantidad de todos los triangulos\n";
		else cout <<"Mas munchos Escalenos\n";

		cin.get();
		cin.get();


	return 0;
}