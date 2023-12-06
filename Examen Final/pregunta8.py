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
