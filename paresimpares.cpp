#include <iostream>
using namespace std;

/*Crear un programa, que solicite el tamaño del arreglo al usuario y que se puedan 
ingresar los números desde teclado y que evalué si un número es par y si es par que 
lo guarde en un arreglo. Y que imprima el arreglo*/

int main(){
int n=0;

cout<<"Ingrese el tamano para el arreglo: ";
cin>>n;

int num[n];
int par[n];
int j=0;

for(int i = 0; i<n; i++){

cout<<"Ingresa un numero entero: ";
cin>>num[i];

if(num[i]%2==0){
    par[j]=num[i];
    j++;}
    }

cout<<"El arreglo original es: ";    
for(int i =0; i<n; i++){
    cout<<num[i]<<"\n";
}
cout<<"Los pares son: ";
for(int k=0; k<j; k++){
    cout<<par[k]<<"\n";
}

    return 0;
}