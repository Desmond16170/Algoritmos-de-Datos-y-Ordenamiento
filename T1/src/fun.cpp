#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
#include "menu1.hpp"
#include "menu2.hpp"
#include <vector>
#include <cstdlib> /// libreria necesaria para poder implementar la funcion cerrar en el programa

void inicio (){
    int opcion;
        char temp [10];
        do{

            printf("\n Bienvenido a su libreria personal de C/C++ ");
            printf(" \n");

            printf("\n1) Mostrar todas las definiciones almacenadas  \n2) Hacer una pregunta.\n3) Salir");
            printf("\nIngrese una numero para realizar su seleccion: ");
            ///fgets se utiliza para leer la cadena
            fgets(temp,10,stdin);
            ///atoi funciona para convertir lo que leyo de la entrada standar a numero que en este caso es lo que definimos como opcion, y atoi lo cambia de una letra a numero 

            opcion = atoi(temp);
            switch(opcion)
        {
                
                case 1: 
                menu1();
                printf("\nDigite una tecla para volver al menu de inicio\n");
                break;

                case 2:
                menu2();
                printf("\nDigite una tecla para volver al menu de inicio\n");
                break;
                case 3:
                exit(0);
            default: 
                printf("\nIngresa un opcion valida\n");
                printf("\nDigite una tecla para volver al menu de inicio\n");
        }
        
            getch();
        }while (opcion!=4);
        

    }

