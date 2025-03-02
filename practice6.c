#include <stdio.h>

int main(){
/*  1 - Sunday 
    2 - Monday
    3 - Tuesday 
    4 - Wednesday
    5 - Thursday
    6 - Friday
    7 - Saturday
    */ 
    int n;
    printf("Enter the number betweeen 1-7: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    
    default:
        printf("Invalid input Please Enter between 1-7");
        break;
    }


 return 0;
}