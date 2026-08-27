#include<stdio.h>


//Insertion sort o ordenamiento por inserción

//Ejemplo otorgado

//arreglo a ordenar arr[5,2,9,1,7]


//void insertionSort(int arr[], int n)
//{
//
//  for(int i=1;i<n;i++)
//  {
//      int key = arr[i];
//      int j = i-1;
//      while(j>=0 && arr[j] > key)
//      {
//            arr[j+1] = arr[j]
//            j--; 
//      }
//      arr[j+1] = key;
//  }
//}

main()
{



return 0;
}

void insertionSort(int arr[], int n)
{

    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--; 
        }

        arr[j+1] = key;

    }
}
