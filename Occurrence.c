#include <stdio.h>
#include <stdlib.h>

int occurrence (int n, int vector[8], int objective, int position)
{
    if(position>n-1)
    {
    return 0;
    }

    else
    {

    if(vector[position]==objective)
    {
    return (1+occurrence(n, vector, objective, position+1));
    }
    else
    {
    return (occurrence(n, vector, objective, position+1));
    }

    }

}

int main()
{
    int objective;

    printf("Enter the number to search: ");
    scanf("%d",&objective);

    int vector[10]={2,3,5,6,3,4,6,6};

    printf("\nThe number repeated: %d times", 163, occurrence(8,vector, objective,0));
    printf("\n");

    return 0;
}
