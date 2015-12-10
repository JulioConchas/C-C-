#include <iostream>
/*Cargar un vector de 10 elementos y verificar posteriormente si el mismo está
 ordenado de menor a mayor. */
using namespace std;

class vectorOrdenado{
private:
	int vector[9];
	bool isOrder();
public:
	void upload();
};
void vectorOrdenado::upload(){
	for(int i = 0;i < 10;i++){
		cout <<"Ingresa el elemento: "<<i<<" ";
		cin >>vector[i];
	}
	if(isOrder())cout <<"El vector esta ordenado\n";
	else cout <<"El vector no esta ordenado\n";

}
bool vectorOrdenado::isOrder(){
	bool retorn;

	for(int i = 0;i < 9;i++){
		if(vector[i] < vector[i +1])retorn = true;
		else retorn = false;
	}
	return retorn;
}
int main(){
	vectorOrdenado vO;

	vO.upload();
	
	cin.get();
	cin.get();
	
	return 0;
}