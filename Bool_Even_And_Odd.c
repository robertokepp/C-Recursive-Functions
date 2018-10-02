#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

    bool even (int n);
    bool odd (int n);

bool even (int n)
{
    if(n==0)
    {
    return true;
    }

    else
    {
    odd (n-1);
    }
}

bool odd (int n)
{
    if(n==0)
    {
    return false;
    }

    else
    {
    even (n-1);
    }
}

int main()
{
    int n, numero;

    printf("Enter the number: ");
    scanf("%d", &numero);

    if(even(numero)==true)
    {
    printf("\nThe number is even\n");
    }

    else
    {
    printf("\nThe number is odd\n");
    }

    return 0;
}
