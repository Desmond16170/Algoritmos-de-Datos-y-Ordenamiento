#include <iostream>
#include <string>
#include <vector>

class Estudiante {
private:
    std::string nombre;
    float calificacion;

public:
    // Constructor
    Estudiante(const std::string& nombre, float calificacion) : nombre(nombre), calificacion(calificacion) {}

    // Metodo para mostrar informacion
    void MostrarInformacion() const {
        std::cout << "Nombre del estudiante: " << nombre << std::endl;
        std::cout << "Calificacion: " << calificacion << std::endl;
    }

    // Getter para obtener la calificacion
    float GetCalificacion() const {
        return calificacion;
    }

    // Getter para obtener el nombre del estudiante
    std::string GetNombre() const {
        return nombre;
    }
};

int main() {
    std::vector<Estudiante> estudiantes; // Lista de estudiantes

    while (true) {
        std::cout << "1. Agregar estudiante" << std::endl;
        std::cout << "2. Mostrar calificaciones" << std::endl;
        std::cout << "3. Salir" << std::endl;
        int opcion;
        std::cin >> opcion;

        if (opcion == 1) {
            std::string nombre;
            float calificacion;

            std::cout << "Ingrese el nombre del estudiante: ";
            std::cin.ignore(); // Limpiar el buffer de entrada
            std::getline(std::cin, nombre); // Leer el nombre

            std::cout << "Ingrese la calificacion del estudiante: ";
            std::cin >> calificacion;

            if (calificacion < 0 | calificacion > 100) {
                std::cerr << "Error: La calificacion debe estar entre 0 y 100." << std::endl;
            } else {
                Estudiante estudiante(nombre, calificacion);
                estudiantes.push_back(estudiante);
                std::cout << "Estudiante agregado exitosamente." << std::endl;
            }
        } else if (opcion == 2) {
            std::cout << "Calificaciones de estudiantes:" << std::endl;
            for (const Estudiante& estudiante : estudiantes) {
                std::cout << "Nombre: " << estudiante.GetNombre() << ", Calificacion: " << estudiante.GetCalificacion() << std::endl;
            }
        } else if (opcion == 3) {
            break; // Salir del bucle
        } else {
            std::cerr << "Opcion no valida. Intente de nuevo." << std::endl;
        }
    }

    return 0;
}
