#include <iostream>

using namespace std;

class mNFive(){

    int array[5];
public:
    mNFive();
    int biger();
    int smoller();
}
mNFive::nMFive(){
    srand(time(NULL));
    for(int i = 0;i < 5;i++){
        array[i] = rand() % 10;
    }
}
int main(){
    return 0;
}
