#include <iostream>
#include <string>
using namespace std;


struct datosContinente{
    char pais[50];
    char capital[50];
     long int habitantes;
};


void continenteAmericano(){
    typedef struct datosContinente Datos;
    Datos nuevo[5];
    cout << "*---------------------*" << endl;
    cout << " CONTINENTE AMERICANO:" << endl;
    cout << "*---------------------*" << endl;
    for(int i = 0; i < 5; i++){
        fflush(stdin);
        cout << "Ingrese el nombre del pais numero " << i+1 << ":" << endl;
        cin.getline(nuevo[i].pais,50);
        cout << "Ingrese la capital del pais numero " << i+1 << ":" << endl;
        cin.getline(nuevo[i].capital,50);
        cout << "Ingrese los habitantes del pais numero " << i+1 << ":" << endl;
        cin >> nuevo[i].habitantes;
    }
    for(int i = 0; i < 5; i++){
        cout <<"*-------------*" << endl;
        cout <<  nuevo[i].pais << endl;
        cout <<"*-------------*" << endl;
        cout << "Capital: " << nuevo[i].capital << endl;
        cout << "Numero de habitantes: " << nuevo[i].habitantes << endl;

    }

}


void continenteEuropeo(){
    typedef struct datosContinente Datos;
    Datos nuevo[5];
    cout << "*---------------------*" << endl;
    cout << " CONTINENTE EUROPEO:" << endl;
    cout << "*---------------------*" << endl;
    for(int i = 0; i < 5; i++){
        fflush(stdin);
        cout << "Ingrese el nombre del pais numero " << i+1 << ":" << endl;
        cin.getline(nuevo[i].pais,50);
        cout << "Ingrese la capital del pais numero " << i+1 << ":" << endl;
        cin.getline(nuevo[i].capital,50);
        cout << "Ingrese los habitantes del pais numero " << i+1 << ":" << endl;
        cin >> nuevo[i].habitantes;
    }
    for(int i = 0; i < 5; i++){
        cout <<"*-------------*" << endl;
        cout <<  nuevo[i].pais << endl;
        cout <<"*-------------*" << endl;
        cout << "Capital: " << nuevo[i].capital << endl;
        cout << "Numero de habitantes: " << nuevo[i].habitantes << endl;

    }

}

void continenteAfricano(){
    typedef struct datosContinente Datos;
    Datos nuevo[5];
    cout << "*---------------------*" << endl;
    cout << " CONTINENTE AFRICANO:" << endl;
    cout << "*---------------------*" << endl;
    for(int i = 0; i < 5; i++){
        fflush(stdin);
        cout << "Ingrese el nombre del pais numero " << i+1 << ":" << endl;
        cin.getline(nuevo[i].pais,50);
        cout << "Ingrese la capital del pais numero " << i+1 << ":" << endl;
        cin.getline(nuevo[i].capital,50);
        cout << "Ingrese los habitantes del pais numero " << i+1 << ":" << endl;
        cin >> nuevo[i].habitantes;
    }
    for(int i = 0; i < 5; i++){
        cout <<"*-------------*" << endl;
        cout <<  nuevo[i].pais << endl;
        cout <<"*-------------*" << endl;
        cout << "Capital: " << nuevo[i].capital << endl;
        cout << "Numero de habitantes: " << nuevo[i].habitantes << endl;

    }

}


void continenteAsia(){
    typedef struct datosContinente Datos;
    Datos nuevo[5];
    cout << "*---------------------*" << endl;
    cout << " CONTINENTE ASIATICO:" << endl;
    cout << "*---------------------*" << endl;
    for(int i = 0; i < 5; i++){
        fflush(stdin);
        cout << "Ingrese el nombre del pais numero " << i+1 << ":" << endl;
        cin.getline(nuevo[i].pais,50);
        cout << "Ingrese la capital del pais numero " << i+1 << ":" << endl;
        cin.getline(nuevo[i].capital,50);
        cout << "Ingrese los habitantes del pais numero " << i+1 << ":" << endl;
        cin >> nuevo[i].habitantes;
    }
    for(int i = 0; i < 5; i++){
        cout <<"*-------------*" << endl;
        cout <<  nuevo[i].pais << endl;
        cout <<"*-------------*" << endl;
        cout << "Capital: " << nuevo[i].capital << endl;
        cout << "Numero de habitantes: " << nuevo[i].habitantes << endl;

    }

}

void continenteOceania(){
    typedef struct datosContinente Datos;
    Datos nuevo[5];
    cout << "*---------------------*" << endl;
    cout << " CONTINENTE OCEANICO:" << endl;
    cout << "*---------------------*" << endl;
    for(int i = 0; i < 5; i++){
        fflush(stdin);
        cout << "Ingrese el nombre del pais numero " << i+1 << ":" << endl;
        cin.getline(nuevo[i].pais,50);
        cout << "Ingrese la capital del pais numero " << i+1 << ":" << endl;
        cin.getline(nuevo[i].capital,50);
        cout << "Ingrese los habitantes del pais numero " << i+1 << ":" << endl;
        cin >> nuevo[i].habitantes;
    }
    for(int i = 0; i < 5; i++){
        cout <<"*-------------*" << endl;
        cout <<  nuevo[i].pais << endl;
        cout <<"*-------------*" << endl;
        cout << "Capital: " << nuevo[i].capital << endl;
        cout << "Numero de habitantes: " << nuevo[i].habitantes << endl;

    }

}

int main(){

    continenteAmericano();
    continenteEuropeo();
    continenteAfricano();
    continenteAsia();
    continenteOceania();








    return 0;
}