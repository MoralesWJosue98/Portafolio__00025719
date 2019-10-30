#include <iostream>
using namespace std;

struct nodo {
    int dato;
    nodo* sig;
};

void insertarLista(nodo** lista, int dato){
    nodo* nuevo = new nodo;
    nuevo->dato = dato;
    nuevo->sig = NULL;

    nuevo->sig = *lista;
    *lista = nuevo;
}

void separacionLista(nodo** lista, nodo** pares, nodo** impares){
    if(*lista){
        if((*(*lista)).dato % 2 == 0){
            insertarLista(pares, (*(*lista)).dato);
        }
        else{
            insertarLista(impares, (*(*lista)).dato);
        }
        *lista = ((*lista))->sig;
        separacionLista(lista, pares, impares);
    }
}

void impresion(nodo* lista){
    if (lista){
        cout << lista->dato << " ";
        impresion(lista->sig);
    }
}

int main(void){
    nodo* pInicio = NULL, *lPares = NULL, *lImpares = NULL;
    int dato;
    cout << "INGRESE LOS DATOS DE LA LISTA " << endl;
    cout << "Si desea salir, presione 0." << endl;
    cin >> dato;

    while(dato != 0){
        nodo* nuevo = new nodo;
        nuevo->dato = dato;
        nuevo->sig = NULL;

        nuevo->sig = pInicio;
        pInicio = nuevo;
        cin >> dato;
    }
    cout << "Lista normal: " << endl;
    impresion(pInicio);

    separacionLista(&pInicio, &lPares, &lImpares);
    cout << endl << "Lista pares: " << endl;
    impresion(lPares);

    cout << endl << "Lista impares: " << endl;
    impresion(lImpares);

    return 0;
}


