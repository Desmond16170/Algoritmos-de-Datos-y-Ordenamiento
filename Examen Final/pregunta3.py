import pandas as pd


def omitir_personas_jovenes(umbral_edad):
    def decorador(func):
        def wrapper(*args, **kwargs):
            # Obtener el DataFrame del primer argumento
            df = args[0]

            # Aplicar el filtro al DataFrame
            df_filtrado = df[df['Edad'] >= umbral_edad]

            # Llamar a la función principal con el DataFrame filtrado
            return func(df_filtrado, *args[1:], **kwargs)

        return wrapper
    return decorador


# Uso del decorador en una función
@omitir_personas_jovenes(0)
def procesar_datos_personas(index):
    # Realizar el análisis o procesamiento de datos
    # En este ejemplo, simplemente imprimir el DataFrame resultante
    print(index)


# Leer el conjunto de datos desde un archivo CSV
conjunto_datos = pd.read_csv('conjunto_datos12138626.csv')


# Llamar a la función decorada
procesar_datos_personas(conjunto_datos)
