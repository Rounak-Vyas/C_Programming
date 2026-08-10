// This code we will delete the node at a certian position
/* IMP : for an input position 3 we assume that the node 3 has to be deleted i.e between 2 and 4 */

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_NODES 5 
// LL nodes
typedef struct node {
    int data;
    struct node *link;
}node;


// function to insert at custom position 
void del_pos(node *head){
    int pos;
    printf("Enter the position for new node: ");
    scanf("%d",&pos);


    while (pos-1!=1){  // -1 because we want to stop at a position before and then delete the next node
        head=head->link;
        pos--;
    }
    node *temp= head->link; // after while loop, both temp&head pointers are at node, just before the node that has to be deleted 
    head->link=head->link->link;
    free(temp);
    temp=NULL;
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
        printf("Enter the data : ");
        scanf("%d",&new_node->data);
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
    current = head; // resetting current pointer to starting position 
    print(head);
    del_pos(head);
    print(head);
    
    return 0;

}