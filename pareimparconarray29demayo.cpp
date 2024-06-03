#include <iostream>
using namespace std;

/**/

int main(){
    int indicepar = 0, indiceimpar = 0;
    int num = 0, pares[100] = {}, impares[100] = {};
    
    do{
        cout<<"Digite un numero entero: (Digita 0 para salir)"<<"\n";
        cin>>num;

        if((num%2 == 0) && num!=0){
        pares[indicepar] = num;
        indicepar++;
        }else if(num%2 == 1){
        impares[indiceimpar] = num;
        indiceimpar++;   
        }
    }while(num!=0);

    cout<<"Resultados: "<<"\n";
    cout<<"Cantidad de pares: "<<indicepar<<"\n";
    cout<<"Cantidad de impares: "<<indiceimpar<<"\n";

    for(int i=0; i<=indicepar; i++){
        cout<<pares[i]<<" "<<"\n";
    }
    for(int j=0; j>indiceimpar; j++){
        cout<<impares[j]<<" "<<"\n";
    }

    return 0;
}
