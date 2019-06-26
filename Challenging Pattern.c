/*
input = 3

output = 
*
*1*
*121*
*12321*
*121*
*1*
*
*/
#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);

    printf("*\n");
    // Print the first upper half
    for(i=1;i<=N;i++)
    {
        printf("*");
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        j-=2;
        for(;j>0;j--)
        {
            printf("%d", j);
        }
        printf("*");

        printf("\n");
    }
    i-=2;
    // Print the lower half of the pattern
    for(;i>0;i--)
    {
        printf("*");
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        j-=2;
        for(;j>0;j--)
        {
            printf("%d", j);
        }
        printf("*");

        printf("\n");
    }
    printf("*");

    return 0;
}