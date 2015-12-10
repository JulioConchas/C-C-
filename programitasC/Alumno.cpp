#include <iostream>

using namespace std;

class Alumno{
private:
    string nombre;
    int edad;
public:
    Alumno();
    void prin();
    void is18();
};
Alumno::Alumno(){
    cout <<"Ingresa el nombre del aluno: ";
    cin >>nombre;
    cout <<"\nIngresa la edad de: "<<nombre<<" ";
    cin >>edad;
}
void Alumno::prin(){
    cout <<"Nombre: "<<nombre<<"\n";
    cout <<"Edad: "<<edad<<"\n";
}
void Alumno::is18(){
    if(edad >= 18)cout <<nombre<<" es mayor de edad\n";
    else cout <<nombre<<" no es mayor de edad\n";
}

int main(){
    Alumno al;
        al.prin();
        al.is18();
    return 0;
}
