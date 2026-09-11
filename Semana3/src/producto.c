/**
 * @file producto.c
 * @brief Funciones relacionadas con la estructura Producto
*/
#include "producto.h"

/**
 * @brief Construye un producto a partir de su info
 *
 * @param nombre Nombre del producto
 * @param cantidad Cantidad en stock
 * @param proveedor Código de proveedor
 * @param precio Precio del producto
 * @return Producto
 */
Producto crear_producto(char* nombre, int cantidad, char* proveedor, float precio)
{
	Producto p;

	p.nombre = (char*)malloc(strlen(nombre) + 1);
	if (p.nombre == NULL)
	{
		printf("Error: No se pudo asignar memoria para el nombre\n");
		exit(1);
	}
	strcpy(p.nombre, nombre);

	p.proveedor = (char*)malloc(strlen(proveedor) + 1);
	if (p.proveedor == NULL)
	{
		printf("Error: No se pudo asignar memoria para el proveedor\n");
		exit(1);
	}
	strcpy(p.proveedor, proveedor);

	p.cantidad = cantidad;
	p.precio = precio;

	return p;
}

/**
 * @brief Imprime información de una estructura Producto
 *
 * @param p Estructura Producto a imprimir
*/
void print_producto(Producto p)
{
	printf("Nombre:     %s\n", p.nombre);
	printf("Cantidad:   %d\n", p.cantidad);
	printf("Proveedor:  %s\n", p.proveedor);
	printf("Precio:     %.2f\n", p.precio);
}

/**
 * @brief Elimina la memoria asignada a una estructura Producto
 *
 * @param p Estructura Producto a eliminar
*/
void eliminar_producto(Producto p)
{
	free(p.nombre);
	free(p.proveedor);
}