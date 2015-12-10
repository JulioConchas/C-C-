#include <iostream>

using namespace std;

class tabla{
private:
    int data;
public:
    tabla();
    void print();
    ~tabla();
};
tabla::tabla(){
    cout <<"Ingrese un valor:\n";
    cin >>data;
}
void tabla::print(){
    for(int i = data;i <= data * 10;i =  i + data){
        cout <<i<<" - ";
    }
    cout << "\n";
}
tabla::~tabla(){
    cout <<"Thaks to use this program.\n";
}
int main(){
    tabla tb;
    tb.print();
    return 0;
}
