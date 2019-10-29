#include <iostream>
using namespace std;

struct nodo{
    float elemento;
    struct nodo *siguiente;
};
typedef struct nodo *Pila;

void initialize(Pila *s){
    *s = NULL;
}

bool empty(Pila *s){
    return *s == NULL;
}

void push(Pila *s, float e){
    struct nodo *unNodo;
    unNodo = (struct nodo *)malloc(sizeof(struct nodo));
    unNodo->elemento = e;
    unNodo->siguiente = *s;
    
    *s = unNodo;
    cout << "Valores de la pila: " << e << endl;
}

float pop(Pila *s){
    if(!empty(s)){
        struct nodo *unNodo = *s;
        float e = (*s)->elemento;
        *s = (*s)->siguiente;
        delete(unNodo);
        return e;
    }
    else{
        cout << "Underflow!" << endl;
        return -1;
    }
}

float top(Pila *s){
    if(!empty(s)){
        float e = (*s)->elemento;
        return e;
    }
    else{
        cout << "Underflow!" << endl;
        return -1;
    }
}

int main(){
    Pila unaPila;
    initialize(&unaPila);
       cout << "Contenido de unaPila: " << unaPila << endl;
    
    cout << endl << "PUSH" << endl;
    push(&unaPila, 1);
    push(&unaPila, 2);
    push(&unaPila, 3);
    push(&unaPila, 4);
    push(&unaPila, 5);
 
  
    cout << endl << "TOP" << endl;
    cout << "top: " << top(&unaPila) << endl;
    
    cout << endl << "POP" << endl;
    cout << "pop: " << pop(&unaPila) << endl;
    int i = pop(&unaPila);
    cout << "pop: " << i << endl;
  
    
    
	cout << endl << "Elemento eliminado" << endl;
	cout << i;  

	

    return 0;
}