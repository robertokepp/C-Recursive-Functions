#include <stdio.h>
#include <stdlib.h>

int euclid (int n1, int n2)
{
    if(n1%n2==0)
    {
    return n2;
    }

    else
    {
    euclid(n2,n1%n2);
    }

}

int main()
{
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("\nEnter the second number: ");
    scanf("%d", &n2);

    if(n1>n2)
    {
    printf("\nThe result is: %d\n", euclid (n1,n2));
    }

    else
    {
    printf("\nThe result is: %d\n", euclid (n2,n1));
    }

    return 0;
}
