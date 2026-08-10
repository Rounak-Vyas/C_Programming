// Traversing -> Visiting each node of single linked list until the end node is reached 
// we will create the linked list via manual way

// We will count and print the the node values 

#include <stdio.h>
#include <stdlib.h>

// Linked List struct 
typedef struct node {
    int data;
    struct node *ptr;
}node;

// count of nodes function 
void count_nodes(node *head){
    if (head==NULL){
        printf("no list found .Exit");
    }
    node *temp;   // since we are passing the head pointer we do not want to traverse it 
    temp=head; // created a copy of head pointer that will keep shifting to next 
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp->ptr; // update the value of temp to value pointed by the temp->ptr
                        // since the nodes are connected , temp will update the value to next node address 
                        // until in the last node , it will find NULL
    }

    printf("COunt is: %d\n",count);
}

// prints the content of linked list  
void print_nodes(node *head){
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

}

// main 
int main (){
    node *head=NULL;
    node *current=NULL;
    int n_size = sizeof(node);

    // First node
    head = malloc(n_size);
    head->data=30;
    head->ptr=NULL;
    
    // Second Node
    current = malloc(n_size);
    current->data = 35;
    current->ptr= NULL;
    head->ptr= current; // first linked to second 

    // Third Node 
    current = malloc(n_size);
    current->data=40;
    current->ptr = NULL;
    head->ptr->ptr=current;
    
    // count node function 
    count_nodes(head);
    print_nodes(head);
    return 0;
}