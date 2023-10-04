CXX = g++
CXXFLAGS = -std=c++11

BUILD_DIR = build

.PHONY: all clean

all: p1 p2 p3 p4

p1: $(BUILD_DIR)/program
	@echo "Probando Excepción de Archivo No Encontrado..."
	./$(BUILD_DIR)/program archivo_no_existente.txt

p2: $(BUILD_DIR)/program
	@echo "Probando Excepción de Palabra Vacia..."
	echo ".!?" > $(BUILD_DIR)/archivo_palabra_vacia.txt
	./$(BUILD_DIR)/program $(BUILD_DIR)/archivo_palabra_vacia.txt
	@echo "Generando tabla de frecuencias..."
	./$(BUILD_DIR)/program $(BUILD_DIR)/archivo_palabra_vacia.txt | sort | uniq -c | awk '{printf " %-20s | %d\n", $$2, $$1}' | sed -e 's/^ //' | column -t -s "|"

p3: $(BUILD_DIR)/program
	@echo "Probando Excepción de Archivo Vacío..."
	touch $(BUILD_DIR)/archivo_vacio.txt
	./$(BUILD_DIR)/program $(BUILD_DIR)/archivo_vacio.txt

p4: $(BUILD_DIR)/program
	@echo "Ejecutando programa sin excepciones..."
	cp ejemplo.txt $(BUILD_DIR)/archivo_sin_excepciones.txt
	./$(BUILD_DIR)/program $(BUILD_DIR)/archivo_sin_excepciones.txt

$(BUILD_DIR)/program: src/main.cpp
	$(CXX) $(CXXFLAGS) -o $(BUILD_DIR)/program src/main.cpp

clean:
	rm -rf $(BUILD_DIR)