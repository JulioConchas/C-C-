#include <iostream>
/*En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa
 que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran entre $100 y $300 y 
 cuántos cobran más de $300. Además el programa deberá informar el importe que gasta la empresa en 
 sueldos al personal.*/

 using namespace std;

 int main(){	

 		int con,nEmpleados,cienTrecientos,masTrecientos;
 		float sueldo,sueldoTotal;
 		
 		con = 0;
 		cienTrecientos = 0;
 		masTrecientos = 0;

 		cout <<"Ingresa en número de empleados: ";
 		cin >>nEmpleados;

 		while(con < nEmpleados){

 			cout <<"Ingresa el sueldo del empledo " <<con <<" ";
 			cin >>sueldo;

 			sueldoTotal += sueldo;

 			if(sueldo >= 100 && sueldo <=300)cienTrecientos++;
 			else if(sueldo > 300)masTrecientos++;

 			con++;
 		}

 		cout <<"Gasto en nominas: "<<sueldoTotal;
 		cout <<"\nEmpleados con sueldo entre 100$ y 300$: "<<cienTrecientos;
 		cout <<"\nEmpleados con sueldo mayor a 300$: "<<masTrecientos;

 		cin.get();
 		cin.get();

 	return 0;
 }