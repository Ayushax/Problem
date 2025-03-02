#include <stdio.h>

int main(){
    int i,n,f =1;
    float sum = 0.0;
    printf("Enter your number upto n:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        f*=i;
        sum+= (1.0/f);
        if (i<n)
        {
           printf("1/%d! +",i);
        }
        else
        printf(" 1/%d!",i);
         
    }
    printf(" = %f",sum);
     return 0;
}