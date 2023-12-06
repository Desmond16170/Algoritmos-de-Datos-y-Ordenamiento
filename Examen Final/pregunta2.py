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

        # Atributos adicionales especificos para Estudiante
        self.altura = altura
        self.peso = peso
        self.mano_dominante = mano_dominante
        self.genero = genero

    def imprimir_informacion(self):
        # Llamada al metodo de la superclase para imprimir informacion basica
        super().imprimir_informacion()

        # Imprimir informacion adicional especifica para Estudiante
        print(f"Altura: {self.altura}, Peso: {self.peso}, "
              f"Mano Dominante: {self.mano_dominante}, Genero: {self.genero}")


# Ejemplo de uso:
persona = Persona("Luis", 24)
estudiante = Estudiante("Rebeca", 25, 165, 60, "Zurdo", "Femenino")

# Imprimir informacion de la Persona
persona.imprimir_informacion()

# Imprimir informacion del Estudiante
estudiante.imprimir_informacion()
