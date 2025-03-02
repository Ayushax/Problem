#include <stdio.h>

int main()
{
    int num, Prime = 1;
    printf("Enter the num to check if it prime: ");
    scanf("%d", &num);
    if (num < 2)
    {
        printf("The given number is not prime.\n");
    }
    else{
        for (int i = 2; i <=num / 2; i++)
        {
            if (num % i == 0)
            {
                Prime = 0;
                break;
            } 
        }
           if (Prime)
           {
            printf("The given number is prime.\n");
           }
           else
           printf("The given number is not prime.\n");
         }  
        
    return 0;
}