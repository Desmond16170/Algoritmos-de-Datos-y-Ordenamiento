#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
#ifndef MENU_HPP
#define MENU_HPP
#include <vector>


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
                    printf("\n**%cCual es la principal diferencia entre C y C++?**", 168);
                    printf ("\nLa principal diferencia es que C++ es una extension de C que incluye caracteristicas de programacion orientada a objetos. Mientras que C se centra en la programacion procedural, C++ permite la programacion orientada a objetos mediante clases y otros conceptos de POO.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 2:
                    printf("\n**%cCual es la diferencia entre un interprete y un compilador?**", 168);
                    printf ("\nUn compilador traduce todo el programa fuente a codigo maquina de una vez y genera un archivo ejecutable, mientras que un interprete traduce y ejecuta el programa linea por linea en tiempo real.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 3:
                    printf("\n**%cQue es el namespace y para que se utiliza?**", 168);
                    printf ("\nUn namespace es un espacio de nombres que permite evitar conflictos de nombres en C++ al agrupar nombres de clases, funciones y variables. Ayuda a organizar y modularizar el codigo.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 4:
                    printf("\n**%cCual es la diferencia entre declarar e inicializar una variable?**", 168);
                    printf ("\nDeclarar una variable significa definir su tipo y nombre, reservando espacio en memoria. Inicializar una variable significa asignarle un valor especifico en el momento de la declaracion.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 5:
                    printf("\n**%cCual es la diferencia entre un break y un continue en los bucles de C++?**", 168);
                    printf ("\n%cBreak se utiliza para salir de un bucle y continuar con la ejecucion del codigo pero dentro del mismo bucle, mientras que %cContinue se utiliza para saltar a la siguiente iteracion del bucle, omitiendo el codigo restante en la iteracion actual.", 160, 160);
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 6:
                    printf("\n**%cQue es el polimorfismo en clases?**", 168);
                    printf ("\nEl polimorfismo en clases se refiere a la capacidad de las clases derivadas de una clase base para sobrescribir sus metodos y proporcionar implementaciones especificas para sus propios objetos. Esto permite tratar objetos derivados de manera uniforme a traves de un puntero o referencia a la clase base.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 7:
                    printf("\n**%cQue hace la sentencia extern?**", 168);
                    printf ("\nLa sentencia extern se utiliza para declarar una variable o funcion que esta definida en otro archivo fuente o en otro lugar dentro del mismo archivo. Permite que varias partes de un programa compartan una variable o funcion global.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 8:
                    printf("\n**%cQue son las palabras reservadas?**", 168);
                    printf ("\nLas palabras reservadas son palabras especificas en un lenguaje de programacion que tienen significados especiales y no pueden ser utilizadas como identificadores (nombres de variables, funciones, etc.). Ejemplos en C++ incluyen int, if, while, class, entre otros.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 9:
                    printf("\n**%cQue es un puntero y como se utiliza?**", 168);
                    printf ("\n   Un puntero es una variable que almacena la direccion de memoria de otra variable, esta se declara usando el operador *.Por ejemplo, en la vida real, podrias pensar en un puntero como una direccion postal que te lleva a una casa al momento de entregar una carta.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 10:
                    printf("\n**%cQue es una funcion prototipo?**", 168);
                    printf ("\nUna funcion prototipo es una declaracion de funcion que proporciona informacion sobre su nombre, tipo de retorno y parametros antes de su implementacion. Ayuda al compilador a comprender como se llama y como se utiliza la funcion antes de encontrar su definicion.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 11:
                    printf("\n**%cQue es un puntero nullptr?**", 168);
                    printf ("\n%cnullptr es una palabra clave en C++ que se utiliza para representar un puntero nulo o vacio. Es una forma segura y mas moderna de representar punteros nulos en lugar de usar NULL o 0.%c", 160, 160);
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 12:
                    printf("\n**%cCual es la diferencia entre pasar parametros por valor, por referencia y por puntero?**", 168);
                    printf ("\n- Pasar por valor: Se copia el valor real del argumento en el parametro de la funcion. Los cambios en el parametro no afectan al argumento original.");
                    printf ("\n- Pasar por referencia: Se pasa una referencia al argumento original, lo que permite modificar el argumento dentro de la funcion.");
                    printf ("\n- Pasar por puntero: Se pasa un puntero al argumento original, lo que permite modificar el argumento dentro de la funcion utilizando el puntero.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 13:
                    printf("\n**%cQue es un memory leak?**", 168);
                    printf ("\n Un memory leak es un problema en programacion donde la memoria asignada dinamicamente no se libera adecuadamente cuando ya no se necesita. Esto puede llevar a una perdida gradual de memoria y a problemas de rendimiento en una aplicacion.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 14:
                    printf("\n**%cPara que se utiliza la directiva #ifndef?**", 168);
                    printf ("\n%cLa directiva #ifndef (if not defined) se utiliza en archivos de encabezado (header files) de C++ para evitar la inclusion repetida de un archivo en un programa. Ayuda a prevenir conflictos de nombres y errores de compilacion.%c", 168, 160);
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 15:
                    printf("\n**%cQue es el type casting?**", 168);
                    printf ("\nEl type casting (conversion de tipos) es el proceso de cambiar el tipo de datos de una variable de un tipo a otro. Puede ser implicito (automatico) o explicito (mediante operadores de conversion).");
                    printf("\n\nDigite una tecla para volver al menu de temas");
                    break;

                    case 16:
                    printf("\n**%cCual es la diferencia entre un arreglo y una lista en C++?**", 168);
                    printf ("\nUn arreglo es una estructura de datos estatica que almacena elementos del mismo tipo en ubicaciones de memoria contiguas. Una lista (por ejemplo, std::list en C++) es una estructura de datos dinamica que puede cambiar de tamano y almacena elementos en nodos enlazados.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 17:
                    printf("\n**%cQue es el puntero this en C++?**", 168);
                    printf ("\n%cthis es un puntero implicito en las clases de C++ que apunta al objeto actual. Se utiliza para acceder a miembros de la clase dentro de la propia clase y para distinguir entre parametros de funcion y miembros de la clase con el mismo nombre.%c", 160, 160);
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 18:
                    printf("\n**%cQue es un objeto y que es instanciar?**", 168);
                    printf ("\nUn objeto es una instancia concreta de una clase en la programacion orientada a objetos. Instanciar se refiere al proceso de crear un objeto a partir de una clase. Cada objeto tiene sus propias caracteristicas (atributos) y puede realizar acciones (metodos) definidos en la clase.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 19:
                    printf("\n**%cQue es el constructor y el destructor en una clase?**", 168);
                    printf ("\nEl constructor es un metodo especial en una clase que se llama automaticamente cuando se crea un objeto de esa clase. Se utiliza para inicializar los atributos del objeto. El destructor es otro metodo especial que se llama cuando un objeto se destruye y se utiliza para liberar recursos o realizar limpieza necesaria.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 20:
                    printf("\n**%cQue es la sobrecarga de operadores en C++ y como se utiliza?**", 168);
                    printf ("\nLa sobrecarga de operadores es una caracteristica de C++ que permite definir el comportamiento personalizado de operadores para tipos de datos definidos por el usuario. Permite usar operadores como +, -, *, etc., en objetos de clases personalizadas.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 21:
                    printf("\n**%cQue es memoria dinamica?**", 168);
                    printf ("\n%cLa memoria dinamica, tambien conocida como heap, es una region de la memoria utilizada para asignar y liberar memoria durante la ejecucion de un programa. Se utiliza para almacenar datos cuyo tamano no se conoce en tiempo de compilacion y se gestiona con funciones como new y delete en C++.%c", 160, 160);
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 22:
                    printf("\n**%cQue es memoria estatica?**", 168);
                    printf ("\n%c La memoria estatica se refiere a la region de memoria donde se almacenan las variables que tienen una duracion de vida que abarca toda la ejecucion del programa. Esto incluye variables globales y estaticas, que se inicializan solo una vez y mantienen su valor durante toda la ejecucion.%c", 160, 160);
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 23:
                    printf("\n**%cQue es una biblioteca dinamica?**", 168);
                    printf ("\n Una biblioteca dinamica (o DLL en Windows, Shared Library en Linux) es un archivo que contiene codigo y datos que se pueden utilizar por varios programas a la vez. Estas bibliotecas se cargan en tiempo de ejecucion y permiten ahorrar espacio en disco y memoria RAM al compartir codigo comun.%c", 160, 160);
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 24:
                    printf("\n**%cQue es una biblioteca estatica?**", 168);
                    printf ("\nUna biblioteca estatica es un archivo que contiene codigo y datos que se vinculan directamente con un programa en tiempo de compilacion. Cada programa que utiliza una biblioteca estatica tiene su propia copia de los componentes de la biblioteca, lo que puede aumentar el tamano del ejecutable.%c", 160, 160);
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 25:
                    printf("\n**%cQue es un systemcall?**", 168);
                    printf ("\nUna system call (llamada al sistema) es una interfaz entre un programa de usuario y el nucleo del sistema operativo. Se utiliza para solicitar servicios del sistema operativo, como acceso a archivos, administracion de memoria o creacion de procesos.");
                    printf("\n\nDigite una tecla para volver al menu de temas");
                    break;

                    case 26:
                    printf("\n**%cQue es un callback?**", 168);
                    printf ("\nUn callback es una funcion que se pasa como argumento a otra funcion y se llama en un momento posterior, generalmente en respuesta a un evento o condicion especifica. Los callbacks son comunes en programacion asincronica y manejo de eventos.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 27:
                    printf("\n**%cQue es SPI?**", 168);
                    printf ("\nSPI (Serial Peripheral Interface) es un protocolo de comunicacion serial utilizado para la transferencia de datos entre dispositivos electronicos. Se utiliza para la comunicacion entre microcontroladores, sensores y otros dispositivos perifericos.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 28:
                    printf("\n**%cQue significa I2C?**", 168);
                    printf ("\nI2C (Inter-Integrated Circuit) es otro protocolo de comunicacion serial utilizado para conectar multiples dispositivos en un bus de dos hilos. Es comunmente utilizado en electronica para la comunicacion entre microcontroladores y sensores.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 29:
                    printf("\n**%cQue es un programa daemon?**", 168);
                    printf ("\nUn programa daemon es un proceso en segundo plano que se ejecuta de manera continua y que realiza tareas del sistema sin la interaccion directa del usuario. Los daemons son comunes en sistemas Unix y se utilizan para tareas como administrar servicios y realizar tareas de mantenimiento.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 30:
                    printf("\n**%cQue es un cross-compiler?**", 168);
                    printf ("\nUn cross-compiler es un compilador que genera codigo ejecutable para una plataforma de destino diferente de la plataforma en la que se ejecuta el compilador. Se utiliza, por ejemplo, para compilar programas para sistemas embebidos o plataformas diferentes a la del desarrollo.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                    case 31:
                    printf("\n**%cQue es un proceso?**", 168);
                    printf ("\nUn proceso es una instancia en ejecucion de un programa en un sistema operativo. Cada proceso tiene su propio espacio de memoria y recursos, y puede ejecutar sus propias tareas de manera independiente de otros procesos.");
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;                    

		            case 32:
                    printf("\n**%cQu%c es un thread?**", 168, 130);
                    printf("\nUn thread (hilo) es una unidad de ejecuci%cn m%c%s peque%ca dentro de un proceso. Un proceso puede tener m%cltiples hilos que comparten el mismo espacio de memoria y recursos, lo que permite la ejecuci%cn paralela de tareas dentro del mismo proceso.", 162, 160, 130, 164, 162);
                    printf("\nDigite una tecla para volver al menu de temas");
                    break;

                default: 
                    printf("");
                    printf("");
            }
            
                getch();
            }while (opcion!=4);
    }
#endif // MENU_HPP