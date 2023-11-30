# -*- coding: utf-8 -*-

import pandas as pd
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
import sns
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split

# Cargar datos desde el archivo CSV
df = pd.read_csv("traffic.csv")

# Convertir la columna 'DateTime' a formato de fecha y hora
df['DateTime'] = pd.to_datetime(df['DateTime'] + ' ' + df['Time'])

# Crear columnas adicionales para año, mes, día y hora
df['year'] = df['DateTime'].dt.year
df['month'] = df['DateTime'].dt.month
df['day'] = df['DateTime'].dt.day
df['hour'] = df['DateTime'].dt.hour

# Eliminar columnas innecesarias
df.drop(['DateTime', 'Time', 'Junction', 'ID'], axis=1, inplace=True)

# Visualización de relaciones mediante pairplot
sns.pairplot(df[['year', 'month', 'day', 'hour', 'Vehicles']])
plt.title('Pairplot for Clustering')
plt.show()

# Determinar el número óptimo de clusters utilizando el método del codo
inertia = []
for i in range(1, 11):
    kmeans = KMeans(n_clusters=i, random_state=42)
    kmeans.fit(df[['year', 'month', 'day', 'hour', 'Vehicles']])
    inertia.append(kmeans.inertia_)

# Graficar el método del codo
plt.plot(range(1, 11), inertia)
plt.title('Metodo del Codo')
plt.xlabel('Numero de clusters')
plt.ylabel('Inertia')
plt.show()

# Aplicar KMeans con el número óptimo de clusters
num_clusters = 3
kmeans = KMeans(n_clusters=num_clusters, random_state=42)
df['cluster'] = kmeans.fit_predict(df[
    ['year', 'month', 'day', 'hour', 'Vehicles']])

# Visualización de clusters mediante scatterplot
sns.scatterplot(x='hour', y='Vehicles', hue='cluster', data=df)
plt.show()

# Dividir datos en conjunto de entrenamiento y prueba para regresión lineal
X = df[['year', 'month', 'day', 'hour']]
y = df['Vehicles']
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)

# Crear y entrenar un modelo de regresión lineal
modelo = LinearRegression()
modelo.fit(X_train, y_train)
y_pred = modelo.predict(X_test)

# Calcular y mostrar el coeficiente de determinación (R2)
r2 = modelo.score(X_test, y_test)
print("Coeficiente de Determinacion (R2): {}".format(r2))

# Graficar la regresión lineal
plt.figure()
sns.regplot(x=y_test, y=y_pred, data=df, line_kws={"color": "C1"})
plt.xlabel('Valores Reales')
plt.ylabel('Predicciones')
plt.title('Grafico de Regresion')
plt.show()

# Realizar una predicción para una fecha específica
prediccion = modelo.predict([[2023, 29, 10, 13]])
print("Cantidad estimada de autos: {}".format(prediccion[0]))
