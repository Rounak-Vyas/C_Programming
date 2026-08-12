#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link; // A pointer to a data type struct node 
};
typedef struct node node;
node *first=NULL,*last=NULL;

// Function Declarations 
void enqueue(int data);
void dequeue();
void print();
void peek();

int main (){
    dequeue();
    enqueue(1);enqueue(2);enqueue(3);
    print();
    dequeue(); dequeue();dequeue();
    print();
    enqueue(4);
    print();

}

void enqueue(int data){
    node *new_node = malloc(sizeof(node));
    if(new_node==NULL){
        printf("Memory Exhausted!\n");
        return;
    }
    new_node->data=data;
    new_node->link=NULL;

    if(first==NULL){
        first=new_node;
        last=new_node;
    }
    else{
        last->link=new_node;
        last=new_node;
    }
}

void dequeue(){
    if(first==NULL){
        printf("Queue Underflow\n");
        return;
    }
    node *temp= first;
    first=first->link;
    free(temp);
    temp=NULL;

    if(first==NULL){
        last=NULL;
    }
}

void print(){
    node *temp=first;
    if(first==NULL){
        printf("Queue is Empty\n");
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}