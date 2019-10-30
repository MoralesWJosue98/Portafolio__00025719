#include <iostream>
using namespace std;

int datos(int n) {
    if (n < 10) {
        return 1;
    }
    else {
        return 1 + datos(n / 10);
    }
}

int main() {
    int valor;

    cout << "Ingrese el numero: ";
    cin >> valor;
    int r = datos(valor);

    cout << "el numero tiene: " << r << " digitos.";

    return 0;
}