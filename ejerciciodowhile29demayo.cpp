#include <iostream>
using namespace std;

/**/

int main(){
    int num = 0, pares = 0, impares = 0;
    
    do{
        cout<<"Digite un numero entero: (Digita 0 para salir)"<<"\n";
        cin>>num;

        if((num%2 == 0) && num!=0){
        pares++;
        }else if(num%2 == 1){
        impares++;   
        }
    }while(num!=0);

    cout<<"Cantidad de numeros pares es "<<pares<<"\n";
    cout<<"Cantidad de numeros impares es "<<impares<<"\n";

    return 0;
}


