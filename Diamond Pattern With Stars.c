#include <stdio.h>

int main()
{
    int i, j, rows;
    int stars, spaces;
    scanf("%d", &rows);
    stars = 1;
    spaces = rows - 1;
    
    /* Iterate through rows */
    for(i=0;i<2*rows-1;i++)
    {
        /* Print spaces */
        for(j=0;j<spaces;j++)
            printf(" ");
        
        /* Print stars */
        for(j=0;j<stars;j++)
            printf("*");
        
        /* Move to next line */
        printf("\n");
        
        if(i<=rows)
        {
            spaces--;
            stars+=2;
        }
        else
        {
            spaces++;
            stars-=2;
        }
    }
    
    return 0;
}