# Análisis de Tráfico y Predicción de Vehículos

Este repositorio contiene un programa en Python diseñado para realizar un análisis de tráfico, incluyendo técnicas de clustering y regresión lineal. El análisis se basa en datos de tráfico contenidos en un archivo CSV.

## Funcionalidad

El programa consta de las siguientes funcionalidades:

1. **Carga y Preprocesamiento de Datos:** El programa carga datos de tráfico desde un archivo CSV llamado "traffic.csv". Realiza conversiones de fechas y horas, así como la eliminación de columnas innecesarias, incluyendo 'DateTime', 'Time', 'Junction', e 'ID'.

2. **Análisis Visual:** Utiliza un pairplot de seaborn para visualizar relaciones entre variables como año, mes, día, hora y la cantidad de vehículos.

3. **Clustering** Determina el número óptimo de clusters utilizando el método del codo y aplica KMeans para agrupar los datos de tráfico. Los resultados se visualizan mediante un scatterplot.

4. **Predicción de Vehículos**Utiliza regresión lineal para predecir la cantidad de vehículos con base en el año, mes, día y hora. Muestra un gráfico de regresión y realiza una predicción para una fecha específica.


## Instrucciones de Uso

1. **Ejecución del Programa:** Asegúrate de tener Python 3 instalado en tu entorno. Ejecuta el programa utilizando python tu_script.py.

2. **Carga de Datos:** Asegúrate de tener un archivo CSV llamado "traffic.csv" en el mismo directorio que el script. El archivo debe contener columnas como "DateTime", "Time", "Junction", "ID", y "Vehicles".

3. **Visualización de Relaciones:** Observa el pairplot generado para entender las relaciones entre las variables.

4. **Clustering** Visualiza la representación gráfica de los clusters formados por KMeans.

5. **Predicción de Vehículos:** El programa realizará una regresión lineal y mostrará un gráfico de regresión, así como una predicción para una fecha específica.

5. **Salida del Programa:**Al finalizar, el programa imprimirá el coeficiente de determinación (R2) y la cantidad estimada de autos para una fecha específica.

## Requisitos

- Python 3
- Bibliotecas: pandas, matplotlib, seaborn, scikit-learn

### Pasos para clonar el repositorio y ejecutar el programa en linux:
```bash
git clone https://github.com/Desmond16170/ie0217.git --branch feature/feature-T6 --single-branch

cd ./T6

python datos.py

```

### Paso para clonar el repositorio y ejecutar el pograma en windows:


```bash

git clone https://github.com/Desmond16170/ie0217.git --branch feature/feature-T6 --single-branch

cd ./T6

python datos.py
```

