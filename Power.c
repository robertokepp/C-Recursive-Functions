#include <stdio.h>
#include <stdlib.h>

int power (int x, int n)
{
    if(n==0)
    {
    return 1;
    }

    if(n==1)
    {
    return x;
    }

    else
    {
    x=x*power(x,n-1);

    return x;
    }
}

int main()
{
    int x, n, result;
    printf("Enter the number: ");
    scanf("%d",&x);

    printf("\nThe number is power to?: ");
    scanf("%d",&n);

    result= power (x,n);

    printf("\nThe result is: %d\n", result);
    return 0;
}
