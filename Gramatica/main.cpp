#include <cstdio>
#include <cstdlib>
#include <cctype>
#include "Glc.cpp"


int main(){
 char simbolos[5] = "ABCD";
 List gramatica;
 List enePrima;
 List pePrima;


 printf("Eliminacion de simbolos no generativos\n");
 //printf("[ Simbolos generadores mayusculas ]\n");
 //gets(simbolos);

 start(gramatica);
 start(enePrima);
 start(pePrima);


for(int i = 0; simbolos[i] != '\0';i++){
	simbolos[i] = toupper(simbolos[i]);
	insert(gramatica,simbolos[i]);
}
 system("clear");
 print(gramatica);
 inProductions(gramatica);
 system("clear");
 print(gramatica);
 printf("<----------Analizando gramatica---------->\n");
 nPrima(gramatica,enePrima);
// printf("<---------Todo chido hasta qui 1--------->\n");
// print(enePrima);
 printf("<---------Todo chido hasta qui --------->\n");
 
 pPrima(gramatica,enePrima);
 return 0;

}