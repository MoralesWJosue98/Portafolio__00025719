#include <iostream>
using namespace std;
struct nodo{
    int num;
    struct nodo *sig;
};

struct cola{
    nodo *delante;
    nodo *detras;
};

void agg(struct cola *p, int x){
    struct nodo *aux= new struct nodo;
    aux->num = x;
    aux->sig = NULL;

    if(p->delante == NULL){
        p->delante = aux;
    }
    else{
        (p->detras)->sig = aux;
    }
    p->detras = aux;
}

void Cola(struct cola p){
    struct nodo *aux;
    aux = p.delante;
    while(aux != NULL){
        cout<< "  " << aux ->num;
        aux = aux->sig;
    }
}

int main(){
    struct cola p;

    p.delante = NULL;
    p.detras = NULL;

    int x = 0;
    int op = 0;
    do{
    cout << endl;
    cout << "1) Encolar numero" << endl;
    cout << "2) Mostrar cola" << endl;
    cout << "3) Finalizar" << endl;
    cin >> op;

        switch (op) {
            case 1:
                cout << "Numero a encolar: " << endl;
                cin >> x;
                agg(&p, x);
                cout << "Numero " << x << " encolando..." << endl;
                break;
            case 2:
                cout << "Mostrando cola: " << endl;
                if (p.delante != NULL) {
                    Cola(p);
                } else {
                    cout << "Cola vacia! " << endl;
                }
        }
    }while(op != 3);


    return 0;
}



















