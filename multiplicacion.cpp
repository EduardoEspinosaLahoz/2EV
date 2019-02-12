#include<iostream>
using namespace std;

float multiplicacion(float num1 ,float num2 ,float num3 ,float num4){
    float respuesta;
    respuesta= num1*num2*num3*num4;
    return(respuesta);
    
}
int main(){
    float num1,num2,num3,num4;
    char salir;
    cout<<"Introduce un numero distinto de 0: ";
    do{
    cin>>num1;
    if(num1==0){
                cout<<"\nIntroduce un numero distinto de 0";
                      }
    }while(num1==0);
    
    cout<<"Introduce otro numero distinto de 0: ";
    do{
    cin>>num2;
    if(num2==0){
                cout<<"\nIntroduce un numero distinto de 0";
                      }
    }while(num2==0);
    
    cout<<"Introduce otro numero: ";
    do{
    cin>>num3;
    if(num3==0){
                cout<<"\nIntroduce un numero distinto de 0";
                      }
    }while(num3==0);
    
    cout<<"Introduce otro numero mas: ";
    do{
    cin>>num4;
    if(num4==0){
                cout<<"\nIntroduce un numero distinto de 0";
                      }
    }while(num4==0);
    
    cout<<"\nEl resultado es: "<<multiplicacion(num1,num2,num3,num4);
    cout<<"\nToca cualquier tecla para salir:  ";
    cin>>salir;
    return 0;
}
