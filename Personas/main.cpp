#include "empleado.cpp"
//#include "persona.cpp"

int main(){
    persona p;
    empleado e;

    p.upload();
    p.show();
    e.upload();
    e.show();
    e.uploadSueldo();
    e.printSueldo();
    return 0;
}
