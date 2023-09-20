#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cstdlib>
#include "header.hpp"


void inicio () {
    FlotaDeBarcos flota;
    int opcion;

    do {
        std::cout << "\nSeleccione una opcion:" << std::endl;
        std::cout << "\n1) Agregar un nuevo barco" << std::endl;
        std::cout << "\n2) Eliminar un barco por numero de serie" << std::endl;
        std::cout << "\n3) Ordenar y comparar algoritmos por latitud" << std::endl;
        std::cout << "\n4) Mostrar flota ordenada" << std::endl;
        std::cout << "\n0) Salir" << std::endl;
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                flota.agregarBarco();
                break;
            case 2:
                int numeroDeSerie;
                std::cout << "Ingrese el numero de serie del barco a eliminar: ";
                std::cin >> numeroDeSerie;
                flota.eliminarBarco(numeroDeSerie);
                break;
            case 3:
                flota.ordenarYCompararAlgoritmos();
                break;
            case 4:
                flota.mostrarFlotaOrdenada();
                break;
            case 0:
                printf("Saliendo del programa.");
                exit(0);
                break;
            default:
                std::cout << "Opcion no valida. Por favor, seleccione una opcion valida." << std::endl;
                break;
        }
    } while (opcion != 5);
}

