#include <stdio.h>

int main(){
    int num,rem,sum= 0 ;
    printf("Enter the num:");
    scanf("%d",&num);
    while (num!=0)
    {
        rem = num%10;
        sum = sum +  rem;
        num = num/10;
    }
    printf("The sum of digit is:%d",sum);
    
     return 0;
}