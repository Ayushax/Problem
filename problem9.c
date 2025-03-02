#include <stdio.h>

int main(){
    
    int h,w,con1=0,con2=0;
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the height no.%d: ",i);
        scanf("%d",&h);
        if (h>170)
        {
            con1++;
        }
        printf("Enter the Weight no.%d: ",i);
        scanf("%d",&w);
        if (w<50)
        {
            con2++;
        }
        
    }
    printf("The persons whose height is greater than 170 is: %d or weight is less than 50 is: %d",con1,con2);
    
     return 0;
}