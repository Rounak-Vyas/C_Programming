// To add a node at a certain position in the doubly linked list,

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *prev;
    int data;
    struct node *next;
}node;

/*----
Function Declarations
----*/
void print(node *head);
node *create_dll(int number_of_nodes);
void add_at_pos(node *head,int position);


/*----
Main Function
----*/
int main (){
    int number_of_nodes,position;
    printf("Enter the number of nodes: ");
    scanf("%d",&number_of_nodes);

    node *head=NULL;
    head=create_dll(number_of_nodes);
    print(head);
    printf("At which position you want the new node in the linked list: ");
    scanf("%d",&position);
    add_at_pos(head,position);
    print(head);
}


/*----
Function Defintions 
----*/

// Creating double linked list function
node *create_dll(int number_of_nodes){
    if(number_of_nodes<=0){
        printf("Enter a valid number:\n ");
        return 0;
    }
    node *head=NULL,*current=NULL,*new_node=NULL;
    for (int i=0; i<number_of_nodes;i++){
        new_node=malloc(sizeof(node));
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
    return head;
}

// Printing Function
void print(node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

// Adding node at certain position function 
void add_at_pos(node *head, int position ){
    if(head==NULL || head->next==NULL){
        printf("Inavlid length");
        exit(1);
    }
    node *temp=NULL,*new_node=NULL;
    new_node=malloc(sizeof(node));
    new_node->next=NULL;
    new_node->prev=NULL;
    printf("Enter the data for new node: ");
    scanf("%d",&new_node->data);
    temp=head;
    while(position-1!=1){
        temp=temp->next;
        position--;
    }
    new_node->next=temp->next;
    temp->next=new_node;
    new_node->prev=temp;
    new_node->next->prev=new_node;
}