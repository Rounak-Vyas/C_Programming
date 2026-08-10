#include <stdio.h>
#include <stdlib.h>
#define NUMNODES 5

// Linked List data type 
typedef struct node {
    int data;
    struct node *ptr;
}node;

// fucntion to add node at start 
node  *del_first(node *head){  // a copy of head pointer 

    node *temp= head;
    head=head->ptr;
    free(temp);  // free the memory  from the heap
    temp=NULL; // Avoid the dangling pointer 
    return head;
}

// print function
void print(node *head){
    if (head==NULL){
        printf("no list found .Exit");
    }
    node *temp;    
    temp=head;  
    int count =0;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->ptr;                   
    }
    printf("\n");
}

// main funtion
int main (){
    node *head=NULL,*current=NULL,*new_node=NULL;
    int i,n_size=sizeof(node);

    for (i=0;i<NUMNODES;i++){
        new_node=malloc(n_size);
        printf("Enter the data for node %d:",i+1);
        scanf("%d",&new_node->data);
        new_node->ptr=NULL;

        if (head==NULL){
            head=new_node;
            current=new_node;
        }
        else{
            current->ptr=new_node;
            current=new_node;
        }
    }
    current=head;
    print(head);
    head = del_first(head);  // its paas by value and not reference
    //current=head;
    print(head);
    return 0;

}

