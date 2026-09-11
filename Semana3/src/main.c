/**
 * @file main.c
 * @brief Programa principal: genera un inventario de productos y lo guarda en CSV
*/
#include "producto.h"
#include "random_gen.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CANTIDAD_PRODUCTOS 5

void productos_to_csv(Producto lista[], int cantidad);

int main()
{
	srand(time(NULL));  // Semilla aleatoria, se llama UNA vez al inicio

	char* nombres_predefinidos[CANTIDAD_PRODUCTOS] = {
		"Teclado", "Mouse", "Monitor", "Audifonos", "Webcam"
	};

	Producto inventario[CANTIDAD_PRODUCTOS];

	for (int i = 0; i < CANTIDAD_PRODUCTOS; i++)
	{
		int cantidad_stock = generar_numero_aleatorio(1, 100);
		char* codigo_proveedor = generar_string_aleatorio(5);

		float precio_ingresado;
		printf("Ingrese el precio de %s: ", nombres_predefinidos[i]);
		int leido = scanf("%f", &precio_ingresado);

		if(leido != 1)
		{
			printf("Error; no se ingreso un numero valido");
			exit(1);
		}

		inventario[i] = crear_producto(nombres_predefinidos[i], cantidad_stock, codigo_proveedor, precio_ingresado);

		free(codigo_proveedor);  // crear_producto ya copió el string, este temporal ya no sirve
	}

	printf("\n--- Inventario generado ---\n");
	for (int i = 0; i < CANTIDAD_PRODUCTOS; i++)
	{
		print_producto(inventario[i]);
		printf("\n");
	}

	productos_to_csv(inventario, CANTIDAD_PRODUCTOS);
	printf("Archivo guardado en build/productos.csv\n");

	for (int i = 0; i < CANTIDAD_PRODUCTOS; i++)
	{
		eliminar_producto(inventario[i]);
	}

	return 0;
}

/**
 * @brief Función que crea un CSV a partir de un arreglo de Productos
 *
 * @param lista Arreglo de productos
 * @param cantidad Cantidad de productos en el arreglo
 */
void productos_to_csv(Producto lista[], int cantidad)
{
	FILE* archivo = fopen("build/productos.csv", "w");
	if (archivo == NULL)
	{
		printf("Error: No se pudo abrir el archivo\n");
		exit(1);
	}

	fprintf(archivo, "Nombre,Cantidad,Proveedor,Precio\n");
	for (int i = 0; i < cantidad; i++)
	{
		fprintf(archivo, "%s,%d,%s,%.2f\n",
			lista[i].nombre, lista[i].cantidad, lista[i].proveedor, lista[i].precio);
	}

	fclose(archivo);
}