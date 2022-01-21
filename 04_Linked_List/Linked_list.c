#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr){
    while(ptr != NULL)
    {
    printf("Element :%d\n",ptr->data);
    ptr = ptr->next;
    }
}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * forth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    forth = (struct node *)malloc(sizeof(struct node));
    // Link first and second nodes
    head->data = 72;
    head->next = second;
    // Link second and third nodes
    second->data = 90;
    second->next = third;
    // Link third and forth nodes
    third->data = 70;
    third->next = forth;
    // Terminate list 
    forth->data = 89;
    forth->next = NULL;

    linkedlistTraversal(head);

    return 0;
}