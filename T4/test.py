class Animal():
    name = ""
    __peso = 0

    def ladrar(self):
        print("Estoy ladrando, guau guau!")

    def __new__(cls, name, peso):
        # Crear una nueva instancia de la clase
        instance = super(Animal, cls).__new__(cls)
        instance.name = name
        instance.__peso = peso
        print("Método __new__ fue llamado")
        return instance

    def __init__(self, name, peso):
        self.name = name
        self.__peso = peso
        print("Hola desde el método init!")

    def __str__(self):
        return ("La manera de imprimir en str un animal es decir su nombre: hola soy: " + self.name)

    def __add__(self, other):
        return Animal(self.name + "_" + other.name, self.__peso + other.__peso)


vaca = Animal("Lola", 660)
vaca.__peso = 700
print("El peso de la vaca", vaca.name, "es", vaca.__peso)

# vaca1 = Animal("Lola1", 500)
# vaca2 = Animal("Lola2", 350)

# vaca3 = vaca1 + vaca2 + vaca

# print(vaca3.peso)
