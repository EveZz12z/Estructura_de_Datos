#include <stdio.h>   /* <-- Para usar printf      */
#include <stdlib.h>  /* <-- Para usar rand y srand */
#include <time.h>    /* <-- Para usar time(NULL)   */


void insertionSort(int Z[], int n)
{

    for(int i=1;i<n;i++)
    {
        int key = Z[i];
        int j = i-1;

        while(j>=0 && Z[j]>key)
        {
            Z[j+1] = Z[j];
            j--;
        }
        Z[j+1] = key;
    }
}

int main()
{

    int arr[]={5,2,1,4,3};
    int n=5;
    int Z[5];

    for(int i=0;i<n;i++)
    {
        Z[i]=arr[i];
    }

    printf("Arreglo original (Sin ordenar):\n");

    for(int i=0;i<n;i++)
    {
        printf("%d\t", Z[i]);
    }
    printf("\n");

    insertionSort(Z,n);

    printf("Arreglo ordenado:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t", Z[i]);
    }
    printf("\n");

}