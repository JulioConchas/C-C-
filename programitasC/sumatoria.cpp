#include <iostream>

using namespace std;

class sumatoria{
private:
    int suma,data;
public:
    sumatoria();
    ~sumatoria();
};
sumatoria::sumatoria(){
    cout <<"Ingrese datos:\n";
    do{
        cin >>data;
        suma += data;

    }while(data != 0);
}
sumatoria::~sumatoria(){
    cout <<"Suma: "<<suma<<"\n";
}
int main(){
    sumatoria sm;
    return 0;
}
