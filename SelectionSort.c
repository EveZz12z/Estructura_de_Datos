#include <stdio.h>   /* <-- Para usar printf      */
#include <stdlib.h>  /* <-- Para usar rand y srand */
#include <time.h>    /* <-- Para usar time(NULL)   */

void selectionSort(int R[],int n)
{

    for(int i=0;i<n-1;i++)
    {
        int indiceMinimo = i;

        for(int j= i+1;j<n;j++)
        {
            if(R[j]<R[indiceMinimo])
            {
                indiceMinimo = j;
            }
        }

        int temp = R[i];
        R[i] = R[indiceMinimo];
        R[indiceMinimo] = temp;
    }

}

int main()
{
int arr[]={4,8,11,1,0,6};
int n = 6;
int R[6];

    for(int i=0;i<n;i++)
    {

    R[i]= arr[i];

    }

    printf("\n");
    printf("Arreglo NO ordenado:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t", R[i]);
    }

    selectionSort(R, n);
    
    printf("\n");
    printf("Arreglo ordenado:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t", R[i]);
    }
}