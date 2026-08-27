#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int main() {
    int x = 7, y = 20, *a, *b, *c;
    int *arr;

    arr = (int *) malloc(MAX * sizeof(int));

    a = &x;
    b = a;
    c = &y;

    *a = 3;
    *b = *c;
    *(arr) = *a;
    *(arr+1) = *c;
    *(arr+2) = x + y;

    b = &y;
    *b += 5;

    printf("%d,%d,%d,%d,%d,%d", x, y, *arr, *(arr+1), *(arr+2), *a);
    return 0;
}