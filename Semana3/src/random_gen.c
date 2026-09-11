/**
 * @file random_gen.c
 * @brief Implementación de funciones de generación de valores aleatorios
*/
#include "random_gen.h"
#include <stdlib.h>

/**
 * @brief Genera un string aleatorio de largo fijo usando letras mayúsculas
 *
 * @param cantidad_letras Cantidad de caracteres a generar
 * @return char * String generado (memoria reservada con el malloc)
 */
char* generar_string_aleatorio(int cantidad_letras)
{
	const char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* resultado = (char*)malloc(cantidad_letras + 1);
	if (resultado == NULL)
	{
		exit(1);
	}

	for (int i = 0; i < cantidad_letras; i++)
	{
		resultado[i] = alfabeto[rand() % 26];
	}
	resultado[cantidad_letras] = '\0';

	return resultado;
}

/**
 * @brief Genera un entero aleatorio dentro de un rango [valor_minimo, valor_maximo]
 *
 * @param valor_minimo Valor mínimo del rango
 * @param valor_maximo Valor máximo del rango
 * @return int Número generado
 */
int generar_numero_aleatorio(int valor_minimo, int valor_maximo)
{
	return valor_minimo + rand() % (valor_maximo - valor_minimo + 1);
}