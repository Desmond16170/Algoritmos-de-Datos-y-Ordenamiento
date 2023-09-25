
# Código de Ordenamiento y Gestión de Flotas de Barcos
Este es un programa C++ que permite gestionar una flota de barcos, cada uno con su número de serie único y coordenadas de latitud y longitud. El programa proporciona las siguientes funcionalidades:
## Autor // Author

- [@Desmond16170](https://github.com/Desmond16170/)
- Luis Fernando Herrera Vargas
- B93882

## Resumen de clases
Clase angulo: Representa un ángulo en grados, minutos y dirección (Norte/Sur para latitud y Este/Oeste para longitud). Se utiliza para representar las coordenadas de latitud y longitud de un barco.

Clase NumeroDeSerie: Asigna un número de serie único a cada barco creado. Cada vez que se crea un nuevo barco, se incrementa el número de serie.

Clase Barco: Representa un barco con un número de serie único y coordenadas de latitud y longitud. Permite ingresar coordenadas y mostrar la información del barco. También tiene un operador de comparación para comparar dos barcos según su latitud.

Clase FlotaDeBarcos: Gestiona una flota de barcos. Permite agregar barcos, eliminar barcos por número de serie, ordenar la flota por latitud utilizando los algoritmos de QuickSort y MergeSort, y mostrar la flota ordenada.

El programa utiliza algoritmos de ordenamiento personalizados (QuickSort y MergeSort) para comparar su eficiencia en términos de tiempo de ejecución y número de pasos.

Instrucciones de Uso
Para utilizar el programa, siga los siguientes pasos:

Compile el código fuente en un entorno de desarrollo C++ compatible.

Ejecute el programa resultante.

Utilice las opciones del menú para agregar barcos, eliminar barcos por número de serie, ordenar la flota y mostrar la flota ordenada.

Funcionalidades Principales
Agregar Barco: Permite ingresar las coordenadas de latitud y longitud de un nuevo barco y lo agrega a la flota.

Eliminar Barco: Permite eliminar un barco de la flota utilizando su número de serie.

Ordenar y Comparar Algoritmos: Ordena la flota de barcos por latitud utilizando los algoritmos de QuickSort y MergeSort, y compara su eficiencia en términos de tiempo de ejecución y número de pasos.

Mostrar Flota Ordenada: Muestra la flota de barcos ordenada por latitud.

Algoritmos de Ordenamiento Personalizados
El programa implementa algoritmos de ordenamiento personalizados (customQuickSort y customMergeSort) para ordenar la flota de barcos según su latitud. Además, se registran el tiempo de ejecución y el número de pasos para comparar la eficiencia de estos algoritmos.

Contribuciones y Mejoras Futuras
Este código proporciona una base sólida para gestionar flotas de barcos y realizar operaciones de ordenamiento eficientes. Las posibles mejoras y contribuciones futuras podrían incluir:

La adición de más funcionalidades, como la búsqueda de barcos por coordenadas.

La implementación de otros algoritmos de ordenamiento para comparar su eficiencia.

La creación de una interfaz de usuario más amigable.

La gestión de flotas más grandes y la optimización de la eficiencia del código.

La documentación y los comentarios adicionales para facilitar la comprensión y el mantenimiento del código.


## Ejecutar Localmente

Clonar el proyecto 

```bash
  git clone https://github.com/Desmond16170/ie0217/tree/feature/feature-4-Desmond16170/T2
```

Ejecutar el programa 


```bash
  cd src   /// se coloca primer dentro de la carpeta contededora
  
  g++ -o ../build/barcos2.exe Code.cpp /// Compila barcos2.exe
```

Este programa no necesita instalar dependencias 


Para ejecutar

```bash
  .\barcos2.exe 

    o bien buscar el ejecutable creado dentro de la carpeta "build"

  Open barcos2.exe
  
```


## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
