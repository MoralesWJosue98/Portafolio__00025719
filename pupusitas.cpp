#include <iostream>
using namespace std;

struct Orden{
    int revueltas;
    int fq;
    int q;
    bool arroz;
};
typedef struct Orden orden;

orden  solicitarOrden(){
    orden o;
    cout << "Revueltas: "; cin >> o.revueltas;
    cout << "Frijol con Queso: "; cin >> o.fq;
    cout << "Queso: "; cin >> o. q;
    cout << "Pupusas de arroz?: \n\t1 para SI \n\t2 para NO "; cin >> o.arroz;
    return o;
}

void mostrarOrden(orden o){
    cout << "Revueltas: " << o.revueltas << endl;
    cout << "Frijol con Queso: " << o.fq << endl;
    cout << "Queso: " << o.q << endl;
    if(o.arroz == 1){
        cout << "Pupusitas de arroz" << endl;
    }
    else{
        cout << "Pupusitas de maiz" << endl;
    }
}

struct Tnodo{
    orden dato;
    struct Tnodo *sig;
};
typedef struct Tnodo Nodo;
Nodo *pInicio;

void inicio(orden o){
    Nodo *nuevo = new Nodo;
    nuevo ->dato = o;
    nuevo->sig = pInicio;

    pInicio = nuevo;
}

void final(orden o){
    Nodo *nuevo = new Nodo;
    nuevo->dato = o;
    nuevo->sig = NULL;
    if(pInicio == NULL){
        pInicio = nuevo;
    }
    else{
        Nodo *o = pInicio;
        Nodo *q =  NULL;
        while(o != NULL){
            q = o;
            o = o->sig;
        }
        o->sig = nuevo;
    }
}

void agregarOrden(){
    orden o = solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
             << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1:
                inicio(o);
                continuar = false;
                break;
            case 2:
                final(o);
                continuar = false;
                break;
            default:
                cout << "Error!" << endl;
                break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while(s !=NULL){
        mostrarOrden(s->dato);
        s = s->sig;
    }
}

int main(){
    cout << "Inicializando..." << endl;

    pInicio = NULL;

    bool continuar = true;
    do{
        int op = 0;
        cout << "1) Agregar pedidos" << endl;
        cout << "2) Ver pedidos" << endl;
        cout << "3) Salir" << endl;
        cin >> op;
        switch(op){
            case 1:
                cout << "Agregando..." << endl;
                agregarOrden();
                break;
            case 2:
                cout << "Abriendo... " << endl;
                mostrarLista();
                break;
            case 3:
                continuar = false;
                break;
            default:
                cout << "Opcion erronea" << endl;
                break;
        }
    }while(continuar);








    return 0;

}