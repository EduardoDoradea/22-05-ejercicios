#include <iostream>
using namespace std;

/*
Escriba un programa que al ingresar la edad de un usuario y que indique si es 
mayor de edad o no. 
*/
int main(){
int edad;

cout<<"Digite su edad: ";
cin>>edad;

if(edad>=18){
cout<<"Usted es mayor de edad. ";
}   else{
    cout<<"Usted es menor de edad. ";
}




    return 0;
}