#include <stdio.h>

int main(){
    int marks[5],Rollno[5];
    for (int i = 0; i <5; i++)
    {
        printf("Enter the marks of Rollno.%d :",i+1);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i <5; i++)
    {
        printf("The marks of Rollno.%d is:%d\n",i+1,marks[i]);
        
    }
    
     return 0;
}