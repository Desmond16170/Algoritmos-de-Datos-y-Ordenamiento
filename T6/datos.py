# -*- coding: utf-8 -*-

import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.cluster import KMeans

# Cargar y preparar los datos
df = pd.read_csv("traffic.csv")
df['DateTime'] = pd.to_datetime(df['DateTime'] + ' ' + df['Time'])
df['year'] = df['DateTime'].dt.year
df['month'] = df['DateTime'].dt.month
df['day'] = df['DateTime'].dt.day
df['hour'] = df['DateTime'].dt.hour
df.drop(['DateTime', 'Time', 'Junction', 'ID'], axis=1, inplace=True)

# Visualización de datos para clustering
plt.figure()
sns.pairplot(df[['year', 'month', 'day', 'hour', 'Vehicles']])
plt.title('Pairplot for Clustering')
plt.show()

# Implementación de K-means para determinar el número óptimo de clusters
inertia = []
for i in range(1, 11):
    kmeans = KMeans(n_clusters=i, random_state=42)
    kmeans.fit(df[['year', 'month', 'day', 'hour', 'Vehicles']])
    inertia.append(kmeans.inertia_)

plt.figure()
plt.plot(range(1, 11), inertia)
plt.title('Método del Codo para K-means')
plt.xlabel('Número de clusters')
plt.ylabel('Inertia')
plt.show()

# Aplicar K-means con el número óptimo de clusters
# Aquí puedes usar el método del codo para determinar el número óptimo de clusters
num_clusters = 3  # Reemplazar con el número óptimo encontrado
kmeans = KMeans(n_clusters=num_clusters, random_state=42)
df['cluster'] = kmeans.fit_predict(df[['year', 'month', 'day', 'hour', 'Vehicles']])

# Visualizar los clusters
plt.figure()
sns.scatterplot(x='hour', y='Vehicles', hue='cluster', data=df)
plt.title('Clusters of Traffic Data')
plt.show()

# Preparación para regresión
X = df[['year', 'month', 'day', 'hour']]
y = df['Vehicles']
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Regresión lineal
modelo = LinearRegression()
modelo.fit(X_train, y_train)
y_pred = modelo.predict(X_test)
r2 = modelo.score(X_test, y_test)
print("Coeficiente de Determinacion (R2): {}".format(r2))

# Visualización de la regresión
plt.scatter(X_test['hour'], y_test, label='Valores Reales')
plt.plot(X_test['hour'], y_pred, label='Regresión Lineal', color='red', linewidth=2)
plt.xlabel('Hora del Día')
plt.ylabel('Número de Vehículos')
plt.title('Regresión Lineal para Predicción de Tráfico')
plt.legend()
plt.show()

prediccion = modelo.predict([[2023 ,10,10, 13]])
print("Cantidad estimada de autos: {}".format(prediccion[0]))
