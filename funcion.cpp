#include <iostream>
using namespace std;

int suma(int entero1, int entero2){
int resultado = 0;
resultado = (entero1 + entero2);
return resultado;
}
int resta(int entero1, int entero2){
int resultado = 0;
resultado = (entero1 - entero2);
return resultado;
} 
int multiplicacion(int entero1, int entero2){
int resultado = 0;
resultado = (entero1*entero2);
return resultado;
}
float division(int entero1, int entero2){
float resultado = 0;
resultado = float(entero1)/float(entero2);
return resultado;
}

int main(){
int n1 = 0, n2 = 0, respuestasu = 0, respuestare = 0, respuestamul = 0;
float  respuestadiv = 0;

cout<<"Ingrese los dos numeros: "<<"\n";
cin>>n1>>n2;

respuestasu = suma(n1, n2);

cout<<"El resultado de la suma es: "<<respuestasu<<"\n";

respuestare = resta(n1, n2);

cout<<"El resultado de la resta es: "<<respuestare<<"\n";

respuestamul = multiplicacion(n1, n2);

cout<<"El resultado de la multiplicacion es: "<<respuestamul<<"\n";

respuestadiv = division(n1, n2);

cout<<"El resultado de la division es: "<<respuestadiv<<"\n";

return 0;
}