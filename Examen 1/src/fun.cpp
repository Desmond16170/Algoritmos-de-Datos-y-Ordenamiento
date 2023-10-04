#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cstdlib>
#include "header.hpp"


void inicio () {

    int opcion;

    do {
        std::cout << "\nSeleccione una opcion:" << std::endl;
        std::cout << "\n1) Agregar un nuevo estudiante" << std::endl;
        std::cout << "\n2) Ver estudiantes agregados y su calificacion" << std::endl;
        std::cout << "\n0) Salir" << std::endl;
        std::cin >> opcion;

        switch (opcion) {
            case 1:
            agregarUsiario();
            case 2:

                break;
            case 0:
                printf("Saliendo del programa.");
                exit(0);
                break;
            default:
                std::cout << "Opcion no valida. Por favor, seleccione una opcion valida." << std::endl;
                break;
        }
    } while (opcion != 3);
}

