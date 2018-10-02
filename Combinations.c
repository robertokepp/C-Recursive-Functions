#include <stdio.h>
#include <stdlib.h>

int combinations (int n, int k)
{
    if(n<1 && k>0 && k<n)
    {
    return 0;
    }

    else if(k==0 || k==n)
    {
    return 1;
    }

    else
    {
    return combinations (n-1,k) + combinations (n-1,k-1);
    }
}

int main()
{
    int n, k, result;

    printf("Enter the number of persons: ", 163);
    scanf("%d", &n);
    printf("\nEnter the number of groups ", 163);
    scanf("%d", &k);

    result = combinations (n,k);

    printf("\nThe result is: %d\n", result);

    return 0;
}
