#include <stdio.h>   /* <-- Para usar printf      */
#include <stdlib.h>  /* <-- Para usar rand y srand */
#include <time.h>    /* <-- Para usar time(NULL)   */


void ImprimirArreglo(int S[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d\t", S[i]);
    }
    printf("\n");
}

void selectionSort(int S[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int indiceMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(S[j] < S[indiceMin])
            {
                indiceMin = j;
            }
        }
        // Intercambiar los elementos
        int temp = S[i];
        S[i] = S[indiceMin];
        S[indiceMin] = temp;
    }

}

void insertionSort(int S[],int n)
{

    for(int i=1;i<n;i++)
    {
        int llave = S[i];
        int j = i-1;

        while(j>=0 && S[j]>llave)
        {
            S[j+1] = S[j];
            j--;
        }
        S[j+1] = llave;
    }

}

void bubbleSort(int S[],int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (S[j] > S[j + 1])
            {
                int temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
            }
        }
    }

}

int main()
{

    int ARR[]={15,67,8,16,44,27,12,35};
    int n = 8;
    int S[8];
    int opcion;

    printf("Arreglo original (Sin ordenar):\n");
    ImprimirArreglo(ARR,n);
    printf("Seleccione la opcion de su preferencia:\n\n");
    printf("1.-Selection Sort\n");
    printf("2.-Insertion Sort\n");
    printf("3.-Bubble Sort\n");
    scanf("%d", &opcion);

    for(int i=0;i<n;i++)
    {
        S[i]=ARR[i];
    }

    switch(opcion)
    {
        case 1:
            selectionSort(S,n);
            break;
        case 2:
            insertionSort(S,n);
            break;
        case 3:
            bubbleSort(S,n);
            break;
        default:
            printf("Opcion no valida\n");
            return 1;
    }


printf("Arreglo ordenado:\n");
    ImprimirArreglo(S,n);

return 0;
}