#include <iostream>
using namespace std;

/* Realice un programa que ingresando las notas de 6 evaluaciones. Que calcule 
el promedio final de la materia y le indique si paso o no la materia. Utilizando 
los siguientes porcentajes para evaluar. 
Debe de solicitarle al usuario que ingrese su nombre y cada nota de la 
evaluación. 
Nota: se pasa la materia con 6.0 */

int main(){
float corto1 = 0.00, corto2 = 0.00, parcial1 = 0.00, parcial2 = 0.00, laboratorio = 0.00, proyecto = 0.00;
float resulc1= 0.00,resulc2 = 0.00, resulp1=0.00, resulp2 = 0.00, labo = 0.00, proyec = 0.00, promedio = 0.00;
string nombre;

cout<<"Digite su nombre: "<<"\n";
cin>>nombre;

cout<<"Las notas deben ser ingresadas en numero decimal"<<"\n";

cout<<"Ingrese las notas de los cortos: "<<"\n";
cin>>corto1>>corto2;

cout<<"Ingrese la nota del primer parcial: "<<"\n";
cin>>parcial1;

cout<<"Ingrese la nota del segundo parcial: "<<"\n";
cin>>parcial2;

cout<<"Ingrese la nota del laboratorio: "<<"\n";
cin>>laboratorio;

cout<<"Ingrese la nota del proyecto: "<<"\n";
cin>>proyecto;

//El calculo de los cortos.
resulc1 = (corto1*0.10);
resulc2 = (corto2*0.10);

//El calculo de parcial
resulp1 = (parcial1*0.15);
resulp2 = (parcial2*0.20);

//El calculo de labo.
labo = (laboratorio*0.20);

//El calculo del proyecto.
proyec = (proyecto*0.25);

//Calculo del promedio.
promedio = (resulc1 + resulc2 + resulp1 + resulp2 + labo + proyec);

if(promedio<6){
    cout<<"Usted dejo la materia xD con: "<<promedio;
} else if(promedio>6){
cout<<"Usted paso la materia XD con: "<<promedio;
}
else{ 
    cout<<"Usted paso la materia con: "<<promedio;
}
    return 0;
}