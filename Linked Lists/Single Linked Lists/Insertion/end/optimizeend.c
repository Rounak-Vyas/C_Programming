/*This code provides one more way to add node at the end with time complexity of just O(1) 
by eleminating the traversal part */
// We can't say it truly optimized cuz indirectly we are just mannually writting and connecting the nodes one after another 

#include <stdio.h>
#include<stdlib.h>

typedef struct node {
    int data; struct node *link;
}node; 

node *node_end(node *ptr, int data){
    node *temp=malloc(sizeof(node));
    temp->data = data;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
}

int main (){
     node *head= malloc(sizeof(node));
     head->data= 45;
     head->link=NULL;

     node *ptr=head;
     ptr=node_end(ptr,98);
     ptr=node_end(ptr,90);
     ptr=node_end(ptr,89);

    ptr = head;
}

