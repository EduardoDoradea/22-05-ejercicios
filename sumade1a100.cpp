#include <iostream>
using namespace std;

//Hacer con for y un array que te sume del 1 al 100 y que muestre el resultado.
int main(){
int suma =0;
int numeros[100];

for(int i = 0; i<100; i++){
    cout<<i <<"\n";
    numeros[i]=i+1;
suma = suma + numeros[i];
}
cout<<"La suma de todos los numeros es: "<<suma;

    return 0;
}
