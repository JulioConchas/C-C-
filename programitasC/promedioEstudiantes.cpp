#include <iostream>
/*Se cuenta con la siguiente información:
Las edades de 5 estudiantes del turno mañana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.
a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor.
*/

using namespace std;

int main(){
		
		int edad,suma,i;
		float promedio1,promedio2,promedio3;

		suma = 0;

		for(i = 0;i < 5;i++){

			cout <<"Ingresa la edad del estudiante: "<<i<<" de la mañana: ";
			cin >>edad;

			suma += edad;
			
		}

		promedio1 = (float)suma / 5;
		suma = 0;

		for(i = 0;i < 6;i++){

			cout <<"Ingresa la edad del estudiante: "<<i<<" de la tarde: ";
			cin >>edad;

			suma += edad;
		}

		promedio2 = (float)suma / 6;
		suma = 0;

		for(i = 0;i < 11;i++){

			cout <<"Ingresa la edad del estudiante: "<<i<<" de la noche: ";
			cin >>edad;

			suma += edad;
		}

		promedio3 = (float)suma / 11;

		cout <<"Promeido de edades en la mañana: "<<promedio1<<"\n";
		cout <<"Promedio de edades en la tarde: "<<promedio2<<"\n";
		cout <<"Promedio de edades en la noche: "<<promedio3<<"\n";

		if(promedio1 > promedio2 && promedio1 > promedio3)cout <<"El promedio de la mañana es mayor\n";
		else if(promedio2 > promedio3)cout <<"Promedio de la tarde es mayor\n";
		else cout <<"El promedio de la noche es mayor\n";

		cin.get();
		cin.get();


		return 0;
}