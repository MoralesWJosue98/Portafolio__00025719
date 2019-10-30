#include <iostream>
using namespace std;

void juego(int num,char a, char c, char b)
{
    if(num==1)
    {
        cout<<"Mueva el bloque "<< num <<" desde "<<a<<" hasta  "<< c <<endl;

    }
    else
    {
        juego(num-1,a,b,c);
        cout<<"Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
        juego(num-1,b,c,a);
    }
}

int main()
{
    int n;
    char a,b,c;

    cout<<"Los clavijas son A B C"<<endl;
    cout<<"Numero de discos: ";
    cin>>n;
    juego(n,'a','c','b');

    return 0;

}