#include <iostream>
#include <cmath>
using namespace std;

struct Nodo{
    float exp;
    float coeficiente;
    Nodo *sig;
};
Nodo *pinicio = NULL;

float suma(Nodo *p){
    if(p) {
        return pow(p->coeficiente, p->exp) + suma(p->sig);
    }
    else {
        return 0;
    }
}

int main()
{
    float Exponente= -1;
    float Coeficiente= -1;
    bool continuar = true;
    cout << "Ingrese Coeficiente y Exponente" << endl;

    while(continuar){
        cout << "Coeficiente: " << endl;
        cin >> Coeficiente;
        cout << "Exponente: " << endl;
        cin >> Exponente;

        Nodo *nuevo = new Nodo;
        nuevo->coeficiente = Coeficiente;
        nuevo->exp = Exponente;

        nuevo->sig = pinicio;
        pinicio = nuevo;
        cout << "Desea insertar otro numero?" << endl;
        cout << "1) Si." << endl;
        cout << "0) No." << endl;
        cin >> continuar;
    }
    cout << "La suma es: " << suma(pinicio);
}