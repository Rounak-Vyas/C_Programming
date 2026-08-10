#include <stdio.h>
#include <stdlib.h>
#define NUMNODES 5

// Linked List data type 
typedef struct node {
    int data;
    struct node *ptr;
}node;

// fucntion to add node at end 
void add_end(node *current, node*head){ // these are local pointers , not passed by ref 
    while(current->ptr!=NULL){  // current->ptr =NULL because we want to stop at last node, for comparison check print function
        current=current->ptr;  
    }
    node *temp= malloc(sizeof(node));
    printf("Enter the last node: ");
    scanf("%d",&temp->data);
    temp->ptr=NULL;
    current->ptr=temp;
   // current=head;  // will make no sense

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
    current=head;  // this is only useful , if i will type any print function in the main function , or where i need to traverse the list in the main function only, otherwise in other function i could simply pass a copy of head
    print(head);
    add_end(current,head);   // current not required 
    current=head;  //not required 
    print(head);
    return 0;


}
