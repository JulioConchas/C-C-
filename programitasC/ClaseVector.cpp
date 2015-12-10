#include <iostream>
/*Se desea guardar los sueldos de 5 operarios.
Según lo conocido deberíamos definir 5 variables si queremos tener en un cierto momento los 5
 sueldos almacenados en memoria.
Empleando un vector solo se requiere definir un único nombre y accedemos a cada elemento por
 medio del subíndice.*/

using namespace std;

class Vector{
private:
	int sueldos[5];
public:
	void upload();
	void print();
};
void Vector::upload(){
	for(int i = 0;i <5;i++){
		cout <<"Ingresa el sueldo del empleado: "<<i<<" ";
		cin >>sueldos[i];
	}
}
void Vector::print(){
	for(int i = 0;i < 5;i++){
		cout <<"El sueldo del empleado: "<<i<<" es: "<<sueldos[i]<<"\n";
	}
}
int main(){
		Vector v;

		v.upload();
		v.print();

		cin.get();
		cin.get();
	return 0;
}