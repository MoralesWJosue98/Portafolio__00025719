#include <iostream>
#include <string>
using namespace std;


struct datosContinente{
    char pais[50];
    char capital[50];
    long int habitantes;
};

struct Sumatoria{
    long int America;
    long int Europa;
    long int Africa;
    long int Asia;
    long int Oceania;
};


void continenteAmericano(){
   long int accAmerica = 0;
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
        accAmerica += nuevo[i].habitantes;
    }
    for(int i = 0; i < 5; i++){
        cout <<"*-------------*" << endl;
        cout <<  nuevo[i].pais << endl;
        cout <<"*-------------*" << endl;
        cout << "Capital: " << nuevo[i].capital << endl;
        cout << "Numero total de habitantes: " << nuevo->habitantes << endl;
        cout << "Numero total de habitantes del continente: " << accAmerica << endl;

    }

}


void continenteEuropeo(){
    long int accEuropa = 0;
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
        accEuropa += nuevo[i].habitantes;
    }
    for(int i = 0; i < 5; i++){
        cout <<"*-------------*" << endl;
        cout <<  nuevo[i].pais << endl;
        cout <<"*-------------*" << endl;
        cout << "Capital: " << nuevo[i].capital << endl;
        cout << "Numero de habitantes: " << nuevo[i].habitantes << endl;
        cout << "Numero total de habitantes del continente: " << accEuropa << endl;

    }

}

void continenteAfricano(){
    long int accAfrica = 0;
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
        accAfrica += nuevo[i].habitantes;
    }
    for(int i = 0; i < 5; i++){
        cout <<"*-------------*" << endl;
        cout <<  nuevo[i].pais << endl;
        cout <<"*-------------*" << endl;
        cout << "Capital: " << nuevo[i].capital << endl;
        cout << "Numero de habitantes: " << nuevo[i].habitantes << endl;
        cout << "Numero total de habitantes del continente: " << accAfrica << endl;
    }

}


void continenteAsia(){
    long int accAsia = 0;
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
        accAsia += nuevo[i].habitantes;
    }
    for(int i = 0; i < 5; i++){
        cout <<"*-------------*" << endl;
        cout <<  nuevo[i].pais << endl;
        cout <<"*-------------*" << endl;
        cout << "Capital: " << nuevo[i].capital << endl;
        cout << "Numero de habitantes: " << nuevo[i].habitantes << endl;
        cout << "Numero total de habitantes del continente: " << accAsia << endl;
    }

}

void continenteOceania(){
    long int accOceania = 0;
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
        accOceania += nuevo[i].habitantes;
    }
    for(int i = 0; i < 5; i++){
        cout <<"*-------------*" << endl;
        cout <<  nuevo[i].pais << endl;
        cout <<"*-------------*" << endl;
        cout << "Capital: " << nuevo[i].capital << endl;
        cout << "Numero de habitantes: " << nuevo[i].habitantes << endl;
        cout << "Numero total de habitantes del continente: " << accOceania << endl;
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