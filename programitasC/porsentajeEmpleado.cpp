#include <iostream>
/*Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información: cantidad total de preguntas que se le realizaron y la cantidad de
 preguntas que contestó correctamente. Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo según el porcentaje de 
 respuestas correctas que ha obtenido, y sabiendo que:
	Nivel máximo:	Porcentaje>=90%.
	Nivel medio:	Porcentaje>=75% y <90%.
	Nivel regular:	Porcentaje>=50% y <75%.
	Fuera de nivel:	Porcentaje<50%.*/

using namespace std;

int main(){

	 int cantidadPreguntas,preguntasCorrectas;
	 float porcentaje;

	 cout <<"Ingresa la candidad de preguntas realizadas: ";
	 cin >>cantidadPreguntas;
	 cout <<"Ingresa la candidad de preguntas correctas: ";
	 cin >>preguntasCorrectas;

	 //numero de respuestas correctas * 100 / total de preguntas
	 porcentaje = (float)(preguntasCorrectas * 100)/cantidadPreguntas;

	 cout <<"Porcentaje: ";
	 cout <<porcentaje;

	 if(porcentaje >= 90)cout <<"\nNivel máximo";
	 else if(porcentaje >= 75 && porcentaje < 90)cout <<"\nNivel medio";
	 else if(porcentaje >= 50 && porcentaje < 75)cout <<"\nNivel regular";
	 else if(porcentaje < 50)cout <<"\nFuera de nivel";

	 cin.get();
	 cin.get();

	return 0;
}