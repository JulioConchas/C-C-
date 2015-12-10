#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

class dato{
private:
    int data;
    void draw();
public:
    void number();
    void  print();
};
void dato::draw(){
    cout <<"**********************************\n";
}
void dato::number(){
    srand(time(NULL));
    data = rand() % 6 + 1;
}
void dato::print(){
    draw();
    cout <<data<<"\n";
    draw();
}
int main(){
    dato d;
    d.number();
    d.print();
    return 0;
}
