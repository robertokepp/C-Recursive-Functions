#include <stdio.h>
#include <stdlib.h>

int sum (int x, int y)
{
    if(y>0)
    {
        x++;
        y--;

        return sum (x,y);
    }
}

int main()
{
    int x, y, result;
    printf("Enter the first number: ");
    scanf("%d",&x);

    printf("\nEnter the second number: ");
    scanf("%d",&y);

    result= sum (x,y);

    printf("\nThe result is: %d\n", result);
    return 0;
}
