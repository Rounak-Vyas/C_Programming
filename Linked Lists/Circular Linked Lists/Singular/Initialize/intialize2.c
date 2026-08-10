/*This is the approach from the tutorial, it used 3 functions create circular linked list , addtoempty and 
addtobegining */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data; 
    struct node *next;
}node;

// function declarations 
void print(node *tail);
node *createlist(node *tail);
node *addToEmpty(node *tail);
node *addAtEnd(node *tail);

// Main 
int main (){
    node *tail=NULL;
    tail=createlist;
    
}


// Function definitions
node *createlist (node *tail){
    int number_of_nodes,i,data;
    printf("Enter the number of nodes : ");
    scanf("%d",&number_of_nodes);
    if(number_of_nodes<0){
            printf("please enter a valid number \n");
            return NULL;
    }
    
    printf("Enter the element 1: ");
    scanf("%d",&data);
    tail = addToEmpty(data);

    for(i=1;i<number_of_nodes;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&data);
        addAtEnd(data);
    }

}