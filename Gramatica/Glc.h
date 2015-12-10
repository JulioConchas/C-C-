#ifndef __Glc_
#define __Glc_

typedef struct snode{
	char simbolo;
	snode *next;
	char *productions;
}node;
typedef struct tList {
	node *init;
}List;

void start(List&);
bool insert(List&,char);
char *insertProd(node *);
void inProductions(List&);
bool encontrarTerminales(node *);
char retornarTerminales(node *);
void nPrima(List&,List&);
void pPrima(List&,List&);
void print(List&);
bool borrado(List&);


#endif