// Reverse the given linked list 

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
void print_reverse(node *head);
node *create_dll(int number_of_nodes);
node *reverse(node *head);


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
    head=reverse(head);
    print(head);
    print_reverse(head);
    return 0;
}


/*----
Function Defintions 
----*/

// Creating double linked list function
node *create_dll(int number_of_nodes){
    if(number_of_nodes<=0){
        printf("Enter a valid number\n ");
        exit(1);
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
    printf("List Created:\n");
}

// Printing Function
void print(node *head){
    printf("The linked list is : \n");
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

// Reversing the linked list 
node *reverse(node *head){
    node *temp=NULL,*ptr=NULL;
    if(head==NULL){
        printf("No list found");
        exit(1);
    }
    else if(head->next==NULL){
        printf("Found only one element,can't be reversed");  
    }
    else{
        while(head->next!=NULL){
            temp=head;
            head=head->next;
            temp->next=ptr;
            temp->prev=head;
            ptr=temp;
        }
        head->next=ptr;
        head->prev=NULL;
        printf("List reversed successfully\n ");
        return head;
        
        
    }

}

void print_reverse (node *head){
    printf("The print in reverse order is: \n");
    while (head->next!=NULL){
        head=head->next;
    }
    while (head!=NULL){
        printf("%d ",head->data);
        head=head->prev;
    }
    printf("\n");
}