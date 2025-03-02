#include <stdio.h>

int main(){
    int n,sum =0,i;
    printf("Enter the number upto which you want output:");
    scanf("%d",&n);
    for (i = 1; i < n; i++)
    {
     printf("%d^2+",i);
      sum+= i*i;
    }
    sum+= i*i;
    printf("%d^2",i);
    printf("= %d",sum);
     return 0;
}