#include <stdio.h>
#include <stdlib.h>

int fibonacci (int n)
{
    if(n==1 || n==2)
    {
    return 1;
    }

    else
    {
    return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main()
{
    int n, resultado;
    printf("Enter the number: ");
    scanf("%d",&n);

    resultado= fibonacci (n);

    printf("\nthe result is: %d\n", fibonacci (n));

    return 0;
}
