#include <stdio.h>
#include <stdlib.h>

int factorial (int n)
{
    if(n==0)
    {
        return 1;
    }

    else
    {
        n=n*factorial (n-1);
        return n;
    }
}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("\nThe factorial of the number is: %d\n", 163, factorial (n));
    return 0;
}
