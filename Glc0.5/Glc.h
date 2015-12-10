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
void nPrima(List&, char *);
void pPrima(List&,char *,char *);
char *reiniciar(char *);
int contar(char *);
bool buscarGeneradorEnPePrima();
char *buscarProducciones(node *,char *);
void buscandoEnPeprima(node *,char *,char *,char *);
void pasoTres(List&,char *,char *);

void print(List&);


#endif
