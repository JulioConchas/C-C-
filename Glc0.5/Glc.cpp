#include <cstdlib>
#include <cstdio>
#include <cctype>
#include "Glc.h"

void start(List& l){
	l.init = NULL;
}
bool insert(List &l,char simbolo){
	node *p = new node;
	node *aux = new node;

		if(l.init == NULL){

		p -> simbolo = simbolo;
		p -> next = NULL;
		l.init = p;
	return true;
 	}
	else{
		p = l.init;
		while(p -> next != NULL){
			p = p -> next;
		}

		aux -> simbolo = simbolo;
		aux -> next = NULL;
		p -> next = aux; 

		return true;
	}
	p = NULL;
	aux = NULL;
	delete p;
	delete aux;
}
char *insertProd(node *p){
	char *prod = new char[11];

			if(p -> simbolo == 'A') prod = "AB|AC|x|D";
			else if(p -> simbolo == 'B') prod = "Ay|A";
			else if(p -> simbolo == 'C')prod = "ABC";
			else if(p -> simbolo == 'D')prod = "Axy";

		return prod;
}
void inProductions(List &l){

	node *p = new node;
	p = l.init;

	while(p){
		p -> productions = new char[50];
		p -> productions = insertProd(p);
		p = p -> next;
	}
	p = NULL;
	delete p;
}
bool encontrarTerminales(node *p){
	node *q = new node;
	q = p;
	bool mayuscula = false;
	bool term = false;
	char *terminales = new char[50];

		terminales = q -> productions;
		for(int i = 0;terminales[i] != '\0';i++){
			if(terminales[i] == '|'|| terminales[i] == '\0'){
				//printf("\n");
				mayuscula = false;
			}
			else{
				//evaluar toda la regla
				if(terminales[i] == toupper(terminales[i]))mayuscula = true;
			    else if(mayuscula == false){
			    	term = true;
			    	//printf("%c minusculas",terminales[i]);
			    }
			}
		}
		q = NULL;
		delete q;
		mayuscula = false;
		return term;
}
char retornarTerminales(node *p){
	node *q = new node;
	q = p;
	bool mayuscula = false;
	char term;// retornar un vector con todas las producciones terminales
	char *terminales = new char[50];

		terminales = q -> productions;
		for(int i = 0;terminales[i] != '\0';i++){
			if(terminales[i] == '|'|| terminales[i] == '\0'){
				//printf("\n");
				mayuscula = false;
			}
			else{
				//evaluar toda la regla
				if(terminales[i] == toupper(terminales[i]))mayuscula = true;
			    else if(mayuscula == false){
			    	term = terminales[i];
			    	//printf("%c minusculas",terminales[i]);
			    }
			}
		}
		q = NULL;
		delete q;
		mayuscula = false;
		return term;
}
void nPrima(List &l,char *n){
	node *p = new node;
	p = l.init;
	int contador = 0;

	while(p){
		if(encontrarTerminales(p) == true){
			//printf("%c produccion con terminales\n",p -> simbolo);
            n[contador] = p -> simbolo;
            contador ++;
            n[contador] = ',';
            contador++;
		}
		p = p -> next;
	}
	p = NULL;
	delete p;
}
void pPrima(List &l,char *n,char *pe){
    node *p = new node;
    int contador1 = 0;
    int contador2 = 0;
    p = l.init;

    while(p){
        if(p -> simbolo == n[contador1]){
            pe[contador2] = p -> simbolo;
            contador2++;
            pe[contador2] = retornarTerminales(p);
            contador2++;
            pe[contador2] = ',';
            contador2++;
        }
        contador1++;
        p = p-> next;
    }
}
char *reiniciar(char *c){
		for(int j = 0;j <= 15;j++){
   			 c[j] = '\0';
		}
		return c;
}
int contar(char *c){
	int contador = 0;

	for(int i = 0;c[i] != '\0';i++){
		contador++;
	}
//printf("%i\n",contador);
	return contador;
}
char *buscarProducciones(node *p,char *n){
    char *producciones = new char[15];
    char *retorno = new char[3];
    int contador = 0;
    int k = 0;
    bool ok = false;
    bool yeah = false;
    bool encontrado = false;
    producciones = p -> productions;
    /*printf("%c\n",p -> simbolo);
    printf("%s\n",p -> productions);
    printf("N':%s\n", n);*/
    retorno = reiniciar(retorno);

    for(int i = 0;producciones[i] != '\0';i++){
        if(producciones[i] == '|'){
          
             //printf("\n [%s]\n",retorno);
            if(ok == true){
            	//printf("no ta\n");
            	if(yeah == true)contador = contar(retorno) -1;
            	else contador = 0;
            	ok = false;
            }
            else{
            	yeah = true;
            	retorno[contador] = ',';
            	contador++;
            }
        }
        else if(producciones[i] == toupper(producciones[i])){
        	//printf("{%c}\n",producciones[i] );
	                while(n[k] != '\0' && encontrado != true){
	                	//printf("[%c,]",n[k]);
		                	if(n[k] != ','){
				                    if(producciones[i] == n[k]){
				                    	//if(ok == true)ok = false;
				                    	encontrado = true;
				                       //printf("%c pos si ta\n",n[k]);
				                        retorno[contador] = n[k];
				                        contador++;
				                    }
			                    else {
				                       	ok = true;
				                       	//printf("%c pos no esta, {%c}\n",producciones[i],n[k]);
				                    }
			                }
			            k++;    	
	                }
	                k = 0;
	                if(encontrado == true)ok = false;
	                encontrado = false;
        }
        else{
        	retorno[contador] = producciones[i];
        	contador++;
            //printf("%c minusculas\n",producciones[i]);
        }
  }
  	if( ok == true && yeah == false)retorno = reiniciar(retorno);
   /* printf("<-------------[%s]------------->",retorno);
    printf("\n\n");*/
    	return retorno;
}
void buscandoEnPeprima(node *p,char *n,char *pe,char *produccion){
	int contadorPePrima = contar(pe);
	int contadorEnePrima  = contar(n);
	int posicion = 0;
	int i = 0;
	int j = 0;
	int x = 0;
	int l = 0;
	bool ok = false;
	bool yeah = false;
	bool unaVez = false;
	/*printf("N': %s\n",n);
	printf("Pe': %s\n",pe);
	printf("Generador;%c\n",p -> simbolo);
	printf("Produccion; %s\n",produccion);*/
	
   if(contar(pe) != 20){
				while(pe[i] != '\0'){
					//printf("{{%c}}\n",pe[i]);
					if(pe[i] == p -> simbolo){
						posicion = i;
						yeah = true;
					 }
					 else{
					 	j = i;
						 while(pe[j] != ','){
						 	j++;
						 }
						}	
					 i = j;
					i++;
				}

		if(yeah  == true){
			//printf("si esta\n");
			if(produccion[0] != '\0'){
			//buscar si la produccion ya esta !!
			    for(int j = 0;produccion[j] != '\0';j++){
				   //printf("*produccion %c, l: %i\n",produccion[l],l);
				   if(produccion[j] != ','){
				   	//l--;
				   //unaVez = true;
				   }
				    if(produccion[j] != ','){
				    	 //printf("**produccion %c, l: %i\n",produccion[l],l);
						for(int k = posicion +1;pe[k] != ',';k++){
							while(produccion[l] != ',' && produccion[l] != '\0'){
								//printf(" :{%c},{%c}\n",pe[k],produccion[l]);
									if(pe[k] == produccion[l])ok = true;
									//else if(produccion)
									else ok = false;

									
									l++;
						    }
						    //printf("produccion %c, ele: %i\n",produccion[l],l);
						}
						if(ok == false){

							for(int i = 0;produccion[i] != ',';i++){
								if(produccion[i] == ','){
									pe[contadorPePrima] = ',';
									contadorPePrima++;
									pe[contadorPePrima] = p -> simbolo;
									contadorPePrima++;
								}
								else{
									pe[contadorPePrima] = produccion[i];
									contadorPePrima++;
								}
							}
					 	}
					}
				l++;
					if(produccion[l] == 'D'){
						pe[contadorPePrima] = ',';
						contadorPePrima++;
						pe[contadorPePrima] = p -> simbolo;
						contadorPePrima++;
						pe[contadorPePrima] = produccion[l];
						contadorPePrima++;
					}
				}
			}
		}
		else {
			//printf("no esta\n");
			if(produccion[0] != '\0'){
				n[contadorEnePrima] = p -> simbolo;
				contadorEnePrima++;
				n[contadorEnePrima] = ',';
				contadorEnePrima++;
				pe[contadorPePrima] = p -> simbolo;
				contadorPePrima++;
				for(int i = 0;produccion[i] != '\0';i++){
					if(produccion[i] == ','){
						pe[contadorPePrima] = ',';
						contadorPePrima++;
						pe[contadorPePrima] = p -> simbolo;
						contadorPePrima++;
					}
					else{
						pe[contadorPePrima] = produccion[i];
						contadorPePrima++;
					}
				}
				pe[contadorPePrima] = ',';
				contadorPePrima++;

			}
		}
	}
	//printf("Pe': %s\n",pe);
	//printf("contando PE %i\n",contar(pe));
	//printf("<--------------- todo chido hasta qui en el Glc.cpp---------------->\n");
}
void pasoTres(List &l, char *n,char *pe){
    node *p = new node;
    char *produccion = new char[3];
    p = l.init;
    //p = p -> next;

   		while(p){
             produccion = buscarProducciones(p,n);
             //printf("[%c,%s]\n",p -> simbolo,produccion);
             //buscar si la produccion ya se encuentra en P'
          	 buscandoEnPeprima(p,n,pe,produccion);
             p = p-> next;
        }
/*printf("<------------- primer siclo shido -------------->\n");
		p = l.init;

		while(p){
			produccion = buscarProducciones(p,n);
			//printf("[%c,%s]\n",p -> simbolo,produccion);
			buscandoEnPeprima(p,n,pe,produccion);
			printf("P':%s\n",pe);
			p = p-> next;
		}*/
}
void print(List &l){
	node *p = new node;
    p = l.init;

	while(p){
		printf("%c -> ",p -> simbolo);
		if(p -> productions != NULL)printf("%s",p -> productions);
		printf("\n");
		p = p -> next;
	}
	delete p;
}

