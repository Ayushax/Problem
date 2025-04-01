// To arrange in Ascending Number of given Array
// Using Bubble sort...
#include <stdio.h>

int main(){
    int n;
    printf("Enter the elements you want:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d numbers: \n",n);
    for (int  i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n-i-1; j++)// less than n every loop as last elements sort out first
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        } 
    }
    printf("Numbers in Ascending Order: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    } 
     return 0;
}