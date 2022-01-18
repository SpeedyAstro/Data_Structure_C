

/* to delete an element at user defined position in linear array */
#include<stdio.h>
int main()
{
    int arr[100],n,pos,item;
    printf("ENTER THE NUMBER OF ELEMENTS :");
    scanf("%d",&n);

    printf("Enter Elements of array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position where element need to be deleted ");
    scanf("%d",&pos);
    for (int i = pos-1; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
printf("final array after insertion :");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ,",arr[i]);
    }
    return 0;
    
}







