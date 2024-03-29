#include <iostream>
using namespace std;

struct TNodo{
    int dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;
int par = 0, impar = 0;

void insertar(int num){
    Nodo *nuevo = new Nodo;
    nuevo->dato = num;
    nuevo->sig = NULL;

    if(pInicio == NULL){
        pInicio = nuevo;
    }
    else{
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while(p != NULL){
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void suma(Nodo *p){
    Nodo *s = p;

    if(s == NULL){
        return;
    }
    else{
        if((s->dato) % 2 == 0)
            par += (s->dato);
        else
            impar += (s->dato);
        suma(s->sig);
    }
}

int main(){
    int n;
    bool continuar = true;
    do{
        cout << "MENU:" << endl;
        cout << "1) Agregar numero a la lista" << endl;
        cout << "2) Sumas los numeros pares y los impares." << endl;
        cout << "3) Salir..." << endl;
        cout << "Ingrese su opcion:";
        cin >> n;

        switch(n){
            case 1:
                cout << "Ingrese un numero: " << endl;
                cin >> n;
                insertar(n);
                break;
            case 2:
                suma(pInicio);
                cout << "La suma de los pares es: " << par << endl;
                cout << "La suma de los impares es: " << impar << endl;
                par = 0;
                impar = 0;
                break;
            case 3:
                continuar = false;
            default:
                cout<<"Adios!" << endl;
        }
    }while(continuar);

    return 0;
}