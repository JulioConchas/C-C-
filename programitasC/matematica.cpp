#include <iostream>

using namespace std;

class matematica{
public:
    int mayor(int n1,int n2);
    int mayor(int n1,int n2,int n3);
    float mayor(float n1,float n2);
    float mayor(float n1,float n2,float n3);
};
int matematica::mayor(int n1,int n2){
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}
int matematica::mayor(int n1,int n2,int n3){
    int nM = n1;
    int array[3] = {n1,n2,n3};
    for(int i = 0;i < 3;i++){
        if(nM < array[i]){
            nM = array[i];
        }
    }
    return nM;
}
float matematica::mayor(float n1,float n2){
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}
float matematica::mayor(float n1,float n2,float n3){
    float nM = n1;
    float array[3] = {n1,n2,n3};
    for(int i = 0;i < 3;i++){
        if(nM < array[i]){
            nM = array[i];
        }
    }
    return nM;
}
int main(){
    matematica mT;

        cout <<"Two int: "<<mT.mayor(2,3)<<"\n";
        cout <<"Three int: "<<mT.mayor(5,3,4)<<"\n";
        cout <<"Two float: "<<mT.mayor(4.4f,45.4f)<<"\n";
        cout <<"Three float: "<<mT.mayor(2.4f,3.5f,6.5f)<<"\n";

    return 0;
}
