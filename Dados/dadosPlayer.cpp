#include "dadosPlayer.h"

void dadosPlayer::jugar(){
    d1.tirar();
    d1.print();
    d2.tirar();
    d2.print();
    d3.tirar();
    d3.print();

        if(d1.returnData() == d2.returnData() && d1.returnData() == d3.returnData()){
            cout <<"Ganador\n";
        }
        else{
            cout <<"Perdedor\n";
        }
}
