#include<stdio.h>
#include<stdlib.h>
struct node{
    int data; 
    struct node* next;
};
int main(){
    struct node* head = malloc(sizeof(struct node));
    head->data = 5;
    head->next = NULL;

    struct node* one = malloc(sizeof(struct node));
    one->data = 7;
    one->next = NULL;

    struct node* two = malloc(sizeof(struct node));
    two->data = 9;
    two->next = NULL;

    struct node* tail = malloc(sizeof(struct node));
    tail->data = 14;
    tail->next = NULL;

    head->next = one;
    one->next = two;
    two->next = tail;

    struct node* tmp = head;
    while(tmp != NULL){
        printf("%d", tmp->data);
        if(tmp->next!=NULL){
            printf(" -> ");
        }
        tmp = tmp->next;
    }

    printf("\nInsertion at index 3 : 10\n");
    struct node* newnode = malloc(sizeof(struct node));
    
    newnode->data = 10;
    newnode->next = head->next->next;
    head->next->next = newnode;

    struct node* tmp2 = head;
    while(tmp2!=NULL){
        printf("%d", tmp2->data);
        if(tmp2->next != NULL){
            printf(" -> ");
        }
        tmp2 = tmp2->next;
    }
    
}