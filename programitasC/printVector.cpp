#include <iostream>

using namespace std;

class printVector{
    int vector[5];
public:
    printVector();
    void print();
    void print(int);
    void print(int,int);
};
printVector::printVector(){
    for(int i = 0;i < 5;i++){
        vector[i] = i;
    }
}
void printVector::print(){
    for(int i = 0;i < 5;i++){
        cout <<vector[i]<<" - ";
    }
    cout <<"\n";
}
void printVector::print(int until){
    for(int i = 0; i <= until;i++){
        cout <<vector[i]<<" - ";
    }
    cout <<"\n";
}
void printVector::print(int since,int until){
    for(int i = since;i <= until;i++){
        cout <<vector[i]<<" - ";
    }
    cout <<"\n";
}
int main(){
    printVector pV;
    int data1,data2;

        pV.print();
    cout <<"Inside the value of until:\n";
    cin >>data1;
        pV.print(data1);
    cout <<"Inside the value of since:\n";
    cin >>data1;
    cout <<"Inside the value of until:\n";
    cin >>data2;
        pV.print(data2);

    return 0;
}
