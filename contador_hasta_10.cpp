#include<iostream>
int main(){
    //Este programa cuwnta hasta 10
    int i;
    char salir;
    //Los for son un poco ditintos
    //i++ es lo mismo que i=i+1
    for(i=10;i>0;i--){
        std::cout<<i;
        std::cout<<"\n";
    }
    std::cout<<"Toca 06+++1cualquier tecla para salir: ";//Instruccion de salida
    std::cin>>salir;//indtruccion de entrada
    return 0;
}
