#include <stdio.h>
#include <stdlib.h>

int multiplication (int n1, int n2)
{
    if(n2==1)
    {
    return n1;
    }

    else
    {
    return n1+multiplication(n1,n2-1);
    }

}

int main()
{
    int n1, n2, resultado;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("\nEnter the second number: ");
    scanf("%d",&n2);

    resultado= multiplication (n1,n2);

    printf("\nThe result is: %d\n", resultado);

    return 0;
}
