#include <iostream>
/*Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
Realizar un programa que muestre el curso que obtuvo el mayor promedio general.*/
using namespace std;

class promedioAlumnos{
private:
	float cursoA[4];
	float cursoB[4];
	float suma(float[]);
	float promedioCurso(float);
public:
	void upload();
};
void promedioAlumnos::upload(){
	for(int i = 0;i <= 4;i++){
		cout <<"Ingresa la nota del alumno: "<<i<<" del grupo a ";
		cin >>cursoA[i];
	}
	for(int j = 0;j <= 4;j++){
		cout <<"Ingresa la nota del alumno: "<<j<<" del grupo b ";
		cin >>cursoB[j];
	}

	if(promedioCurso(suma(cursoA)) > promedioCurso(suma(cursoB)))cout <<"El mayor promedio es del curso A "<<promedioCurso(suma(cursoA));
	else cout <<"El mayor promedio es del curso B "<<promedioCurso(suma(cursoB));

	
}
float promedioAlumnos::suma(float curso[]){
	float suma;
	for(int i = 0;i <= 4;i++){
		suma += curso[i];
	}
	return suma;
}
float promedioAlumnos::promedioCurso(float suma){
	float prom;
	return prom = suma / 5;
}

int main(){
	promedioAlumnos pA;

	pA.upload();

	cin.get();
	cin.get();

	return 0;
}