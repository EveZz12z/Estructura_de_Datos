//Algoritmos recursivos

/*
Algoritmo iterativo

unsigned int factorial(unsigned int n)
{
int fact = 1, i;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

return fact;
}



////////


Algoritmo recursivo:

unsigned int factorial(unsigned int n)
{

    if(n==0)
    {
        return 1;
    }
    
    return n* factorial(n-1);
}


/////

Algoritmos recursivos: Fibonacci


fib(n) = fib(n-1) + fib(n-2)
f(0) = 0 ; fib(1) = 1

---

int fibonacci(int n)
{

    if(n<=1)
    {
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2)
}

*/




