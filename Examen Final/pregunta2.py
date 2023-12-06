class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def imprimir_informacion(self):
        print(f"Nombre: {self.nombre}, Edad: {self.edad}")


class Estudiante(Persona):
    def __init__(self, nombre, edad, altura, peso, mano_dominante, genero):
        # Llamada al constructor de la superclase (Persona)
        super().__init__(nombre, edad)

        # Atributos adicionales específicos para Estudiante
        self.altura = altura
        self.peso = peso
        self.mano_dominante = mano_dominante
        self.genero = genero

    def imprimir_informacion(self):
        # Llamada al método de la superclase para imprimir información básica
        super().imprimir_informacion()

        # Imprimir información adicional específica para Estudiante
        print(f"Altura: {self.altura}, Peso: {self.peso}, "
              f"Mano Dominante: {self.mano_dominante}, Género: {self.genero}")


# Ejemplo de uso:
persona = Persona("Juan", 25)
estudiante = Estudiante("Ana", 22, 165, 60, "Diestro", "Femenino")

# Imprimir información de la Persona
persona.imprimir_informacion()

# Imprimir información del Estudiante
estudiante.imprimir_informacion()
