#include <iostream>
using namespace std;

/*
Escriba un programa que al ingresar la edad de un usuario y que indique si es 
mayor de edad o no. 
*/
int main(){
int edad; //Se declara la variable edad.

cout<<"Digite su edad: "; //Se muestra en pantalla lo que solicita y tambien se guarda el valor que dio el usuario.
cin>>edad;

if(edad>=18){ //Se hace una condicion si edad es mayor o igual de 18 entonces es mayor de edad.

cout<<"Usted es mayor de edad. ";

}   else{ //Si no cumple la condicion se le muestra en pantalla que es menor de edad.

    cout<<"Usted es menor de edad. ";
}

    return 0;
}