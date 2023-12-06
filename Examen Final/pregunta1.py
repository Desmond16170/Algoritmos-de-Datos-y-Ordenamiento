class Persona:
    def __init__(self, edad, altura, peso, mano_dominante, genero):
        self.edad = edad
        self.altura = altura
        self.peso = peso
        self.mano_dominante = mano_dominante
        self.genero = genero


class PersonaMasculina(Persona):
    def __init__(self, edad, altura, peso, mano_dominante):
        # Llamada al constructor de la superclase
        super().__init__(edad, altura, peso, mano_dominante, 'Masculino')

    def realizar_accion_masculina(self):
        print("Realizando acción masculina")


class PersonaFemenina(Persona):
    def __init__(self, edad, altura, peso, mano_dominante):
        # Llamada al constructor de la superclase
        super().__init__(edad, altura, peso, mano_dominante, 'Femenino')

    def realizar_accion_femenina(self):
        print("Realizando acción femenina")


# Ejemplo de uso:
persona_masculina = PersonaMasculina(30, 175, 70, 'Diestro')
persona_femenina = PersonaFemenina(25, 160, 55, 'Zurdo')


print(persona_masculina.genero)  # Salida: 'Masculino'
print(persona_femenina.genero)    # Salida: 'Femenino'


persona_masculina.realizar_accion_masculina()
persona_femenina.realizar_accion_femenina()
