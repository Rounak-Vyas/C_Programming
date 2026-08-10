// Self Logic Coded, let's see how it goes :)

#include <stdio.h>
#include <stdlib.h>

// Node 
typedef struct node {
    int data;
    struct node *link;
}node;

/*
______________________
Function Declarations 
_______________________
*/ 

void print(node *head);
node *reverse(node *head);

/*
______________________
MAIN FUNCTION
_______________________
*/ 
int main(){
    node *current=NULL,*head=NULL,*new_node=NULL;
    int number_of_nodes,i,node_size=sizeof(node);
    printf("Enter the number of nodes for linked list: ");
    scanf("%d",&number_of_nodes);

    for(i=0;i<number_of_nodes;i++){
        new_node=malloc(node_size);
        new_node->link=NULL;
        printf("Enter the data for node %d: ", i+1);
        scanf("%d",&new_node->data);

        if(head==NULL){
            head=new_node;
            current=new_node;
        }
        else{
            current->link=new_node;
            current=new_node;
        }
    }

    current=head;
    print(head);  
    printf("The reversed array is: \n");
    head=reverse(head);
    print(head);

}


/*
______________________
Function Declarations 
_______________________
*/ 

// Print Function 
void print(node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->link;
    }
    printf("\n");
}

// Reverse Funtion 
node *reverse (node *head){
    node *current=NULL,*temp=NULL,*temp2=NULL;
    while(head->link!=NULL){  // process to be followed till here 
        if(temp==NULL){
            temp=head;
            current=head->link;
            head=current->link;
            current->link=temp;
            temp->link=NULL;
            temp=current;
        }
        else{
        temp2=head;
        head=head->link;
        current=temp2;
        temp2->link=temp;
        temp=current;

        }
        
    } 
    head->link = temp;
    return head;
}
