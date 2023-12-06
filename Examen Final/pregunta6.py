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
