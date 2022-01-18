#include<stdio.h>
#include <stdlib.h>
int main()
{
    int array[100],search_key,loc,i,n,j,mid,low,high;
// read the element of array
printf("ENTER THE SIZE OF ARRAY : ");
scanf("%d", &n);
printf("ENTER THE ELEMENT OF ARRAY : ");
for (i = 0; i < n; i++)
{
    scanf("%d", &array[i]);
}
/* Get the Search Key element for Binary Search */
 printf("ENTER THE ELEMENT YOU PREFER TO SEARCH :");
 scanf("%d",&search_key);
 low = 1;
 high = n;
 mid = (low + high)/2;
 while (low<high)
 {
     mid = (low+high)/2;
    if (search_key==array[mid])
    {
        break;
    }
    else if (search_key < array[mid])
    {
        high = mid-1;
    }
    else
    {
        low = mid+1;
    }
 }
 printf("location=%d\t",mid+1);
 printf("Search_Key=%d provided \n",search_key);
 return 0; 
}
 

