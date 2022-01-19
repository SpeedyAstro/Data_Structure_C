#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear =0;
        queue[rear] = x;
    }
    else if (((rear+1)%N) == front)
    {
        printf("QUEUE IS FULL [~] OVERFLOW");
    }
    else
    {
        rear = (rear+1)%N;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("QUEUE IS EMPTY [~] UNDERFLOW");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("DEQUEUED ELEMENT -> %d", queue[front]);
        front = (front+1)%N;
    }    
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("QUEUE IS EMPTY , NOTHING TO DISPLAY");
    }
    else
    {   
        int i=front;
        printf("Queue is :\n");
        while ( i!=rear)
        {
            printf("[%d]\n",queue[i]);
            i = (i+1)%N;
        }   
        printf("[%d]",queue[rear]);
    }
}
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("QUEUE IS EMPTY");
    }
    else
    {
        printf("%d",queue[front]);
    }
}
int main()
{
   int ch, x;
 /* Run indefinitely until user manually terminates */
 while (1)
 {
 /* Queue menu */

 printf(" QUEUE ARRAY IMPLEMENTATION PROGRAM \n");

 printf("1. Enqueue\n");
 printf("2. Dequeue\n");
 printf("4. Peek\n");
 printf("5. Display\n");
 printf("0. Exit\n");
 printf(" \n");
 printf("Select an option: ");
 scanf("%d", &ch);

 /* Menu control switch */
 switch (ch)
 {
 case 1:
    printf("\nEnter data to enqueue: ");
    scanf("%d", &x);
    enqueue(x);
    break;
 case 2:
    dequeue();
 // on success dequeue returns element removed
 // otherwise returns INT_MIN
     break;
 case 3:
 // isEmpty() function returns 1 if queue is emtpy
 // otherwise returns 0
    printf("Queue size => %d", N);
    break;
 case 4:
    peek();
 break;
 case 5:
    display();
    break;
 case 0:
    printf("Terminating session.\n");
    exit(0);
 default:
    printf("Invalid choice, please input number between (0-5).");
 break;
 }
 printf("\n\n");
 }
}