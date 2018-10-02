#include <stdio.h>
#include <stdlib.h>

void invert (int n)
{
    printf("%d", n%10);

    if(n/10!=0)
    {
    invert (n/10);
    }

}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("\nthe result is: ");
    invert(n);
    printf("\n");

    return 0;
}
