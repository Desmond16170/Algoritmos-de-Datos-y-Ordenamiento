#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void menu1(){

    int opcion;
        char temp [10];
            do{

                printf("\n Definiciones almacenadas");
                printf(" \n");

                printf("\n0) Digite 0 para volver al menu principal \n1) Diferencia entre C y C++  \n2) Interprete vs Compilador \n3) Namespace \n4) Declarar vs inicializar varibles  \n5) Break vs Continue en blucles de C++ \n6) Polimorfismo  \n7) Exterm \n8) Palabras reservadas  \n9) Punteros  \n10) Funcion Prototype  \n11) Nullprt   \n12) Formas de pasar parametros \n13) Memory leak  \n14) #ifndef  \n15) Type casting  \n16) Arreglo vs lista en C++  \n17) This en C++ \n18) Objetos e instanciar \n19) Constructores vs destructores de clases \n20) Sobre carga de operadores \n21) Memoria dinamica \n22) Memoria estatica \n23) Biblioteca dinamica \n24) Biblioteca estatica  \n25) Systemcall \n26) Callback \n27) SPI \n28) I2C \n29) Programa deamon \n30) Cross-compiler \n31) Proceso \n32) Thread" );
                printf("\nIngrese una numero para realizar su seleccion: ");
                ///fgets se utiliza para leer la cadena
                fgets(temp,10,stdin);
                ///atoi funciona para convertir lo que leyo de la entrada standar a numero que en este caso es lo que definimos como opcion, y atoi lo cambia de una letra a numero 

                opcion = atoi(temp);
                switch(opcion)
            {
                    case 0:
                    return;/// con esta funcion vuelve al menu inicial y sale del ciclo do while
                    case 1:
                    printf("\n**¿Cual es la principal diferencia entre C y C++?**");
                    printf ("\nLa principal diferencia es que C++ es una extensión de C que incluye características de programación orientada a objetos. Mientras que C se centra en la programación procedural, C++ permite la programación orientada a objetos mediante clases y otros conceptos de POO.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 2:
                    printf("\n**¿Cuál es la diferencia entre un intérprete y un compilador?**");
                    printf ("\nUn compilador traduce todo el programa fuente a código máquina de una vez y genera un archivo ejecutable, mientras que un intérprete traduce y ejecuta el programa línea por línea en tiempo real.");

                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 3:
                    printf("\n**¿Qué es el namespace y para qué se utiliza?**");
                    printf ("\nUn namespace es un espacio de nombres que permite evitar conflictos de nombres en C++ al agrupar nombres de clases, funciones y variables. Ayuda a organizar y modularizar el código.");
                    printf("\nDigite una tecla para volver al menu de temas");

                    case 4:
                    printf("\n**¿Cuál es la diferencia entre declarar e inicializar una variable?**");
                    printf ("\nDeclarar una variable significa definir su tipo y nombre, reservando espacio en memoria. Inicializar una variable significa asignarle un valor específico en el momento de la declaración.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 5:
                    printf("\n**¿Cuál es la diferencia entre un break y un continue en los bucles de C++?**");
                    printf ("\n`Break` se utiliza para salir de un bucle y continuar con la ejecución del codigo pero dentro del mismo buclee, mientras que `continue` se utiliza para saltar a la siguiente iteración del bucle, omitiendo el código restante en la iteración actual.");
                    printf("\nDigite una tecla para volver al menu de temas");

                    case 6:
                    printf("\n**¿Qué es el polimorfismo en clases?**");
                    printf ("\nEl polimorfismo en clases se refiere a la capacidad de las clases derivadas de una clase base para sobrescribir sus métodos y proporcionar implementaciones específicas para sus propios objetos. Esto permite tratar objetos derivados de manera uniforme a través de un puntero o referencia a la clase base.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 7:
                    printf("\n**¿Qué hace la sentencia extern?**");
                    printf ("\nLa sentencia `extern` se utiliza para declarar una variable o función que está definida en otro archivo fuente o en otro lugar dentro del mismo archivo. Permite que varias partes de un programa compartan una variable o función global.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 8:
                    printf("\n**¿Qué son las palabras reservadas?**");
                    printf ("\nLas palabras reservadas son palabras específicas en un lenguaje de programación que tienen significados especiales y no pueden ser utilizadas como identificadores (nombres de variables, funciones, etc.). Ejemplos en C++ incluyen `int`, `if`, `while`, `class`, entre otros.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 9:
                    printf("\n**¿Qué es un puntero y cómo se utiliza?**");
                    printf ("\n   Un puntero es una variable que almacena la dirección de memoria de otra variable, esta se declara usando el operador `*`.Por ejemplo, en la vida real, podrías pensar en un puntero como una dirección postal que te lleva a una casa al momento de entregar una carta.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 10:
                    printf("\n**¿Qué es una función prototipo?**");
                    printf ("\nUna función prototipo es una declaración de función que proporciona información sobre su nombre, tipo de retorno y parámetros antes de su implementación. Ayuda al compilador a comprender cómo se llama y cómo se utiliza la función antes de encontrar su definición.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                default: 
                    printf("");
                    printf("");
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
            break;
            printf("\nDigite una tecla para volver al menu de inicio\n");
            break;
        default: 
            printf("\nIngresa un opcion valida: ");
            printf("\nDigite una tecla para volver al menu de inicio\n");
    }
    
        getch();
    }while (opcion!=4);
    
}