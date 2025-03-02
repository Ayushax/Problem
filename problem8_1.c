#include <stdio.h>

int main(){
    int i,n,f;
    printf("Enter your number for factorial:");
    scanf("%d",&n);
    f=1;
    for (i = 1; i<=n; i++)
    {
        f =f*i;
    }
    printf("The factorial of %d is %d.",n,f) ;
    
     return 0;
}