#include <iostream>
using namespace std;

/* Se sabe que la suma de los ángulos internos de un triángulo suma 180°. 
Realice un programa que le solicite al usuario 2 ángulos y su programa 
devuelva el tercero. */

int main(){
float angulo1, angulo2, suma = 0; //Se declaran las variables que se van a utilizar.

cout<<"Digite los dos angulos internos de un triangulo: "<<"\n"; //Se le solicita al usuario los dos angulos del triangulo.
cin>>angulo1>>angulo2; //Se guardan los angulos ingresados.

suma = (angulo1 + angulo2) - 180; //Se realiza la sumatoria de los angulos ingresados y la diferencia de 180.
cout<<"El tercer angulo del triangulo es: "<<"\n"<<suma; 
 
    return 0;
}