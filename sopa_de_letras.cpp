#include<iostream>
#include<cstdlib>
#include<ctime>
#define TAMANO 10
#include<string>
int main(){
    char matriz [TAMANO][TAMANO];
    int fil,col;
    int longitud;
    int posx,posy;//Posicion donde ira la palabra
    char palabra[TAMANO];
    char salir;
    int semillita;
    semillita=time(0);
    srand(semillita);
    //Genero la matriz de letras
    for(fil=0;fil<TAMANO;fil++){
                     for(col=0;col<TAMANO;col++){
                                            matriz[fil][col]=rand()%25+65;
                                            std::cout<<matriz[fil][col];
                    
                                            }
                                            std::cout<<"\n";
                                            
    }
    //Generamos al azar la posx y posy
    posx=rand()%TAMANO;
    posy=rand()%TAMANO;
    //Colocamos un asterisco en esa posicion
    matriz[posx][posy]='*';
    std::cout<<"\n**NUEVA MATRIZ**\n\n";
    //Volvemos a sacar por pantalla la matriz
    for(fil=0;fil<TAMANO;fil++){
                     for(col=0;col<TAMANO;col++){
                                            std::cout<<matriz[fil][col];
                                            }
                                            std::cout<<"\n";
                                            
    }
    std::cout<<"Introduce una palabra: ";
    std::cin>>palabra;
    //MEDIMOS LA LONGIITUD DE LA PALABRA
    longitud=strlen(palabra);
    //RECORRO LAS POSICIONES Y VUELCO LETRA A LETRA LA PALABRA
    for(col=posy;col<posy+longitud;col++){
        matriz[posx][col]=palabra[col-posy];   
    }
    std::cout<<"La palabra mide: "<<longitud;
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
