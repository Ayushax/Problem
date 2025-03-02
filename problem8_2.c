#include <stdio.h>

int main(){
        int rem,num,rev=0;
        printf("Enter the num:");
        scanf("%d",&num);
        while (num!=0)
        {
            rem = num%10;
            rev = rev*10 + rem;
            num /= 10;
        }
        printf("Reverse of Number is:%d",rev);
        
        
     return 0;
}