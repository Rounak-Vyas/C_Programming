#include <stdio.h>
#include <stdlib.h>
#define NUMNODES 5

// Linked List data type 
typedef struct node {
    int data;
    struct node *ptr;
}node;

// fucntion to del the last node 
void del_last( node*head){ // these are local pointers , not passed by ref 
    while(head->ptr->ptr!=NULL){  // current->ptr =NULL because we want to stop at last node, for comparison check print function
        head=head->ptr;  
    }
    node *temp=head;
    head=head->ptr;
    free(head);     // ALTERNATE BETTER LOGIC:
    head=NULL;       // free(temp->link) // directly erases the last node
    temp->ptr=NULL;  // temp->link =NULL // makes the current link value to NULL 
}


// prints the content of linked list  
void print(node *head){
    if (head==NULL){  
        printf("no list found .Exit");
    }
    node *temp;    
    temp=head;  
    int count =0;
    while(temp!=NULL){// temp == null , because we also want to include the last node , so we should move the pointer after that as well to incllude the last node for the print 
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
    del_last(head);
    print(head);
    return 0;


}
