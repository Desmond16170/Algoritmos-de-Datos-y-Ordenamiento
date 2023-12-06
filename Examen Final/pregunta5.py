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
