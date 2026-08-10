/* REVERSING THE STACK 
IMPORTANT STEPS : 
1. Creation of Multiple stacks (1 main and 2 temp)
2. Modifying push, pop and print functions : 
    a. earlier they were desgined to access only one stack present in the code, now there would be multiple stacks
        hence we have to also pass the exact stack in which we have to perform the modification.
    b. We have to pass the reference(address->double pointer method) or we have to return the address of the top 
        variable from push and pop(->approach used in the code).
*/

// 3. another variationn of the code be, we pass by reference-> double pointer method 

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link;
}node;

node *push(node *top, int data);
// int pop(node *top);  // return the only poped value -> does not work
node *pop(node *pop);
void print(node *top);
int isEmpty(node *top);


int main(){
    int value;
    node *temp;
    node *top1=NULL,*top2=NULL,*top3=NULL;  // here each topx variable is a pointer to a different stack memory location
    top1= push(top1,1);
    top1=push(top1,2);
    top1=push(top1,3);
    print(top1);
    while(!(isEmpty(top1))){  // reversed the isEmpty logic 
        temp=pop(top1); // returns data and address of next node;
        top1=temp->link;
        value =temp->data;
        top2= push(top2,value);
    }
    print(top2);

    while(!(isEmpty(top2))){
        temp=pop(top2); // returns data and address of next node;
        top2=temp->link;
        value =temp->data;
        top3= push(top3,value);
    }
    print(top3);

    while(!(isEmpty(top3))){
        temp=pop(top3); // returns data and address of next node;
        top3=temp->link;
        value =temp->data;
        top1= push(top1,value);
    }
    print(top1);

}

// Function Defintions
// PUSH
node *push(node* top, int data){
    node* new_node = malloc(sizeof(node));
    if (new_node==NULL){
        printf("Stack overflow\n");
        return NULL;
    }
    new_node->data=data;
    new_node->link=top;
    top = new_node;
    return top;

}

// POP  -> DOES NOT WORK -> WE HAVE TO RETURN BOTH THE VALUE AND THE TOP STACK ADDRESS
// int pop(node *top){
//     node *temp;
//     if(top==NULL){
//         printf("Stack underflow\n");
//         return 0;
//     }
//     temp=top;
//     int val = top->data;
//     top=top->link;
//     free(temp);
//     temp=NULL;
//     return val;
// }

// Modified POP -> it  returns the same structure -> which contains the data and the address of the next node 
node *pop (node *top){
    node *temp;
    if(top==NULL){
        printf("Stack underflow");
        return 0;
    }
    return top;

}


// PRINT
void print(node *top){
    if(top==NULL){
        printf("Stack is empty\n");
        return;
    }
    while(top!=NULL){
        printf("%d ",top->data);
        top=top->link;
    }
    printf("\n");
}

// isEmpty
int isEmpty(node *top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}