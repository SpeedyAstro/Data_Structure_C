
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int array[100],search_key,loc,i,n,j;

// read the element of array
printf("ENTER THE SIZE OF ARRAY : ");
scanf("%d", &n);
printf("ENTER THE ELEMENT OF ARRAY : ");
for (i = 0; i < n; i++)
{
    scanf("%d", &array[i]);
}
/* get the search key element for linear search */
printf("ENTER THE ELEMENT YOU PREFER TO SEARCH");
scanf("%d", &search_key);
// 
for (i = 1; i < n; i++)
{
    if (array[i]== search_key)
    {
        loc = i;
        printf("The location of Search Key = %d is %d\n",search_key,loc+1);
        break;
    }
    
}


return 0;

}


