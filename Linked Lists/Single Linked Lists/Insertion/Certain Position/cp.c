// This code we will insert the new node in between two nodes at a certian position 
/* IMP : for an input position 3 we assume that the new node has to be inserted between 2 and 3 i.e it should 
become the new third node , */

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_NODES 5 
// LL nodes
typedef struct node {
    int data;
    struct node *link;
}node;


// function to insert at custom position 
void insert_pos(node *head){
    int pos;
    printf("Enter the position for new node: ");
    scanf("%d",&pos);

    node *temp= malloc(sizeof(node));
    printf("ENter the data of new node: ");
    scanf("%d",&temp->data);
    temp->link = NULL;

    while (pos-1!=1){  // -1 because we want to stop at a position before and then add a new node 
        head=head->link;
        pos--;
    }
    temp->link=head->link;
    head->link=temp;   

}

//print function
void print(node *head){
    if(head==NULL){
            printf("No LL found");
            exit(1);
    }
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->link;
    }
    printf("\n");

}

int main(){
    node *head=NULL,*current=NULL,*new_node=NULL;
    int size =sizeof(node);

    for(int i=0; i<NUMBER_OF_NODES;i++){
        new_node=malloc(size);
        new_node->data=10;
        new_node->link=NULL;

        if(head==NULL){
            head=new_node;
            current=new_node;
        }

        else{
            current->link=new_node;
            current=new_node;
        }
    }
    current =head; // resetting current pointer to starting position 
    print(head);
    insert_pos(head);
    print(head);
    
    return 0;

}