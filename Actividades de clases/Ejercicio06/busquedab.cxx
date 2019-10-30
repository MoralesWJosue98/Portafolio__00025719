#include <iostream>
using namespace std;

int a[ ]  {1,3,4,5,17,18,31,33};

int funcion(int x, int l, int h){
		if( l > h){
			return (-1);
		}
		int mid = (l + h) / 2;
		if( x ==  a [mid] )
		return (mid);
		else if(x < a [mid]){
			return funcion(x, l, mid - 1 );
		}
		else
		return funcion(x, mid + 1, h);		
		
	}	



int main(){
	int low, x = 0;
	int high = 7;
	cout << "Ingrese un numero entero positivo " << endl;
	cin >> x;
	int i = funcion(x, low, high);
	if( i == -1){
		cout << "El elemento no se encontro " << endl;
	}
	else{
		cout << "La posicion de elemento es: " << i << endl;
	}
	
	
	
	return 0;
}