#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <regex>
#include <stdexcept>
#include <cctype>

using namespace std;
#ifndef MENU_HPP
#define MENU_HPP



// Función para procesar una palabra (quitar signos de puntuación y convertir a minúsculas)
std::string ProcessWord(const std::string& word) {
    std::string processedWord = word;
    // Eliminar signos de puntuación al final
    while (!processedWord.empty() && ispunct(processedWord.back())) {
        processedWord.pop_back();
    }
    // Convertir a minúsculas
    for (char& c : processedWord) {
        c = std::tolower(c);
    }
    return processedWord;
}

void makefiel() {
    try {
        // Paso 1: Solicitar al usuario el nombre del archivo
        std::string fileName;
        std::cout << "Ingrese el nombre del archivo de texto: ";
        std::cin >> fileName;

        // Paso 2: Abrir el archivo
        std::ifstream inputFile(fileName);

        // Verificar si el archivo se abrió correctamente
        if (!inputFile) {
            throw std::runtime_error("Excepción de Archivo No Encontrado");
        }

        // Paso 3: Crear un mapa para almacenar la tabla de frecuencia
        std::map<std::string, int> frequencyTable;

        // Paso 4: Leer el archivo y construir la tabla de frecuencia
        std::string word;
        while (inputFile >> word) {
            word = ProcessWord(word);
            if (!word.empty()) {
                frequencyTable[word]++;
            }
        }

        // Paso 5: Mostrar la tabla de frecuencia
        for (const auto& pair : frequencyTable) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }

        // Paso 6: Aplicar expresiones regulares para encontrar patrones
        inputFile.clear();
        inputFile.seekg(0);  // Volver al principio del archivo

        std::string fileContents((std::istreambuf_iterator<char>(inputFile)),
                                std::istreambuf_iterator<char>());

        // Expresión regular para correos electrónicos
        std::regex emailRegex(R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,4}\b)");
        std::smatch emailMatches;
        int emailCount = 0;

        // Expresión regular para URLs
        std::regex urlRegex(R"(https?://[A-Za-z0-9.-]+(/[A-Za-z0-9/?=&]*)?)");
        std::smatch urlMatches;
        int urlCount = 0;

        while (std::regex_search(fileContents, emailMatches, emailRegex)) {
            emailCount++;
            fileContents = emailMatches.suffix();
        }

        while (std::regex_search(fileContents, urlMatches, urlRegex)) {
            urlCount++;
            fileContents = urlMatches.suffix();
        }

        // Paso 7: Mostrar la cantidad de patrones encontrados
        std::cout << "\nPatrones encontrados:" << std::endl;
        std::cout << "Correos Electrónicos: " << emailCount << std::endl;
        std::cout << "URLs: " << urlCount << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

};

#endif // MENU_HPP