CXX = g++
CXXFLAGS = -std=c++11

.PHONY: all clean

all: p1 p2 p3 p4

p1: program
	@echo "Probando Excepción de Archivo No Encontrado..."
	./program archivo_no_existente.txt

p2: program
	@echo "Probando Excepción de Palabra Vacia..."
	echo ".!?" > archivo_palabra_vacia.txt
	./program archivo_palabra_vacia.txt

p3: program
	@echo "Probando Excepción de Archivo Vacío..."
	touch archivo_vacio.txt
	./program archivo_vacio.txt

p4: program
	@echo "Ejecutando programa sin excepciones..."
	cp ejemplo.txt archivo_sin_excepciones.txt
	./program archivo_sin_excepciones.txt

program: main.cpp
	$(CXX) $(CXXFLAGS) -o program main.cpp

clean:
	rm -f program archivo_palabra_vacia.txt archivo_vacio.txt archivo_sin_excepciones.txt
