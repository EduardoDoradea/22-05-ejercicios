#include <iostream>
using namespace std;
//Solicite el nombre del usuario y las notas y sacar el promedio.

int main(){
float promedio = 0.0;
float notas[6];

for(int i = 0; i<6; i++){
    cout<<"Ingrese las notas para conocer su promedio: ";
    cin>>notas[i];
promedio = promedio + notas[i];
}
promedio = promedio / 6;
    cout<<"El promedio es: "<<promedio<<"\n";


return 0;
}