// method number 2
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

    current = malloc(sizeof(struct node));
    current->data = 100;
    current->link = NULL;
    head->link->link = current;
}