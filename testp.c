#include<stdio.h>

int main()
{   int n;
    printf("enter value of n : ");
    scanf("%d",&n);
    int arr[n];
    printf("array elements : ");


    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n/2;i++)
    {
       int first_value=arr[i];
        int sec_value=arr[n-i-1];

        arr[i]=sec_value;
        arr[n-i-1]=first_value;

    }
    printf("array after reverse :");

    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}
