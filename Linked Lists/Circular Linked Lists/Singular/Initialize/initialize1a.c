// this is the first way to make a circular linked list, trying to make my own logic. another one is from the tutorial
// slightly a different approach , but almost similar logic 
// THIS IS APPROACH A , AFTER CREATING EACH NODE , WE ARE CONNECTING IT WITH HEAD

#include <stdio.h>
#include <stdlib.h>
 
// node 
typedef struct node {
    int data;
    struct node *next;
}node;

// function declarations
void print (node *head);
node *create_cll(int number_of_nodes);

int main (){
    int number_of_nodes;
    node *tail=NULL;
    printf("Enter the number of nodes: ");
    scanf("%d",&number_of_nodes);
    tail = create_cll(number_of_nodes);
    print(tail);
}

// Function Definitions 
node *create_cll(int number_of_nodes){
    node *head=NULL,*new_node=NULL,*tail=NULL,*current=NULL;
    if (number_of_nodes<=0){
        printf("Invalid number");
        return head;
    }

    for (int i=0;i<number_of_nodes;i++){
        new_node=malloc(sizeof(node));
        if(new_node==NULL)
            return head;
        printf("Enter the data for node %d: ",i+1);
        scanf("%d",&new_node->data);
        new_node->next=NULL;

        if (head==NULL){
            head=new_node;
            current=new_node;
            new_node->next=new_node;

        }
        else{
            current->next=new_node;
            new_node->next=head;
            current=new_node;
        }
    }
    tail=new_node;  // could also do return new_node , but included just for demonstartion and understability
    return tail; 
}

void print(node *tail){
    printf("The list is : \n");
    node *temp= tail->next;
    do{
        printf("%d ", temp->data);
        temp=temp->next;
    }while(temp!=tail->next);

    printf("\n");
}
