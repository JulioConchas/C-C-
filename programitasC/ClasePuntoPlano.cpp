#include <iostream>
/*Desarrollar una clase que represente un punto en el plano y tenga los siguientes métodos:
 cargar los valores de x e y, imprimir en que cuadrante se encuentra dicho punto 
 (concepto matemático, primer cuadrante si x e y son positivas, si x<0 e y>0 segundo cuadrante, etc.)*/

using namespace std;

class PuntoPlano{
private:
 	int x,y;
public:
 	void inicializar();
 	void cuadrantePlano();
};
void PuntoPlano::inicializar(){
 	cout <<"Ingresa la coordenada en X: ";
 	cin >>x;
 	cout <<"Ingresa la coordenada en Y: ";
 	cin >>y;
 }
void PuntoPlano::cuadrantePlano(){
 	if(x > 0 && y > 0)cout <<"Punto en el primer cuadrante:\n";
 	else if(x < 0 && y > 0)cout <<"Punto en el segundo cuadrante\n";
 	else if(x < 0 && y < 0)cout <<"Punto en el tercer cuadrante\n";
 	else if(x > 0 && y < 0)cout <<"Punto en el cuarto cuadrante\n";
 }
 int main(){

 		PuntoPlano punto;

 		punto.inicializar();
 		punto.cuadrantePlano();

 		cin.get();
 		cin.get();

 	return 0;
 }

