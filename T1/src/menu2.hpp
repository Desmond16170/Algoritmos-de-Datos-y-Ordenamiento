#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
#ifndef MENU_2HPP
#define MENU_2HPP
#include <vector>

// Estructura para almacenar definiciones y preguntas
struct Definicion {
    std::string pregunta;
    std::string respuesta;
};

void menu2() {
    std::vector<Definicion> baseDeDatos;
    std::string preguntaUsuario;
    // Agregar definiciones y preguntas a la base de datos
    baseDeDatos.push_back({"¿Qué es un thread?", "Un thread (hilo) es una unidad de ejecución dentro de un proceso."});
    baseDeDatos.push_back({"¿Qué es C++?", "C++ es un lenguaje de programación de alto nivel."});
    baseDeDatos.push_back({"¿Qué es un bucle?", "Un bucle es una estructura de control para repetir un conjunto de instrucciones."});

    char opcion;
    do {
        std::cout << "Opciones:\n";
        std::cout << "1) Mostrar todas las definiciones almacenadas.\n";
        std::cout << "2) Hacer una pregunta.\n";
        std::cout << "3) Extender información.\n";
        std::cout << "0) Salir.\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case '1':
                // Mostrar todas las definiciones almacenadas
                for (const auto& definicion : baseDeDatos) {
                    std::cout << definicion.pregunta << ": " << definicion.respuesta << std::endl;
                }
                break;
            case '2':
                // Hacer una pregunta
                std::cout << "Ingrese una pregunta o palabra clave: ";
                
                std::cin.ignore(); // Limpiar el búfer del teclado
                std::getline(std::cin, preguntaUsuario);

                // Buscar coincidencia en la base de datos
                for (const auto& definicion : baseDeDatos) {
                    if (definicion.pregunta.find(preguntaUsuario) != std::string::npos) {
                        std::cout << "Respuesta: " << definicion.respuesta << std::endl;
                        break; // Mostrar la primera coincidencia y salir
                    }
                }
                break;
            case '3':
                // Extender información (puedes implementarlo según tus necesidades)
                std::cout << "Función de extender información..." << std::endl;
                break;
            case '0':
                // Salir del programa
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opción no válida. Intente nuevamente." << std::endl;
                break;
        }
    } while (opcion != '0');
}

#endif // MENU2_HPP


