/*Another variant of reverse stack code.
Upgrades: 
    1. use of a dedicated reverse function 
    2. Double pointer implementation (pass by ref)
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

// function declarations 
void push (node **top, int data); // function will return nothing but will directly make changes in the passed pointer 
void print(node **top);
int pop (node **top);
void reverse_stack(node **top);

int main (){
    node *stack1 = NULL;
    push(&stack1,10);
    push(&stack1,20);
    print(&stack1);
    // int value = pop(&stack1);  // the pop function call will be replaced by value returned by the function
    // printf("%d\n",value);
    // print(&stack1); // actually print does not require pass by reference, just for demonstartion
    reverse_stack(&stack1);
    print(&stack1);
    return 0;
}

void push(node **top, int data){
    node *new_node= malloc(sizeof(node));
    if(new_node==NULL){
        printf("Stack Overflow:");
        return;
    }
    new_node->data=data;
    new_node->link=NULL;

    new_node->link=*top;
    *top=new_node;
}

void print(node **top){
    if(*top==NULL){
        printf("Stack empty\n");
        return;
    }
    node *temp= *top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}

int pop(node **top){
    node *temp;
    temp=*top;
    // Use Parantheses(); -> has more precedence then * so it tries to evaluate top->data which is a pointer to a pointer and not pointer to a struct
    *top=(*top)->link;  // it gets deferenced as stack1 = stack1->link (stack1 is now pointing to next node)
    int val=temp->data; 
    free(temp);
    temp=NULL;
    return val;
}

void reverse_stack(node **top){
    node *temp1=NULL,*temp2=NULL;
    // Pushing stack 1 to temp 1
    while(*top!=NULL){
        push(&temp1,pop(top));  // top already contains the address of stack1 , so no need to explicitly write &top
    }
    // Pushing temp 1 to temp 2 
    while(temp1!=NULL){
        push(&temp2,pop(&temp1));
    }

    // Pushing temp 2 to stack 
    while (temp2!=NULL){
        push(top,pop(&temp2));
    }

}