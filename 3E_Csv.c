/*
============================ Ejercicio 3 ==============================
Crear un programa (con el esqueleto que se deja a continuacion) donde
se tomen los arreglos de frutas y cantidades ya definidos, y se
escriban en un archivo CSV llamado "frutas.csv".
=======================================================================
*/

#include <stdio.h>  

int main(void)
{
	char *frutas[] = {"Manzana", "Platano", "Pera", "Uva", "Naranja"};
	int cantidades[] = {12, 7, 20, 15, 9};
	int n = 5;

	printf("Frutas y cantidades:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%s: %d\n", frutas[i], cantidades[i]);
	}

	
	FILE *archivo = fopen("frutas.csv", "w");

	
	if (archivo == NULL)
	{
		printf("Error: no se pudo crear el archivo frutas.csv\n");
		return 1;
	}

	
	fprintf(archivo, "fruta,cantidad\n");

	
	for (int i = 0; i < n; i++)
	{
		fprintf(archivo, "%s,%d\n", frutas[i], cantidades[i]);
	}

	//Cerramos el archivo para asegurar que todo se guarde en disco
	fclose(archivo);

	return 0;
}