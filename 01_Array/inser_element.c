
/* to insert an element at user defined position in linear array */
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
    printf("Enter position where element need to be inserted ");
    scanf("%d",&pos);
    printf("Enter number to be inserted ");
    scanf("%d",&item); 
    for (int i = n; i >=pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = item;
    printf("final array after insertion :");
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ,",arr[i]);
    }
    return 0;
    
}
