#include <iostream>
/*Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana 
y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
Imprimir los gastos en sueldos de cada turno.*/

using namespace std;
 
class empleadosMT{
private:
	float empleadosMS[3];
	float empleadosTS[3];
public:
	void upload();
	float gastosM();
	float gastosT();
};
void empleadosMT::upload(){	
	for(int i = 0;i <= 3;i++){
		cout <<"Ingresa el sueldo del empleado: "<<i<<" de la mañana ";
		cin >>empleadosMS[i];
	}
	for(int j = 0;j <= 3;j++){
		cout <<"Ingresa el sueldo del empleado: "<<j<<" de la tarde ";
		cin >>empleadosTS[j];
	}
	cout <<"Gastos en sueldos de la mañana: "<<gastosM()<<"\n";
	cout <<"Gastos en sueldos de la tarde: "<<gastosT()<<" ";
}
float empleadosMT::gastosM(){
	float totalSueldoM;
	for(int i = 0;i <= 3;i++){
		totalSueldoM += empleadosMS[i];
	}
	return totalSueldoM;
}
float empleadosMT::gastosT(){
	float totalSueldoT;
	for(int i = 0;i <= 3;i++){
		totalSueldoT += empleadosTS[i];
	}
	return totalSueldoT;
}

int main(){
		empleadosMT eMT;
		eMT.upload();

		cin.get();
		cin.get();

	return 0;
}