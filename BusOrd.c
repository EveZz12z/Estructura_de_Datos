#include <stdio.h>   /* <-- Para usar printf      */
#include <stdlib.h>  /* <-- Para usar rand y srand */
#include <time.h>    /* <-- Para usar time(NULL)   */

int main()
{

    int S[]={3,8,12,17,21,29,34,41,47,53,58,62,69,75,81};

    int i, j;

    int der = 14, izq = 0, med;

    for(i=0; i<15;i++)
    {
        med=(izq+der) /2; //med buscara el punto medio de izq y der
        
        if(S[med] == 47)
        {
            printf("El numero 47 se ecnuentra en la posicion %d\n", med);
            break;
        }
        if(S[med] < 47)
        {
            izq=med+1;
        }
        if(S[med] > 47)
        {
            der=med-1;
        }
    }


return 0;
}