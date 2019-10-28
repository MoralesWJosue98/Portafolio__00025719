#include <iostream>
using namespace std;

float mediana(int *puntero, int n){
    float suma, media = 0;
    if(n % 2 != 0){
        media = (*puntero + (n / 2));
    }
    else{
        suma = ((*puntero + (n / 2)) + *(puntero +(n / 2)) - 1);
        media = suma / 2;
    }
    return media;




}

int main (){
    int n= 0;
    cout << "Digite el tamano del arreglo: ";
    cin >> n;
    cout << "Digite en orden del menor a mayor los datos: " << endl;
    int array[n];
    for(int i = 0; i < n; i++){
        cout << "ingrese el valor del numero[" << i+1 << "]:";
        cin >> array[i];
    }
    for(int i = 0; i < n; i++){
        cout << "numero[" << i + 1 << "]= ";
        cout << array[i] << endl;
    }

    cout << "La mediana de los numeros es: " << mediana(array, n) << endl;














    return 0;
}
