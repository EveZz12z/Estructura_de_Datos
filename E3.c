#include<stdio.h>

//Selection sort o ordenamiento por seleccion

void selection(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min_index = i;

        for(int j = i+1;j < n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

main()
{
    printf("Ingrese los numeros que desea añadir a su arreglo");

    int arr[];

    for(int i=0; i<5; i++)
    {
        scanf("%d\n", arr[]);
    }
}

