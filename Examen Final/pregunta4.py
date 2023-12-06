import pandas as pd

# Ejemplo de uso del bloque with para leer y mostrar un archivo CSV
archivo_ruta = 'conjunto_datos12138626.csv'

# Uso de with para abrir y cerrar el archivo automáticamente
with open(archivo_ruta, 'r') as archivo_csv:
    # Utilizar pandas para leer el archivo CSV
    conjunto_datos = pd.read_csv(archivo_csv)
    # Mostrar el contenido del DataFrame
    print(conjunto_datos)

# Fuera del bloque with, el archivo se cierra automáticamente
# y los recursos son liberados

# Puedes continuar con otras operaciones fuera del bloque with
print("El achivo " "conjunto_datos12138626.csv, " "se leyo con exito")
