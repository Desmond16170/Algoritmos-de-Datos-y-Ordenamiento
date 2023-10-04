#include <iostream>
#include <string>

using namespace std;
#ifndef MENU_HPP
#define MENU_HPP

class Estudiante {
private:
    std::string nombre;
    float* calificacion;

public:
    // Constructor
    Estudiante(const std::string& nombre, float calificacion) {
        this->nombre = nombre;
        this->calificacion = new float(calificacion);
    }

    // Destructor
    ~Estudiante() {
        delete calificacion;
    }

    // Método para mostrar información
    void MostrarInformacion() const {
        std::cout << "Nombre del estudiante: " << nombre << std::endl;
        std::cout << "Calificación: " << *calificacion << std::endl;
    }

    // Getter para obtener la calificación
    float GetCalificacion() const {
        return *calificacion;
    }

    // Setter para establecer la calificación
    void SetCalificacion(float nuevaCalificacion) {
        *calificacion = nuevaCalificacion;
    }
};


void agregarUsiario(){
    std::string nombre;
    float calificacion;

    std::cout << "Ingrese el nombre del estudiante: ";
    std::getline(std::cin, nombre);  // Leer toda la línea, incluyendo espacios

    try {
        std::cout << "Ingrese la calificación del estudiante: ";
        std::cin >> calificacion;

        if (calificacion < 0 || calificacion > 100) {
            throw std::invalid_argument("La calificación debe estar entre 0 y 100.");
        }

        Estudiante estudiante(nombre, calificacion);
        estudiante.MostrarInformacion();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

#endif // MENU_HPP