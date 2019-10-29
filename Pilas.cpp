#include <iostream>
using namespace std;

struct Tpila{
    float elementos[100];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s -> top = -1;
}

bool empty(Pila *s){
    return s->top < 0;
}

void push(Pila *s, float e){
    if(s->top < 99){
        (s->top)++;
        s->elementos[s->top] = e;
    }
}

void pop(Pila *s, float *e) {
    if (s->top >= 0) {
        *e = s->elementos[s->top];
        (s->top)--;
    }
}

float intacto(Pila *s){
    float x[100];
    float y = 0;
    y = s->top;
    while(!empty(s)){
        pop(s, &x[s->top]);
    }
    for(int i=0; i < y; i++){
        push(s, x[i]);
    }
    return x[0];
}

float obtenerUltimo(Pila *s){
    float x;
    while(!empty(s)){
        pop(s, &x);
        }
        return x;
    }


int main(){
    Pila unaPila;
    initialize(&unaPila);
    push(&unaPila, 6);
    push(&unaPila, 9);
    push(&unaPila, 3);
    push(&unaPila, 8);
    push(&unaPila, 1);

    float ultimo = intacto(&unaPila);
    cout << "Ultimo elemento: " << ultimo << endl;
    cout << "Los elementos de la pila son: " << endl;
    for(int i = 0; i < unaPila.top; i++){
        cout << unaPila.elementos[i] << endl;
    }

    ultimo = obtenerUltimo(&unaPila);
    cout << "Ultimo elemento de la pila:" <<  ultimo << endl;
    if(empty(&unaPila)){
        cout << "La pila esta vacia" << endl;
    }




    return 0;
}




















