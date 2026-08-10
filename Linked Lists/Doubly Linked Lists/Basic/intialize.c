// we will see a code to crete a doubly linked list 

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *prev;
    int data;
    struct node *next;
}node;

void print(node *head);

int main (){
    node *head=NULL,*current=NULL,*new_node=NULL;
    int size = sizeof(node),num_nodes;
    printf("Enter the number of node: ");
    scanf("%d",&num_nodes);
    if(num_nodes<=0){
        printf("Enter a valid number:\n ");
        return 0;
    }

    for (int i=0; i<num_nodes;i++){
        new_node=malloc(size);
        if(new_node == NULL)
        {
        printf("Memory Allocation Failed\n");
        exit(1);
        }
        new_node->prev=NULL;
        new_node->next=NULL;
        printf("Enter the value for node %d: ",i+1);
        scanf("%d",&new_node->data);

        if(head==NULL){
            current=new_node;
            head=new_node;

        }
        else{
            current->next=new_node;
            new_node->prev =current;
            current=new_node;
        }
    }
    current=head;
    print(head);
    return 0;
}

void print(node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

