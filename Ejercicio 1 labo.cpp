#include <iostream>
using namespace std;
int a, b = 0;

int mcd(int a, int b){
    if(a > b){
        if(a % b == 0){
            return b;
        }
        else{
            return mcd(b, a%b);
        }
    }
    else{
        if(b % a == 0){
            return a;
        }
        else{
            return mcd(a, b%a);
        }
    }
}

int main(){
    cout << "Ingrese dos numeros " << endl;
    cout << "Primer numero: "; cin >> a;
    cout << "Segundo numero: "; cin >> b;
    cout << "El mcd es: " << mcd(a,b);


    return 0;
}