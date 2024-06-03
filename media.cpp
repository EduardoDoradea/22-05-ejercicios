#include <iostream>
using namespace std;

int suma(int entero1, int entero2){
int resultado = 0;
resultado = (entero1 + entero2);
return resultado;
}
float division(int entero1, int entero2){
float resultado = 0;
resultado = float(entero1)/float(entero2);
return resultado;
}

float media(int entero1, int entero2){
float resultado = 0;
resultado = (entero1 + entero2)/2;
return resultado;   
}

int main(){
int num1 = 0, num2 = 0, resulmedia = 0;

cout<<"Ingrese los numeros que quiere conocer la media: "<<"\n";
cin>>num1>>num2;

resulmedia = media(num1, num2);

cout<<"El resultado de la media es: "<<resulmedia;


    return 0;
}