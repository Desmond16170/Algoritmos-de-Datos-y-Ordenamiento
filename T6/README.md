# Análisis de Tráfico y Predicción de Vehículos
## Instrucciones de Uso
## Funcionalidad
## Requisitos
### Pasos para clonar el repositorio y ejecutar el programa en linux
# Informe del Proyecto de Análisis de Tráfico

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

# Informe del Proyecto de Análisis de Tráfico
Este proyecto se centra en analizar y predecir patrones de tráfico utilizando técnicas de clustering y regresión. A continuación, se presentan los aspectos clave de nuestra investigación.

## Datos Post-Limpieza
Iniciamos con un conjunto de datos que contiene información sobre el tráfico, incluyendo la fecha y hora, la cantidad de vehículos en un punto de control de tráfico y otras variables relacionadas. Después de la limpieza de datos, eliminamos columnas innecesarias y manejamos los valores nulos, dejando las siguientes características para nuestro análisis: año, mes, día, hora y el número de vehículos.

## Graficas Iniciales 
Para comprender mejor nuestros datos, creamos un pairplot que nos permitió visualizar las relaciones entre las variables. Esta gráfica nos proporcionó una visión general de la estructura y la distribución de los datos.

## Clustering
Aplicamos el algoritmo de K-means para segmentar nuestros datos y determinar patrones de tráfico. Utilizamos el método del codo para encontrar el número óptimo de clusters y visualizamos los clusters resultantes en un gráfico de dispersión. Esto nos ayudó a identificar grupos de datos con comportamientos de tráfico similares.

## Regresiones 
Luego, realizamos análisis de regresión para predecir el número de vehículos en función del año, mes, día y hora. Utilizamos una regresión lineal para modelar esta relación y calculamos el coeficiente de determinación (R²) para evaluar la calidad del ajuste del modelo.

## Análisis Final
La investigación se centró en utilizar técnicas de clustering para identificar patrones de tráfico y regresiones para predecir futuros valores de tráfico. Esto tiene sentido en situaciones del mundo real, ya que permite a las autoridades de tráfico y planificadores de transporte tomar decisiones informadas sobre la gestión del tráfico y la planificación de carreteras. Además, estos enfoques pueden ser útiles para pronosticar la demanda de tráfico en áreas urbanas y tomar medidas proactivas para evitar la congestión del tráfico.