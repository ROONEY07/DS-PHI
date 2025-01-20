#include <stdio.h>

int main() 
{
    int N, i, row, col;
    
    scanf("%d", &N);

   
    for (i = 0; i <=N; i++) 
    {
        for (row = 1; row <= i; row++) 
        {
            printf("%d ", row);
        }
        printf("\n");
    }

    
    for (i = N - 1; i > 0; i--) 
    {
        for (col = 1; col <= N - i; col++) 
        {
            printf("  "); 
        }
        
        for (row = 1; row <= i; row++) 
        {
            printf("%d ", row);
        }
        printf("\n");
    }

    return 0;
}