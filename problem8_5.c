#include <stdio.h>
//int take only 10 digit number
int main(){
    int n,L,F,sum;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    L = n%10;
    
   while (n!=0)
   {
     F = n%10;
     n /= 10;
   }
   sum = F + L;
   printf("The sum of n of first and last digit is: %d",sum);
   
     return 0;
}