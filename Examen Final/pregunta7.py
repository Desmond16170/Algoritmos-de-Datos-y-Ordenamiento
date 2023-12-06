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
