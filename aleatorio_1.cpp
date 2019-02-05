#include<iostream>
#include<cstdlib>
#include<ctime>
/*Este programa genera 5 números al azar*/
int main(){
    float lista [5];/*Aquí guardamos los números*/
    int i;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(i=0;i<5;i++){
                     lista[i]=rand()%6+1;
                     std::cout<<lista[i]<<"\n";
    }
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
