#include "stack.h"
#include <cstdio>
#include <iostream>

using namespace std;

stack::stack(){
  raiz = NULL;
}
void stack::push(string c){
  Nodo *nuevo;
  nuevo = new Nodo();
  nuevo -> data = c;
    if(raiz == NULL){
      raiz = nuevo;
      nuevo -> next = NULL;
    }
    else{
      nuevo -> next = raiz;
      raiz = nuevo;
    }
}
void stack::print(){
  Nodo *p = raiz;
  printf("Lista de elementos en la pila\n");
    while(p != NULL){
      cout <<p -> data<<"\n";
      p = p -> next;
    }
}
bool stack::empty(){
  if(raiz == NULL)return true;
  else return false;
}
string stack::pop(){
  if(raiz != NULL){
    string cadena = raiz -> data;
    Nodo *aux = raiz;
    raiz = raiz -> next;
    delete aux;
    return cadena;
  }
  else{
    return "empty";
  }
}
stack::~stack(){
  Nodo *p = raiz;
  Nodo *aux;
    while(p != NULL){
      aux = p;
      p = p -> next;
      delete aux;
    }
}
