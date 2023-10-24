import sys 

# Clase Restaurante
class Restaurante:
    def __init__(self, nombre, tipo_cocina):
        # Inicializa la instancia del restaurante con nombre y tipo de cocina
        self.__nombre = nombre  # Atributo privado para el nombre
        self.__tipo_cocina = tipo_cocina  # Atributo privado para el tipo de cocina

    def get_nombre(self):
        # Método para obtener el nombre del restaurante
        return self.__nombre

    def get_tipo_cocina(self):
        # Método para obtener el tipo de cocina del restaurante
        return self.__tipo_cocina

    def set_nombre(self, nombre):
        # Método para modificar el nombre del restaurante
        self.__nombre = nombre

    def set_tipo_cocina(self, tipo_cocina):
        # Método para modificar el tipo de cocina del restaurante
        self.__tipo_cocina = tipo_cocina

    def describe_restaurante(self):
        # Método para mostrar el nombre y el tipo de cocina del restaurante
        print(f"Nombre: {self.__nombre}")
        print(f"Tipo de cocina: {self.__tipo_cocina}")

# Clase MenusTematicos
class MenusTematicos(Restaurante):
    def __init__(self, nombre, tipo_cocina, nombre_menu_tematico):
        # Inicializa la instancia del menú temático con un nombre específico
        super().__init__(nombre, tipo_cocina)  # Llama al constructor de la clase base
        self.nombre_menu_tematico = nombre_menu_tematico

    def describe_menu_tematico(self):
        # Método para mostrar los detalles del menú temático
        super().describe_restaurante()  # Llama al método de la clase base para mostrar detalles del restaurante
        print(f"Nombre del Menú Temático: {self.nombre_menu_tematico}")

# Clase HeladoCacique
class HeladoCacique:
    def __init__(self):
        # Inicializa la lista de sabores de helado
        self.sabores = []

    def agregar_sabor(self, sabor):
        # Método para agregar un sabor a la lista
        self.sabores.append(sabor)

    def mostrar_sabores(self):
        # Método para mostrar los sabores disponibles
        print("Sabores Disponibles:", ", ".join(self.sabores))

# Función para validar entradas
def validar_entrada(entrada, mensaje_error):
    while not entrada:
        # Validación de entrada vacía
        print(f"[ERROR] {mensaje_error}")
        entrada = input("Intentelo de nuevo: ")
    return entrada

# Programa principal
if __name__ :
    print("Bienvenido al sistema de gestión de bares")

    nombre_restaurante = input("Por favor, ingrese el nombre del restaurante: ")
    nombre_restaurante = validar_entrada(nombre_restaurante, "El nombre no puede estar vacío")

    tipo_cocina = input("Ingrese el tipo de cocina: ")
    tipo_cocina = validar_entrada(tipo_cocina, "El tipo de cocina no puede estar vacío")

    restaurante = Restaurante(nombre_restaurante, tipo_cocina)
    print("Restaurante registrado con éxito")
    restaurante.describe_restaurante()

    respuesta_menu_tematico = input("¿Desea agregar un menú temático? (s/n): ")
    
    while respuesta_menu_tematico.lower() not in ['s', 'n']:
        respuesta_menu_tematico = input("¿Desea agregar un menú temático? (s/n): ")

    if respuesta_menu_tematico.lower() == 's':
        nombre_menu_tematico = input("Ingrese el nombre del menú temático: ")
        nombre_menu_tematico = validar_entrada(nombre_menu_tematico, "El nombre del menú temático no puede estar vacío")
        menu_tematico = MenusTematicos(nombre_restaurante, tipo_cocina, nombre_menu_tematico)
        print("Menú temático registrado con éxito:", nombre_menu_tematico)
        menu_tematico.describe_menu_tematico()

    respuesta_helado = ""
    while respuesta_helado.lower() not in ['s', 'n']:
        respuesta_helado = input("¿Desea agregar un sabor de helado Cacique? (s/n): ")
    helado_cacique = HeladoCacique()
    while respuesta_helado.lower() == 's':
        sabor = input("Ingrese el sabor: ")
        sabor = validar_entrada(sabor, "El sabor no puede estar vacío")
        helado_cacique.agregar_sabor(sabor)
        print("Sabor agregado con éxito")
        helado_cacique.mostrar_sabores()
        respuesta_helado = input("¿Desea agregar otro sabor de helado Cacique? (s/n): ")

    # Mensaje de despedida
    if respuesta_helado.lower() == 'n':
        print("Gracias por usar el sistema de gestión de bares. ¡Hasta pronto!")
