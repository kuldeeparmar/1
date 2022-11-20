
#include<stdio.h>

int main()
{
    // count odd elements in array

     int n;
    printf("enter value of n : ");
    scanf("%d",&n);
    int arr[n];
    printf("array elements : ");
    int count=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
            count++;

    }
    printf("odd numbers are %d\n ",count);
    return 0;
