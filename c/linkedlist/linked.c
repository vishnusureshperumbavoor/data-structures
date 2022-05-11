// method number 1
#include <stdio.h>
struct node{
    int data;
    struct node *link;
};
void main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    struct node *next = mallox(sizeof(struct node));
    next->data = 100;
    next->link = NULL;
    current->link = next;
}

