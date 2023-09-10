#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
#ifndef MENU_2HPP
#define MENU_2HPP
#include <vector>


struct PreguntaRespuesta {
    std::string pregunta;
    std::string respuesta;
};

// Estructura para almacenar definiciones y preguntas
struct Definicion {
    std::string pregunta;
    std::string respuesta;
};

void menu2() {
    std::vector<Definicion> datos;
    std::string preguntaUsuario;

    // Agregar definiciones y preguntas a la base de datos
    datos.push_back({"Cual es la principal diferencia entre C y C++?", "La principal diferencia es que C++ es una extension de C que incluye caracteristicas de programacion orientada a objetos. Mientras que C se centra en la programacion procedural, C++ permite la programacion orientada a objetos mediante clases y otros conceptos de POO."});

    datos.push_back({"datosCual es la diferencia entre un interprete y un compilador?", "Un compilador traduce todo el programa fuente a codigo maquina de una vez y genera un archivo ejecutable, mientras que un interprete traduce y ejecuta el programa linea por linea en tiempo real."});

    datos.push_back({"datosQue es el namespace y para que se utiliza?", "Un namespace es un espacio de nombres que permite evitar conflictos de nombres en C++ al agrupar nombres de clases, funciones y variables. Ayuda a organizar y modularizar el codigo."});

    datos.push_back({"datosCual es la diferencia entre declarar e inicializar una variable?", "Declarar una variable significa definir su tipo y nombre, reservando espacio en memoria. Inicializar una variable significa asignarle un valor especifico en el momento de la declaracion."});

    datos.push_back({"datosCual es la diferencia entre un break y un continue en los bucles de C++?", "`break` se utiliza para salir de un bucle y continuar con la ejecucion del codigo fuera del bucle, mientras que `continue` se utiliza para saltar a la siguiente iteracion del bucle, omitiendo el codigo restante en la iteracion actual."});

    datos.push_back({"datosQue es el polimorfismo en clases?", "El polimorfismo en clases se refiere a la capacidad de las clases derivadas de una clase base para sobrescribir sus metodos y proporcionar implementaciones especificas para sus propios objetos. Esto permite tratar objetos derivados de manera uniforme a traves de un puntero o referencia a la clase base."});

    datos.push_back({"datosQue hace la sentencia extern?", "La sentencia `extern` se utiliza para declarar una variable o funcion que esta definida en otro archivo fuente o en otro lugar dentro del mismo archivo. Permite que varias partes de un programa compartan una variable o funcion global."});

    datos.push_back({"datosQue son las palabras reservadas?", "Las palabras reservadas son palabras especificas en un lenguaje de programacion que tienen significados especiales y no pueden ser utilizadas como identificadores (nombres de variables, funciones, etc.). Ejemplos en C++ incluyen `int`, `if`, `while`, `class`, entre otros."});

    datos.push_back({"datosQue es un puntero y como se utiliza?", "Un puntero es una variable que almacena la direccion de memoria de otra variable. Por ejemplo, en la vida real, podrias pensar en un puntero como una direccion postal que te lleva a una casa. Un puntero en C++ se declara usando el operador `*`."});

    datos.push_back({"datosQue es una funcion prototipo?", "Una funcion prototipo es una declaracion de funcion que proporciona informacion sobre su nombre, tipo de retorno y parametros antes de su implementacion. Ayuda al compilador a comprender como se llama y como se utiliza la funcion antes de encontrar su definicion."});

    datos.push_back({"datosQue es un puntero nullptr?", "`nullptr` es una palabra clave en C++ que se utiliza para representar un puntero nulo o vacio. Es una forma segura y mas moderna de representar punteros nulos en lugar de usar `NULL` o `0`."});

    datos.push_back({"datosCual es la diferencia entre pasar parametros por valor, por referencia y por puntero?", "    - Pasar por valor: Se copia el valor real del argumento en el parametro de la funcion. Los cambios en el parametro no afectan al argumento original , Pasar por referencia: Se pasa una referencia al argumento original, lo que permite modificar el argumento dentro de la funcion , Pasar por puntero: Se pasa un puntero al argumento original, lo que permite modificar el argumento dentro de la funcion utilizando el puntero."});

    datos.push_back({"datosQue es un memory leak?", "Un memory leak es un problema en programacion donde la memoria asignada dinamicamente no se libera adecuadamente cuando ya no se necesita. Esto puede llevar a una perdida gradual de memoria y a problemas de rendimiento en una aplicacion."});

    datos.push_back({"datosPara que se utiliza la directiva #ifndef?", "La directiva `#ifndef` (if not defined) se utiliza en archivos de encabezado (header files) de C++ para evitar la inclusion repetida de un archivo en un programa. Ayuda a prevenir conflictos de nombres y errores de compilacion."});

    datos.push_back({"datosQue es el type casting?", "El type casting (conversion de tipos) es el proceso de cambiar el tipo de datos de una variable de un tipo a otro. Puede ser implicito (automatico) o explicito (mediante operadores de conversion)."});

    datos.push_back({"datosCual es la diferencia entre un arreglo y una lista en C++?", "Un arreglo es una estructura de datos estatica que almacena elementos del mismo tipo en ubicaciones de memoria contiguas. Una lista (por ejemplo, `std::list` en C++) es una estructura de datos dinamica que puede cambiar de tamaño y almacena elementos en nodos enlazados."});

    datos.push_back({"datosQue es el puntero this en C++?", "`this` es un puntero implicito en las clases de C++ que apunta al objeto actual. Se utiliza para acceder a miembros de la clase dentro de la propia clase y para distinguir entre parametros de funcion y miembros de la clase con el mismo nombre."});

    datos.push_back({"datosQue es un objeto y que es instanciar?", "Un objeto es una instancia concreta de una clase en la programacion orientada a objetos. Instanciar se refiere al proceso de crear un objeto a partir de una clase. Cada objeto tiene sus propias caracteristicas (atributos) y puede realizar acciones (metodos) definidos en la clase."});

    datos.push_back({"datosQue es el constructor y el destructor en una clase?", "El constructor es un metodo especial en una clase que se llama automaticamente cuando se crea un objeto de esa clase. Se utiliza para inicializar los atributos del objeto. El destructor es otro metodo especial que se llama cuando un objeto se destruye y se utiliza para liberar recursos o realizar limpieza necesaria."});

    datos.push_back({"datosQue es la sobrecarga de operadores en C++ y como se utiliza?", "La sobrecarga de operadores es una caracteristica de C++ que permite definir el comportamiento personalizado de operadores para tipos de datos definidos por el usuario. Permite usar operadores como `+`, `-`, `*`, etc., en objetos de clases personalizadas."});

    datos.push_back({"datosQue es memoria dinamica?", "La memoria dinamica, tambien conocida como heap, es una region de la memoria utilizada para asignar y liberar memoria durante la ejecucion de un programa. Se utiliza para almacenar datos cuyo tamaño no se conoce en tiempo de compilacion y se gestiona con funciones como `new` y `delete` en C++."});

    datos.push_back({"datosQue es memoria estatica?", "La memoria estatica se refiere a la region de memoria donde se almacenan las variables que tienen una duracion de vida que abarca toda la ejecucion del programa. Esto incluye variables globales y estaticas, que se inicializan solo una vez y mantienen su valor durante toda la ejecucion."});

    datos.push_back({"datosQue es una biblioteca dinamica?", "Una biblioteca dinamica (o DLL en Windows, Shared Library en Linux) es un archivo que contiene codigo y datos que se pueden utilizar por varios programas a la vez. Estas bibliotecas se cargan en tiempo de ejecucion y permiten ahorrar espacio en disco y memoria RAM al compartir codigo comun."});

    datos.push_back({"datosQue es una biblioteca estatica?", "Una biblioteca estatica es un archivo que contiene codigo y datos que se vinculan directamente con un programa en tiempo de compilacion. Cada programa que utiliza una biblioteca estatica tiene su propia copia de los componentes de la biblioteca, lo que puede aumentar el tamaño del ejecutable."});

    datos.push_back({"datosQue es un systemcall?", "Una system call (llamada al sistema) es una interfaz entre un programa de usuario y el nucleo del sistema operativo. Se utiliza para solicitar servicios del sistema operativo, como acceso a archivos, administracion de memoria o creacion de procesos."});

    datos.push_back({"datosQue es un callback?", "Un callback es una funcion que se pasa como argumento a otra funcion y se llama en un momento posterior, generalmente en respuesta a un evento o condicion especifica. Los callbacks son comunes en programacion asincronica y manejo de eventos."});

    datos.push_back({"SPI", "SPI (Serial Peripheral Interface) es un protocolo de comunicacion serial utilizado para la transferencia de datos entre dispositivos electronicos. Se utiliza para la comunicacion entre microcontroladores, sensores y otros dispositivos perifericos."});

    datos.push_back({"I2C", "I2C (Inter-Integrated Circuit) es otro protocolo de comunicacion serial utilizado para conectar multiples dispositivos en un bus de dos hilos. Es comunmente utilizado en electronica para la comunicacion entre microcontroladores y sensores."});

    datos.push_back({"datosQue es un programa daemon?", "Un programa daemon es un proceso en segundo plano que se ejecuta de manera continua y que realiza tareas del sistema sin la interaccion directa del usuario. Los daemons son comunes en sistemas Unix y se utilizan para tareas como administrar servicios y realizar tareas de mantenimiento"});

    datos.push_back({"datosQue es un cross-compiler?", "Un cross-compiler es un compilador que genera codigo ejecutable para una plataforma de destino diferente de la plataforma en la que se ejecuta el compilador. Se utiliza, por ejemplo, para compilar programas para sistemas embebidos o plataformas diferentes a la del desarrollo."});

    datos.push_back({"datosQue es un proceso?", "Un proceso es una instancia en ejecucion de un programa en un sistema operativo. Cada proceso tiene su propio espacio de memoria y recursos, y puede ejecutar sus propias tareas de manera independiente de otros procesos."});

    datos.push_back({"datosQue es un thread?", "Un thread (hilo) es una unidad de ejecucion mas pequeña dentro de un proceso. Un proceso puede tener multiples hilos que comparten el mismo espacio de memoria y recursos, lo que permite la ejecucion paralela de tareas dentro del mismo proceso."});


    char opcion;
    do {
        std::cout << "Opciones:\n";
        std::cout << "1) Mostrar todas las definiciones almacenadas.\n";
        std::cout << "2) Hacer una pregunta.\n";
        std::cout << "3) Extender informacion.\n";
        std::cout << "0) Salir.\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case '1':
                // Mostrar todas las definiciones almacenadas
                for (const auto& definicion : datos) {
                    std::cout << definicion.pregunta << ": " << definicion.respuesta << std::endl;
                }
                break;
            case '2':
                // Hacer una pregunta
                std::cout << "Ingrese una pregunta o palabra clave: ";
                
                std::cin.ignore(); // Limpiar el bufer del teclado
                std::getline(std::cin, preguntaUsuario);

                // Buscar coincidencia en la base de datos
                for (const auto& definicion : datos) {
                    if (definicion.pregunta.find(preguntaUsuario) != std::string::npos) {
                        std::cout << "Respuesta: " << definicion.respuesta << std::endl;
                        break; // Mostrar la primera coincidencia y salir
                    }
                }
                break;
            case '3':
                // Extender informacion (puedes implementarlo segun tus necesidades)
                std::cout << "" << std::endl;
                break;
            case '0':
                // Salir del programa
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida. Intente nuevamente." << std::endl;
                break;
        }
    } while (opcion != '0');
}

#endif // MENU2_HPP


