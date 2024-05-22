#include <iostream>
using namespace std;

/*Desarrolle un programa que considere las siguientes reglas: 
Un ángulo se considera agudo si es menor de 90°, obtuso si es mayor de 90° y 
recto si es igual a 90°.
El programa debe de solicitarle a un usuario que ingrese un ángulo en grados y 
que le muestre un mensaje de que tipo de ángulo es. */

int main(){
float angulo = 0.00; //Declaracion de variables "angulo".


cout<<"Ingrese un angulo en grados para conocer si es agudo, obtuso o recto: "<<"\n";
cin>>angulo; //Se le solicita al usuario el angulo al usuario y se guarda.

if(angulo<90){ //Se crea una condicion para conocer si es un agudo obtuso o recto.
    cout<<"El angulo que usted digito es agudo. "<<angulo<<"°";
} else if(angulo==90){
    cout<<"El angulo que usted digito es recto. "<<angulo<<"°";
} else{ 
    cout<<"El angulo que usted digito es obtuso. "<<angulo<<"°";
}

    return 0;
}