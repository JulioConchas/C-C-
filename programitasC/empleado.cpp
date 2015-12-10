#include <iostream>

using namespace std;

class empleado{
private:
    string name;
    int salary;
public:
    empleado();
    void print();
    void isPoor();
};
empleado::empleado(){
    cout <<"Inside employer name: \n";
    cin >>name;
    cout <<"Inside "<<name<<"'s salaty: \n";
    cin >>salary;
}
void empleado::print(){
    cout <<"Name: "<<name<<"\n";
    cout <<"Salaty: "<<salary<<"\n";
}
void empleado::isPoor(){
    if(salary > 3000)cout <<"debe pagar impuestor\n";
    else cout <<"No debe impuestor\n";
}
int main(){
    empleado em;
        em.print();
        em.isPoor();

    return 0;
}
