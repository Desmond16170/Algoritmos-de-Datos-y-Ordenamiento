# Respuesta Examen Final


## 1. Explique el concepto de herencia en programación orientada a objetos (POO) y proporcione un ejemplo específico relacionado con el conjunto de datos bajo estudio

Es un concepto que permite la cracion de nuevas clases basadas en clases ya existentes, creando subclases o clases hijas, teniendo como bases una clase base o clases padre. Esto funciona para crear modularidad de codigo y poder reutilizar codigo ya digitado anteriormente para tener una organizacion y optimizacion de recurso al momento de programar grandes proyectos. En este caso las subclases o clases hijas heredan atributos de las clases padres, y estas pueden agregar nuevo atributos, metodos o modificar los existentes. 

### Ejemplo de clase 
Ejemplo de codigo  se implementó en el archivo [pregunta1.py](pregunta1.py).

```python

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


print(persona_masculina.genero)
print(persona_femenina.genero)


persona_masculina.realizar_accion_masculina()
persona_femenina.realizar_accion_femenina()
```


## 2. Diseñe e implemente una clase llamada Persona con atributos como nombre, edad, y un método que imprima la información de la persona. Luego herede de la clase Persona para crear una clase Estudiante con atributos adicionales relacionados con el conjunto de datos.

La respuesta a la pregunta 2 se implementó en el archivo [pregunta2.py](pregunta2.py).
```python

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
persona = Persona("Rebeca", 24)
estudiante = Estudiante("Rebeca", 25, 165, 60, "Zurdo", "Femenino")

# Imprimir informacion de la Persona
persona.imprimir_informacion()

# Imprimir informacion del Estudiante
estudiante.imprimir_informacion()

```


## 3. Describa una situación en la que se podría utilizar un decorador en Python y proporcione un ejemplo práctico relacionado con el manejo de excepciones.
La creación de un decorador para registrar y manejar excepciones para un analisis de datos, en las que queramos omitir o saltar algunos datos en especifico. Ejemplo cuando dentro de los datos que se obtuvieron en el csv generado en este examen, deseamos omitir a la poblacion menores a cierta edad. 

Ejemplo de codigo completo se implementó en el archivo [pregunta3.py](pregunta3.py).

```python

import pandas as pd


def omitir_personas_jovenes(umbral_edad):
    def decorador(func):
        def wrapper(*args, **kwargs):
            # Obtener el DataFrame del primer argumento
            df = args[0]

            # Aplicar el filtro al DataFrame
            df_filtrado = df[df['Edad'] >= umbral_edad]

            # Llamar a la función principal con el DataFrame filtrado
            return func(df_filtrado, *args[1:], **kwargs)

        return wrapper
    return decorador


# Uso del decorador en una función
@omitir_personas_jovenes(0)
def procesar_datos_personas(index):
    # Realizar el análisis o procesamiento de datos
    # En este ejemplo, simplemente imprimir el DataFrame resultante
    print(index)


# Leer el conjunto de datos desde un archivo CSV
conjunto_datos = pd.read_csv('conjunto_datos12138626.csv')


# Llamar a la función decorada
procesar_datos_personas(conjunto_datos)


```

## 4. Explique el propósito del bloque with en Python y proporcione un ejemplo práctico relacionado con el manejo de archivos.

with es proporcionar una sintaxis más limpia y segura para trabajar con recursos que requieren inicialización y liberación. Se utiliza para garantizar la correcta inicialización y finalización de recursos, como archivos, sockets o conexiones a bases de datos

Ejemplo de codigo completo se implementó en el archivo [pregunta4.py](pregunta4.py).

```python
import pandas as pd

# Ejemplo de uso del bloque with para leer y mostrar un archivo CSV
archivo_ruta = 'conjunto_datos12138626.csv'

# Uso de with para abrir y cerrar el archivo automáticamente
with open(archivo_ruta, 'r') as archivo_csv:
    # Utilizar pandas para leer el archivo CSV
    conjunto_datos = pd.read_csv(archivo_csv)
    # Mostrar el contenido del DataFrame
    print(conjunto_datos)

# Fuera del bloque with, el archivo se cierra automáticamente
# y los recursos son liberados

# Puedes continuar con otras operaciones fuera del bloque with
print("El achivo " "conjunto_datos12138626.csv, " "se leyo con exito")

```
## 5. Utilizando el conjunto de datos proporcionado (guardado en 'conjunto_datos.csv'), cargue los datos en un DataFrame de pandas. Muestre cómo seleccionar solo las filas donde la edad es mayor a 30

Ejemplo de codigo completo se implementó en el archivo [pregunta5.py](pregunta5.py).

```python
import pandas as pd

# Cargar el conjunto de datos en un DataFrame
archivo_ruta = 'conjunto_datos12138626.csv'
conjunto_datos = pd.read_csv(archivo_ruta)

# Mostrar el DataFrame completo
print("DataFrame completo:")
print(conjunto_datos)

# Seleccionar solo las filas donde la edad es mayor a 30
mayores_de_30 = conjunto_datos[conjunto_datos['Edad'] > 30]

# Mostrar el DataFrame resultante
print("\nFilas donde la edad es mayor a 30:")
print(mayores_de_30)

```
## 6. Utilizando el conjunto de datos, cree un gráfico de dispersión que represente la relación entre la altura y el peso de los individuos

Ejemplo de codigo completo se implementó en el archivo [pregunta6.py](pregunta6.py).

```python
import pandas as pd
import matplotlib.pyplot as plt

# Cargar el conjunto de datos desde el archivo CSV
archivo_ruta = 'conjunto_datos12138626.csv'
conjunto_datos = pd.read_csv(archivo_ruta)

# Crear gráfico de dispersión
plt.figure(figsize=(8, 6))
plt.scatter(conjunto_datos['Altura'],
            conjunto_datos['Peso'], color='blue', alpha=0.7)
plt.title('Relación entre Altura y Peso')
plt.xlabel('Altura (cm)')
plt.ylabel('Peso (kg)')
plt.grid(True)
plt.show()

```
## 7. Explique en qué situaciones se podría utilizar una regresión lineal y proporcione un ejemplo práctico relacionado con el conjunto de datos.
Dentro de la evaluacion de rendimiento de una prueba academicas, se podria crear un modelo para entender como las horas de estudio y las horas de seño afecta a la futuras calificaciones de los estudiantes en un examen final o para predecir una posible puntuacion en un examen teniendo datos dependientes como lo seria la nota final y datos independientes como las horas de sueño y estudio. Ya que para crear una regresion lineal se necesitan Datos dependientes y dato independientes. de esta forma el modelo se puede entrenar y hacer una prediccion posible con los datos ingresados.  

Ejemplo de codigo completo se implementó en el archivo [pregunta7.py](pregunta7.py).

```python
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
import matplotlib.pyplot as plt

# Cargar el conjunto de datos
archivo_ruta = 'conjunto_datos12138626.csv'
conjunto_datos = pd.read_csv(archivo_ruta)

# Seleccionar las variables independientes (edad) y dependiente (peso)
X = conjunto_datos[['Edad']]
y = conjunto_datos['Peso']

# Dividir el conjunto de datos en conjunto de entrenamiento y prueba
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)

# Crear el modelo de regresión lineal
modelo = LinearRegression()

# Entrenar el modelo
modelo.fit(X_train, y_train)

# Hacer predicciones en el conjunto de prueba
y_pred = modelo.predict(X_test)

# Calcular el error cuadrático medio
mse = mean_squared_error(y_test, y_pred)
print(f"Error cuadrático medio: {mse}")

# Visualizar la regresión lineal
plt.scatter(X_test, y_test, color='blue', label='Datos reales')
plt.plot(X_test, y_pred, color='red', linewidth=3, label='Regresión lineal')
plt.title('Regresión Lineal: Edad vs. Peso')
plt.xlabel('Edad')
plt.ylabel('Peso')
plt.legend()
plt.show()

```
## 8. Describa el concepto de clustering y proporcione un ejemplo práctico de cómo se podría aplicar al conjunto de datos para identificar grupos de personas.

El objetivo del clustering es organizar un conjunto de datos en grupos de manera que los elementos dentro de un mismo grupo sean muy parecidos entre sí, pero distintos de los elementos en otros grupos. En otras palabras, se trata de encontrar grupos de cosas que se parecen mucho entre ellas, pero que son diferentes de cosas en otros grupos. Este proceso nos ayuda a identificar patrones y relaciones dentro de los datos sin necesidad de que alguien nos diga de antemano a qué grupo pertenece cada cosa.

Ejemplo de codigo completo se implementó en el archivo [pregunta8.py](pregunta8.py).

```python

import pandas as pd
from sklearn.cluster import KMeans
from sklearn.preprocessing import StandardScaler
import matplotlib.pyplot as plt


# Cargar el conjunto de datos
archivo_ruta = 'conjunto_datos12138626.csv'
conjunto_datos = pd.read_csv(archivo_ruta)


# Seleccionar las características relevantes (Edad, Altura, Peso)
caracteristicas = conjunto_datos[['Edad', 'Altura', 'Peso']]


# Normalizar las características para asegurar escalas comparables
escalador = StandardScaler()
caracteristicas_normalizadas = escalador.fit_transform(caracteristicas)


# Aplicar el algoritmo de K-Means para formar 3 clusters
modelo_kmeans = KMeans(n_clusters=3, random_state=42)
conjunto_datos['Cluster'] = modelo_kmeans.fit_predict(
    caracteristicas_normalizadas)


# Visualizar los clusters en el espacio de características
plt.scatter(conjunto_datos['Edad'], conjunto_datos['Peso'],
            c=conjunto_datos['Cluster'], cmap='viridis', alpha=0.7)
plt.title(' Edad vs. Peso')
plt.xlabel('Edad')
plt.ylabel('Peso')
plt.show()


```



# Requisitos

- Python 3.6
- Bibliotecas: pandas, matplotlib, seaborn, scikit-learn

### Pasos para clonar el repositorio y ejecutar el programa en linux:
```bash
git clone https://github.com/Desmond16170/ie0217.git --branch Examen2 --single-branch

cd ./ie0217/"Examen Final"

python examen.py
python pregunta1.py
python pregunta2.py
python pregunta3.py
python pregunta4.py
python pregunta5.py
python pregunta6.py
python pregunta7.py
python pregunta8.py

```
### Paso para clonar el repositorio y ejecutar el pograma en windows:

```bash

git clone https://github.com/Desmond16170/ie0217.git --branch Examen2 --single-branch

cd ./ie0217/"Examen Final"

python examen.py
python pregunta1.py
python pregunta2.py
python pregunta3.py
python pregunta4.py
python pregunta5.py
python pregunta6.py
python pregunta7.py
python pregunta8.py
```