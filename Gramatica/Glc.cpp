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
	char *prod = new char[50];
	    printf("Ingresa las producciones de %c [separadas por '|']\n",p -> simbolo);
		printf("[ Producciones minusculas ]\n");
		gets(prod);

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
void nPrima(List &l,List &n){
	node *p = new node;
	p = l.init;

	while(p){
		if(encontrarTerminales(p) == true){
			//printf("%c produccion con terminales\n",p -> simbolo);
			insert(n,p -> simbolo);
		}
		p = p -> next;
	}
	p = NULL;
	delete p;
}
void pPrima(List &l,List &n){
	node *p = new node;
	node *q = new node;
	p = l.init;
	q = n.init;

	while(p){
		//printf("%c\n",p -> simbolo);
		while(q){
			if(p -> simbolo == q -> simbolo){
				printf("{%c},[%c]\n",p -> simbolo,q -> simbolo);
				printf("%c\n",retornarTerminales(p));
			}
			//printf(" ->%c\n",q -> simbolo);
			q = q -> next;
		}
		p = p -> next;
	}
		
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