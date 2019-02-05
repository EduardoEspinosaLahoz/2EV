#include<iostream>
int media(float num1,float num2,float num3,float num4){
    float respuesta;
    respuesta=(num1+num2+num3+num4)/4;
    return respuesta;
          }
int main(){
    float num1,num2,num3,num4;
    std::cout<<"\nIntroduce un numero 1: ";
    std::cin>>num1;
    //Leo otro numero entero
    std::cout<<"Introduce otro numero: ";
    std::cin>>num2;
    //Leo otro numero entero
    std::cout<<"Introduce otro numero: ";
    std::cin>>num3;
    //INVOCO A LA FUNCION Lo envio a una funcion que los compara
    std::cout<<"El mayor es: "<<mayor(num1,num2,num3);
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
