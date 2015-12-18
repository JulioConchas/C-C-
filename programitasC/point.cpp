#include <iostream>

using namespace std;

class point{
    int x,y;
public:
    point();
    point(int,int);
    void print();
};
point::point(){
    x = 0;
    y = 0;
}
point::point(int equis,int yee){
    x = equis;
    y = yee;
}
void point::print(){
    cout <<"x: "<<x<<"\n";
    cout <<"y: "<<y<<"\n";
}
int main(){
    point p,p1(4,5);
    p.print();
    p1.print();

    return 0;
}
