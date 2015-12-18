#include <iostream>

using namespace std;

class estructuraVector{
 int vector[5];
 public:
     estructuraVector();
     estructuraVector(int);
     void print();
};
estructuraVector::estructuraVector(){
    for(int i = 0;i < 5;i++){
        vector[i] = 0;
    }
}
estructuraVector::estructuraVector(int data){
    for(int i = 0;i < 5;i++){
        vector[i] = data;
    }
}
void estructuraVector::print(){
    for(int i = 0;i < 5;i++){
        cout <<vector[i]<<" - ";
    }
    cout <<"\n";
}

int main(){
    estructuraVector eV,ev1(5);

    eV.print();
    ev1.print();
    return 0;
}
