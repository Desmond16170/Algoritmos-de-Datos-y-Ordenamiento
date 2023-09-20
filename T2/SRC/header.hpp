#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cstdlib>

using namespace std;
#ifndef MENU_HPP
#define MENU_HPP

class angulo {
public:
    angulo(int grados, float minutos, char direccion)
        : grados_(grados), minutos_(minutos), direccion_(direccion) {}

    void mostrarangulo() const {
        std::cout << grados_ << " \xF8" << minutos_ << "'" << direccion_ << " ";
        
    }

    bool operator>(const angulo& otro) const {
        // Comparar primero los grados
        if (grados_ > otro.grados_) {
            return true;
        }
        // Si los grados son iguales, comparar los minutos
        else if (grados_ == otro.grados_ && minutos_ > otro.minutos_) {
            return true;
        }
        // Si los minutos son iguales, comparar las direcciones
        else if (grados_ == otro.grados_ && minutos_ == otro.minutos_ && direccion_ > otro.direccion_) {
            return true;
        }
        // En cualquier otro caso, no es mayor
        return false;
    }

private:
    int grados_;
    float minutos_;
    char direccion_;
};

class NumeroDeSerie {
public:
    NumeroDeSerie() {
        numero_ = contador_++;
    }

    int obtenerNumeroDeSerie() const {
        return numero_;
    }

private:
    static int contador_;
    int numero_;
};

int NumeroDeSerie::contador_ = 1;

class Barco {
public:
    Barco() : numeroDeSerie_(), latitud_(0, 0.0f, 'N'), longitud_(0, 0.0f, 'E') {}

    void ingresarCoordenadas() {
        std::cout << "Ingrese la latitud del barco (grados minutos direccion N/S ): ";
        int gradosLatitud;
        float minutosLatitud;
        char direccionLatitud;
        std::cin >> gradosLatitud >> minutosLatitud >> direccionLatitud;
        latitud_ = angulo(gradosLatitud, minutosLatitud, direccionLatitud);

        std::cout << "Ingrese la longitud del barco (grados minutos direccion E/O ): ";
        int gradosLongitud;
        float minutosLongitud;
        char direccionLongitud;
        std::cin >> gradosLongitud >> minutosLongitud >> direccionLongitud;
        longitud_ = angulo(gradosLongitud, minutosLongitud, direccionLongitud);
    }

    void mostrarInformacion() const {
        std::cout << "Numero de serie: " << numeroDeSerie_.obtenerNumeroDeSerie() << std::endl;
        std::cout << "Latitud: ";
        latitud_.mostrarangulo();
        std::cout << "Longitud: ";
        longitud_.mostrarangulo();
        std::cout << std::endl;
    }

    int obtenerNumeroDeSerie() const {
        return numeroDeSerie_.obtenerNumeroDeSerie();
    }

    angulo obtenerLatitud() const {
        return latitud_;
    }

    bool operator>(const Barco& otro) const {
        return latitud_ > otro.latitud_;
    }

private:
    NumeroDeSerie numeroDeSerie_;
    angulo latitud_;
    angulo longitud_;
};

class FlotaDeBarcos {


public:
    void agregarBarco() {
        Barco nuevoBarco;
        nuevoBarco.ingresarCoordenadas();
        flota_.push_back(nuevoBarco);
    }

    void eliminarBarco(int numeroDeSerie) {
        auto it = std::remove_if(flota_.begin(), flota_.end(),
            [numeroDeSerie](const Barco& barco) {
                return barco.obtenerNumeroDeSerie() == numeroDeSerie;
            });

        if (it != flota_.end()) {
            flota_.erase(it, flota_.end());
            std::cout << "Barco con numero de serie " << numeroDeSerie << " eliminado." << std::endl;
        } else {
            std::cout << "No se encontro ningun barco con numero de serie " << numeroDeSerie << "." << std::endl;
        }
    }

    void ordenarYCompararAlgoritmos() {
        std::vector<Barco> flotaCopia = flota_;
        std::vector<Barco> flotaCopiaMerge = flota_;

        std::cout << "Ordenando la flota por latitud..." << std::endl;

        auto start_time = std::chrono::high_resolution_clock::now();
        int quickSortSteps = customQuickSort(flotaCopia, 0, flotaCopia.size() - 1);
        auto end_time = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

        std::cout << "Ejecutando QuickSort..." << std::endl;
        std::cout << "Tiempo de ejecucion (QuickSort): " << duration.count() << " ms" << std::endl;
        std::cout << "Numero de pasos (QuickSort): " << quickSortSteps << std::endl;

        start_time = std::chrono::high_resolution_clock::now();
        int mergeSortSteps = customMergeSort(flotaCopiaMerge, 0, flotaCopiaMerge.size() - 1);
        end_time = std::chrono::high_resolution_clock::now();
        duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

        std::cout << "Ejecutando MergeSort...\n" << std::endl;
        std::cout << "Tiempo de ejecucion (MergeSort): \n" << duration.count() << " ms" << std::endl;
        std::cout << "Numero de pasos (MergeSort): \n" << mergeSortSteps << std::endl;

        if (quickSortSteps < mergeSortSteps) {
            std::cout << "El algoritmo mas eficiente es QuickSort con " << quickSortSteps << " pasos. Sera utilizado para ordenar la flota.\n" << std::endl;
            flota_ = flotaCopia;
        } else {
            std::cout << "El algoritmo mas eficiente es MergeSort con " << mergeSortSteps << " pasos. Sera utilizado para ordenar la flota.\n" << std::endl;
            flota_ = flotaCopiaMerge;
        }
    }

    void mostrarFlotaOrdenada() const {
        for (const Barco& barco : flota_) {
            barco.mostrarInformacion();
        }
    }

    
    int customQuickSort(std::vector<Barco>& flota, int low, int high) {
        int steps = 0;
        if (low < high) {
            int pi = customPartition(flota, low, high, steps);

            steps += customQuickSort(flota, low, pi - 1);
            steps += customQuickSort(flota, pi + 1, high);
        }
        return steps;
    }
    int customMergeSort(std::vector<Barco>& flota, int left, int right) {
        int steps = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;
            steps += customMergeSort(flota, left, mid);
            steps += customMergeSort(flota, mid + 1, right);
            steps += customMergeHelper(flota, left, mid, right);
        }
        return steps;
    }

    int customPartition(std::vector<Barco>& flota, int low, int high, int& steps) {
        angulo pivot = flota[high].obtenerLatitud();
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) {
            if (flota[j].obtenerLatitud() > pivot) {
                i++;
                std::swap(flota[i], flota[j]);
                steps++;  // Incrementar el contador de pasos
            }
        }
        std::swap(flota[i + 1], flota[high]);
        steps++;  // Incrementar el contador de pasos
        return (i + 1);
    }
    int customMergeHelper(std::vector<Barco>& flota, int left, int mid, int right) {
        int steps = 0;
        int n1 = mid - left + 1;
        int n2 = right - mid;

        std::vector<Barco> leftArray(n1);
        std::vector<Barco> rightArray(n2);

        for (int i = 0; i < n1; i++) {
            leftArray[i] = flota[left + i];
        }
        for (int i = 0; i < n2; i++) {
            rightArray[i] = flota[mid + 1 + i];
        }

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (leftArray[i].obtenerLatitud() > rightArray[j].obtenerLatitud()) {
                flota[k++] = leftArray[i++];
                steps++;  // Incrementar el contador de pasos
            } else {
                flota[k++] = rightArray[j++];
                steps++;  // Incrementar el contador de pasos
            }
        }

        while (i < n1) {
            flota[k++] = leftArray[i++];
        }

        while (j < n2) {
            flota[k++] = rightArray[j++];
        }
        return steps;
    }



private:
    std::vector<Barco> flota_;
};


#endif // MENU_HPP