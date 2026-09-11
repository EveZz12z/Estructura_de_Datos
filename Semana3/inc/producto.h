/**
 * @file producto.h
 * @brief Archivo de cabecera para la estructura Producto
*/
#ifndef PRODUCTO
#define PRODUCTO
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief Estructura que define un producto de inventario
*/
typedef struct _producto
{
	char* nombre;     /**< Nombre del producto */
	int cantidad;     /**< Cantidad en stock */
	char* proveedor;  /**< Código de proveedor (string aleatorio) */
	float precio;     /**< Precio del producto */
} Producto;

Producto crear_producto(char* nombre, int cantidad, char* proveedor, float precio);
void print_producto(Producto p);
void eliminar_producto(Producto p);

#endif