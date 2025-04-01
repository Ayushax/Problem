#include <stdio.h>

int main(){
    
    int i,j,k;
    for ( i = 1; i <=5; i++)
    {
        for ( k = 1; k <=5-i; k++)
        {
            printf(" ");
        }
        
        for ( j = 1; j <=i; j++)
        {
            if(i%2==1)
            {
                printf("#");
                printf(" ");
            }
            else
            {
                printf("*");
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
     return 0;
}