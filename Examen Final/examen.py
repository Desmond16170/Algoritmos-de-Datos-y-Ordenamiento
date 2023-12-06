import pandas as pd
import random


# Funcion para generar un conjunto de datos con caracteristicas aleatorias
def generar_conjunto_datos(
        num_filas, semilla=42):
    # Fijar la semilla para reproducibilidad
    random.seed(semilla)
    # Crear un diccionario con datos aleatorios
    datos = {
        'Edad': [
            random.randint(18, 60) for _ in range(num_filas)],
        'Altura': [
            round(random.uniform(150, 190), 2) for _ in range(num_filas)],
        'Peso': [
            round(random.uniform(50, 100), 2) for _ in range(num_filas)],
        'ManoDominante': [
            'Diestro' if random.random() < 0.9 else 'Zurdo'
            for _ in range(num_filas)],
        'Genero': random.choices(['Masculino', 'Femenino'], k=num_filas)
    }
    # Crear un DataFrame de pandas con los datos generados
    return pd.DataFrame(datos)


carne_hex = 0xB93882
conjunto_datos = generar_conjunto_datos(1000, semilla=carne_hex)
conjunto_datos.to_csv('conjunto_datos' + str(carne_hex) + '.csv', index=False)
