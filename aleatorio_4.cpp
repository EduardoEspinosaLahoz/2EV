#include<iostream>
#include<cstdlib>
#include<ctime>
#define TAMANO 50
int main(){
    char matriz [TAMANO][TAMANO];
    int fil,col;
    char salir;
    double semillita;
    semillita=time(0);
    srand(semillita);
    for(fil=0;fil<TAMANO;fil++){
                     for(col=0;col<TAMANO;col++){
                                            matriz[fil][col]=rand()%25+65;
                                            std::cout<<matriz[fil][col];
                                            }
                                            std::cout<<"\n";
                                            
    }
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
