// This is a basic way to make a linked list, uses manual assignement better only for a conceptual visualiztion of how a linked list is 
// for loop way creation and initialization , refer initialize file 

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
};

int main (){
    // FIRST NODE
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    //SECOND NODE
    struct node *current = malloc(sizeof(struct node));
    current->data= 46;
    current->link =NULL;
    head->link = current;  // FIRST NODE to SECOND NODE 


    //THIRD NODE 
    current = malloc(sizeof(struct node));
    current->data=47;
    current->link=NULL;
    head->link->link=current;  //SECOND NODE TO THIRD NODE 
    // either bind via -> -> or  create a new pointer for each node
    return 0;
}