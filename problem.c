#include <stdio.h>

int main(){
    int i=1,num;
    printf("Enter the num:");
    scanf("%d",&num);
    while (i<=num)
    {
        if(num%i ==0){ // we can also use half num as factor of any num is always less then its half
            /*
        { if("i<=num/2"){
                printf("%d",i);
            }
            i++
        }
        printf("%d",num); ye khud ka bhi factor hai 
            */
        printf("%d,",i);
                    }
        i++;
    }
    
     return 0;
}