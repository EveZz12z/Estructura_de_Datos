/*
============================ Ejercicio 2 ==============================
Crear un programa (con el esqueleto que se deja a continuacion) donde
se generen cadenas de caracteres aleatorias de 5, 10, 15 y 20 caracteres
de largo, y se muestren por pantalla.
=======================================================================
*/

#include <stdio.h>   /* <-- Para usar printf      */
#include <stdlib.h>  /* <-- Para usar rand y srand */
#include <time.h>    /* <-- Para usar time(NULL)   */


void generar_cadena(char destino[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		destino[i] = 'A' + (rand() % 26);
	}

	destino[n] = '\0';
}

int main(void)
{
	srand(time(NULL));

	char cadena5[6];    
	char cadena10[11];  
	char cadena15[16]; 
	char cadena20[21];  

	generar_cadena(cadena5, 5);
	generar_cadena(cadena10, 10);
	generar_cadena(cadena15, 15);
	generar_cadena(cadena20, 20);

	printf("Cadena de 5 caracteres:  %s\n", cadena5);
	printf("Cadena de 10 caracteres: %s\n", cadena10);
	printf("Cadena de 15 caracteres: %s\n", cadena15);
	printf("Cadena de 20 caracteres: %s\n", cadena20);

	return 0;
}