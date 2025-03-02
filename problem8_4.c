#include <stdio.h>

int main(){
    int a = 0,b =1,c,n;
    printf("Enter the n of fibonacci terms: ");
    scanf("%d",&n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    }
    if (n!=0 && n>0)
    {
        printf("%d",a);
    }
    if (n > 1) {
        printf(",%d",b);
    }
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        printf(",%d",c);
        a = b;
        b = c;
    }
     return 0;
}