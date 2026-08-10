// we will delete the first node of the list 
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
node *del_first_node(node *head);


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
    head=del_first_node(head);
    print(head);
}


/*----
Function Defintions 
----*/

// Creating double linked list function
node *create_dll(int number_of_nodes){
    if(number_of_nodes<=0){
        printf("Enter a valid number\n ");
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

// Deleting the first node of the list  
node *del_first_node(node *head){
    if(head==NULL){
        printf("No list found");
        exit(1);
    }
    else if(head->next==NULL){
        printf("Found only one element: list deleted");
        free(head);
        head=NULL;
    }
    else{
        node *temp=NULL;
        temp=head;
        head=head->next;
        free(temp);
        head->prev=NULL;
        return head;
        
    }

}