# Respuesta Examen Final


## 1. Explique el concepto de herencia en programación orientada a objetos (POO) y proporcione un ejemplo específico relacionado con el conjunto de datos bajo estudio

Es un concepto que permite la cracion de nuevas clases basadas en clases ya existentes, creando subclases o clases hijas, teniendo como bases una clase base o clases padre. Esto funciona para crear modularidad de codigo y poder reutilizar codigo ya digitado anteriormente para tener una organizacion y optimizacion de recurso al momento de prograr grandes proyectos. En este caso las subclases o clases hijas heredan atributos de las clases hijas, peor estas pueden agregar nuevo atributos, metodos o modificar los existentes. 
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
```


## 2. Diseñe e implemente una clase llamada Persona con atributos como nombre, edad, y un método que imprima la información de la persona. Luego herede de la clase Persona para crear una clase Estudiante con atributos adicionales relacionados con el conjunto de datos.

La respuesta a la pregunta 2 se implementó en el archivo [pregunta2.py](pregunta2.py).


## 3. Describa una situación en la que se podría utilizar un decorador en Python y proporcione un ejemplo práctico relacionado con el manejo de excepciones.
La creación de un decorador para registrar y manejar excepciones para un analisis de datos, en las que queramos omitir o saltar algunos datos en especifico. Ejemplo cuando dentro de los datos que se obtuvieron en el csv generado en este examen, deseamos omitir a la poblacion menores a cierta edad. 

Ejemplo de codigo completo se implementó en el archivo [pregunta3.py](pregunta3.py).

```python

    # Uso del decorador en una función
    @omitir_personas_jovenes(0)
    def procesar_datos_personas(index):
        # Realizar el análisis o procesamiento de datos
        # En este ejemplo, simplemente imprimir el DataFrame resultante
        print(index)

```

## 4. Explique el propósito del bloque with en Python y proporcione un ejemplo práctico relacionado con el manejo de archivos.

with es proporcionar una sintaxis más limpia y segura para trabajar con recursos que requieren inicialización y liberación. Se utiliza para garantizar la correcta inicialización y finalización de recursos, como archivos, sockets o conexiones a bases de datos

Ejemplo de codigo completo se implementó en el archivo [pregunta4.py](pregunta4.py).

```python

    # Uso de with para abrir y cerrar el archivo automáticamente
    with open(archivo_ruta, 'r') as archivo_csv:
        # Utilizar pandas para leer el archivo CSV
        conjunto_datos = pd.read_csv(archivo_csv)
        # Mostrar el contenido del DataFrame
        print(conjunto_datos)

```
## 5. Utilizando el conjunto de datos proporcionado (guardado en 'conjunto_datos.csv'), cargue los datos en un DataFrame de pandas. Muestre cómo seleccionar solo las filas donde la edad es mayor a 30

Ejemplo de codigo completo se implementó en el archivo [pregunta5.py](pregunta5.py).

```python
    # Seleccionar solo las filas donde la edad es mayor a 30
    mayores_de_30 = conjunto_datos[conjunto_datos['Edad'] > 30]
```
## 6. Utilizando el conjunto de datos, cree un gráfico de dispersión que represente la relación entre la altura y el peso de los individuos

Ejemplo de codigo completo se implementó en el archivo [pregunta6.py](pregunta6.py).

```python

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

    # Visualizar los clusters en el espacio de caracteristicas
    plt.scatter(conjunto_datos['Edad'], conjunto_datos['Peso'],
                sc=conjunto_datos['Cluster'], cmap='viridis', alpha=0.7)
    plt.title('Clustering: Edad vs. Peso')
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

python datos.py

```
### Paso para clonar el repositorio y ejecutar el pograma en windows:

```bash

git clone https://github.com/Desmond16170/ie0217.git --branch Examen2 --single-branch

cd ./ie0217/"Examen Final"

python datos.py
```