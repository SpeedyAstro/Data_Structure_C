#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[5];
int top = -1;

void push()
{
    int x;
    printf("Enter data : ");
    scanf("%d",&x);
    if (top==5-1)
    {
        printf("Stack Overflow ");            
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    int item;
    if (top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        item = stack[top];
        top--;
        printf("Deleted item is %d", item);
    }    
}
void peek()
{
    if (top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("%d",&stack[top]);
    }
}
void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("\t%d\n",stack[i]);
    }
    
}
int main()
{
    int ch;
    while (ch!=6)
    {
        printf("\nSelect the Operation for stack\n");
        printf("1 - PUSH\n");
        printf("2 - POP\n");
        printf("3 - PEEK\n");
        printf("4 - DISPLAY\n:-  ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("program terminated");
        default:
            printf("Enter a valid choice :");
            break;
        }
    }
    return 0;
}