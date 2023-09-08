#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void menu1(){

int opcion;
    char temp [10];
        do{

            printf("\n Definiciones almacenadas");
            printf(" \n");

            printf("\n1) Diferencia entre C y C++  \n2) Interprete vs Compilador \n3) Diferencia entre C y C++ \n4) Diferencia entre C y C++  \n5) Diferencia entre C y C++ \n6) Diferencia entre C y C++  \n7) Diferencia entre C y C++  \n8) Diferencia entre C y C++  \n9) Diferencia entre C y C++  \n10) Diferencia entre C y C++  \n11) Diferencia entre C y C++  \n12) Diferencia entre C y C++  \n13) Diferencia entre C y C++  \n14) Diferencia entre C y C++  \n15) Diferencia entre C y C++  \n16) Diferencia entre C y C++  \n17) Diferencia entre C y C++  \n18) Diferencia entre C y C++  \n19) Diferencia entre C y C++  \n20) Diferencia entre C y C++ \n21) Diferencia entre C y C++  \n22) Diferencia entre C y C++  \n23) Diferencia entre C y C++  \n24) Diferencia entre C y C++  \n25) Diferencia entre C y C++  \n26) Diferencia entre C y C++  \n27) Diferencia entre C y C++  \n28) Diferencia entre C y C++  \n29) Diferencia entre C y C++  \n30) Diferencia entre C y C++ " );

            printf("\nIngrese una numero para realizar su seleccion: ");
            ///fgets se utiliza para leer la cadena
            fgets(temp,10,stdin);
            ///atoi funciona para convertir lo que leyo de la entrada standar a numero que en este caso es lo que definimos como opcion, y atoi lo cambia de una letra a numero 

            opcion = atoi(temp);
            switch(opcion)
        {
                
                case 1: 

                printf("\nDigite una tecla para volver al menu de inicio");
                break;

                case 2: 
                
                printf("\nDigite una tecla para volver al menu de inicio");
                break;
            default: 
                printf("\nIngresa un opcion valida: ");
                printf("\nDigite una tecla para volver al menu de inicio");
        }
        
            getch();
        }while (opcion!=4);
}


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
            menu1();
            printf("\nDigite una tecla para volver al menu de inicio\n");
            break;

            case 2: 
            
            printf("\nDigite una tecla para volver al menu de inicio\n");
            break;
        default: 
            printf("\nIngresa un opcion valida: ");
            printf("\nDigite una tecla para volver al menu de inicio\n");
    }
    
        getch();
    }while (opcion!=4);
    
}