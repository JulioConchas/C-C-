#include "persona.cpp"

class empleado: public persona{
    float sueldo;
public:
    void uploadSueldo();
    void printSueldo();
};
