#include <stdio.h>
void main()
{
    int big;
    int small;
    int goal;

    printf("Enter the amount of big  bricks \n");
    scanf("%d",&big);
    printf("Enter the amount of smallbrickd \n");
    scanf("%d",&small);
    printf("Enter the amount goal bricks \n");
    scanf("%d",&goal);
    
    int required=goal/5;
    if (required<=big)
    {
        int rem=goal-(required*5);
        if (rem<=small)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        int rem=goal-(big*5);
        if(rem<=small)
        {
            printf("true");
        }
        else 
        {
            printf("false");
        }
    }
}