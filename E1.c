#include<stdio.h>

int Busqueda_Num(int arr[], int n, int x)
{
    int izq = 0;
    int der = n-1;
    int paso = 1;

    while(izq <= der)
    {
        int med = izq + (der - izq) / 2;
        printf("Paso %d: izq=%d, der=%d, med=%d, arr[med]=&%d\n", paso, izq, der, med, arr[med]);

        if(arr[med] == x)
        {
            return med;
        }
        else if(arr [med] < x)
        {
            izq = med+1;
        }
        else
        {
            der= med-1;
        }
        paso++;
    }
    return -1;
}

int busqueda_2(int arr[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        printf("Paso %d:i=%d, arr[i]=%d\n", i+1, i, arr[i]);
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,19,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 19;

    printf("---Busqueda binaria---\n");
    int r1 = Busqueda_Num(arr, n, x);
    printf("Resultado: %s en indice %d\n\n", r1 != -1 ? "encontrado" : "no encontrado", r1);

    printf("---Busqueda lineal---\n");
     int r2 = busqueda_2(arr, n, x);
     printf("Resultado: %s en indice %d\n\n", r2 != -1 ? "encontrado" : "no encontrado", r2);

     return 0;
}