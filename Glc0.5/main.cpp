#include <cstdio>
#include <cstdlib>
#include <cctype>
#include "Glc.h"
#include "Glc.cpp"


int main(){
 char simbolos[5] = "ABCD";
 char *enePrima = new char[10];
 char *pePrima = new char[10];
 List gramatica;


 system("clear");
 printf("Eliminacion de simbolos no generativos\n");
 //printf("[ Simbolos generadores mayusculas ]\n");
 //gets(simbolos);

 start(gramatica);

for(int j = 0;j <= 10;j++){
    enePrima[j] = '\0';
    pePrima[j] = '\0';
}

for(int i = 0; simbolos[i] != '\0';i++){
	simbolos[i] = toupper(simbolos[i]);
	insert(gramatica,simbolos[i]);
}
 //system("clear");
 //print(gramatica);
 inProductions(gramatica);
 //system("clear");
 print(gramatica);
 printf("<----------Analizando gramatica---------->\n");
 nPrima(gramatica,enePrima);
 printf("N': %s\n",enePrima);
 pPrima(gramatica,enePrima,pePrima);
 printf("P': %s\n",pePrima);
  printf("<---------Todo chido hasta qui  en el main.cpp--------->\n");
while(contar(pePrima) != 20){
 pasoTres(gramatica,enePrima,pePrima);
}
 printf("N' otravez: %s\n",enePrima);
 printf("P': %s\n",pePrima);


 /*print(pePrima);
 printf("<---------Todo chido hasta qui --------->\n");
 pasoTres(gramatica,enePrima,pePrima);
 print(pePrima);*/

 return 0;

}
