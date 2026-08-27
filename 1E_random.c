/*
============================ Ejercicio 1 ==============================
Crear un programa (con el esqueleto que se deja a continuacion) donde
se reciba por consola un numero entero positivo correspondiente a una
cantidad de notas que se van a generar aleatoriamente entre 1.0 y 7.0
(datos de tipo flotante).

A continuacion calcular el promedio  de  las  notas  y  mostrarlo  por
pantalla.
=======================================================================
*/

#include <stdio.h>   /* <-- Para usar printf     */
#include <stdlib.h>  /* <-- Para usar srand      */
#include <time.h>    /* <-- Para usar time(NULL) */

int main(int argc, char *argv[])
{
	int n = -1;

	if (argc == 2)
	{
		n = atoi(argv[1]);
	}

	printf("Se recibio el numero %d por consola\n", n);

	/* Validamos que n sea positivo */
	if (n <= 0)
	{
		printf("Error: debes ingresar un numero entero positivo.\n");
		return 1;
	}

	/* Inicializamos la semilla aleatoria (una sola vez) */
	srand(time(NULL));

	float notas[n];
	float suma = 0.0;

	/* Generamos las notas entre 1.0 y 7.0 */
	for (int i = 0; i < n; i++)
	{
		notas[i] = 1.0 + (rand() / (float) RAND_MAX) * 6.0;
		suma += notas[i];
	}

	/* Imprimimos las notas en el formato [1.0, 5.3, 4.7, ...] */
	printf("Notas obtenidas (%d): [", n);
	for (int i = 0; i < n; i++)
	{
		printf("%.1f", notas[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("]\n");

	/* Calculamos y mostramos el promedio */
	float promedio = suma / n;
	printf("Promedio obtenido: %.1f\n", promedio);

	return 0;
}