#include <stdio.h>
void main()
{
    int cigar;
    int weekend;
    printf("enter the number of cigar \n");
    scanf("%d",& cigar);
    printf("enter 1 for weekend \n 0 for not weekend \n");
    scanf ("%d",& weekend);
    if (weekend)
    {
        
            if(cigar>=40)
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
    if(cigar>=40&&cigar<=60)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
}