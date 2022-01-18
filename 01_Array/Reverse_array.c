#include<stdio.h>
void reversearray(int start , int end , int arr[])
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
         printf("%d ", arr[i]);
         printf("\n");
    }
    
}
int main()
{
    int arr[] = {23,43,64,65,76,33};
    int n = sizeof(arr)/ sizeof(arr[0]);
    printArray(arr,n);
    reversearray(0,n-1,arr);
    printf("Reversed array is \n");
    printArray(arr,n);
    return 0;
}