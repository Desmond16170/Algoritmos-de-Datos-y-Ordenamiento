#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {/// iniciar el Menu de inicio
    int opcion;
    char temp [10];
    do{

        printf("\n Bienvenido a su libreria personal de C/C++ ");
        printf(" \n");

        printf("\n1) Mostrar todas las definiciones almacenadas  \n2) Hacer una pregunta.");
        printf("\nIngrese una numero para realizar su seleccion: ");
        ///fgets se utiliza para leer la cadena
        fgets(temp,10,stdin);
        ///atoi funciona para convertir lo que leyo de la entrada standar a numero que en este caso es lo que definimos como opcion, y atoi lo cambia de una letra a numero 

        opcion = atoi(temp);
        switch(opcion)
    {
            
            case 1: 

            break;
            case 2: 

            break;
        default: 
            printf("\nIngresa un opcion valida: ");
    }
    
        getch();
    }while (opcion!=4);
    
}