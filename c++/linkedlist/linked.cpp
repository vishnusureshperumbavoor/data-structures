// method number 1
#include <stdio.h>
struct node{
    int data;
    struct node *link;
};
void main(){
    struct node *head = malloc(sizeof(struct node));
    printf("enter head\n");
    scanf("%d",&head->data);
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    printf("enter current\n");
    scanf("%d",&current->data);
    current->link = NULL;
    head->link = current;

    struct node *next = mallox(sizeof(struct node));
    printf("enter next\n");
    scanf("%d",&next->data);
    next->link = NULL;
    current->link = next;
}

