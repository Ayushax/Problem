#include <stdio.h>
// Finding the max,min,even,odd no from the 1-D array
int main(){
    int no[10],even[10],odd[10],max = -99999999,min = 99999999,j=0,k=0;
    for (int i = 0; i < 10; i++)
    {
          printf("Enter the No.%d:",i+1);
          scanf("%d\n",&no[i]);
    }
    for (int i = 0; i < 10; i++)
    {
          if (no[i]>max)
          {
               max = no[i];
          }
          if (no[i]<min)
          {
               min = no[i];
          }
          if (no[i]%2==0)
          {
               even[j] = no[i];
               j++;
          }
          else
          {
               odd[k] = no[i];
               k++;
          }
    }
    printf("The max number is: %d\n",max);
    printf("The min number is: %d\n",min);
    printf("Even no: ");
  for (int i = 0; i < j; i++)
  {
     printf("%d",even[i]);
     if (i<j-1)
     {
          printf(",");
     }

  }
     printf("\n");
    printf("Odd no: ");
  for (int i = 0; i < k; i++)
  {
     printf("%d",odd[i]);
     if (i<k-1)
     {
          printf(",");
     }
  }
     
     return 0;
}