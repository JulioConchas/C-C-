#include <iostream>
/*Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y 
cuántas más bajas.*/

using namespace std;

class Alturas{
private:
	float alturas[5];
private:
	float promedio(float);
	float suma();
	int masAltas();
	int masBajas();
public:
	void upload();
};
void Alturas::upload(){

	for(int i = 0;i < 5;i++){
		cout <<"Ingresa la altura de la persona: "<<i<<" " ;
		cin >>alturas[i];
	}
	cout <<"Promedio: "<<promedio(suma())<<"\n";
	cout <<"Personas mas altas que el promedio: "<<masAltas()<<"\n";
	cout <<"Personas mas bajas que el promedio: "<<masBajas()<<"\n";

}
float Alturas::suma(){
	float s = 0;

	for(int i = 0;i < 5;i++){
		s += alturas[i];
	}
	return s;
}
float Alturas::promedio(float suma){
	float prom;

	return prom = suma / 5;
}
int Alturas::masAltas(){
	int altas = 0;

	for(int i = 0;i < 5;i++){
		if(alturas[i] > promedio(suma()))altas++;
	}
	return altas;
}
int Alturas::masBajas(){
	int bajas = 0;

	for(int i = 0;i < 5;i++){
		if(alturas[i] < promedio(suma()))bajas++;
	}
	return bajas;
}
int main(){
	Alturas a;

	a.upload();

	cin.get();
	cin.get();

	return 0;
}








