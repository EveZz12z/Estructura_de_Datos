#include <stdio.h>   /* <-- Para usar printf      */
#include <stdlib.h>  /* <-- Para usar rand y srand */
#include <time.h>    /* <-- Para usar time(NULL)   */


void bubbleSort(int P[], int n)
{
    for(int i=0; i< n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(P[j]>P[j+1])
            {
                int temp=P[j];
                P[j]=P[j+1];
                P[j+1]=temp;
            }
        }
    }

}

int main()
{

    int arr[]={5,7,1,4,2};
    int n=5;
    int P[5];

    for(int i=0; i<n;i++)
    {
        P[i]= arr[i];
    }
    printf("Arreglo original (Sin ordenar):\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t", P[i]);
    }
    printf("\n");
    
    bubbleSort(P, n);
    printf("Arreglo ordenado (Bubble Sort):\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t", P[i]);
    }
    printf("\n");
}