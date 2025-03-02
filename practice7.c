#include <stdio.h>

int main(){
    int choice;
    float num1,num2,result;
    do
    {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. MUltiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        
        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        if(choice == 5)
        {
            printf("Exiting the program Thank You!! ");
            break;
        }
        
        printf("Enter two number : ");
        scanf("%f %f",&num1,&num2);

        switch (choice)
        {
        case 1 :
            result = num1 + num2 ;
           printf("Result : %f + %f = %f\n",num1,num2,result);
            break;
            case 2 :
            result = num1 - num2 ;
           printf("Result : %f - %f = %f\n",num1,num2,result);
            break;
            case 3 :
            result = num1 * num2 ;
           printf("Result : %f X %f = %f\n",num1,num2,result);
            break;
            case 4 :
            if (num2!=0)
            {
                result = num1/num2;
                printf("Result : %f / %f = %f\n",num1,num2,result);
                
            }
            else{
                printf("Error : Division by zero is not allowed !!\n");
            }
            break;

        default:
        printf("Invalid Choice Please choise between 1 to 5\n");
            break;
        }
        char repeat;
        printf("Do you want to perform another calculation ? (y/n) :  ");
        scanf("  %c",&repeat);
        if (repeat =='n' || repeat =='N' )
        {
                printf("Exiting the program . Have a great day!!\n");
                break;
            }
        else
        {
            printf("Continuing the Next Calculation...\n");
        }
        
    } while (1);
    
     return 0;
}