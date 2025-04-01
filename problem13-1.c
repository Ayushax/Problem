#include <stdio.h>

int main(){
    int no[10],even[10],odd[10];
    int i=0,j=0,k=0;  
    for ( i=0; i < 10; i++)
    {
        printf("Enter the no.%d : ",i+1);
        scanf("%d",&no[i]);
        
        if (no[i]%2==0)
        {
            even[j] = no[i];
            j++;
        }
        else
        {            
            odd[k] = no[i];
            k++;
        }
    }
    printf("Even no: ");
    
    for ( i = 0; i<j; i++)
    {
        printf("%d",even[i]);
        if (i <j-1)
        {
            printf(", ");
        }
        
    }
    printf("\n");
    printf("Odd no: ");
    for ( i = 0; i<k; i++)
    {
        printf("%d",odd[i]);
        if (i <k-1)
        {
            printf(", ");
        }
    }
     return 0;
}