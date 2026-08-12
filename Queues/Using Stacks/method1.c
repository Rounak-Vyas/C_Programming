/*
Method Description : Copying elements of one stack to another and then popping values from second stack to 
replicate FIFO behaviour 
OR 
Implementing FIFO behaviour using stacks
Time Complexity: a) Enqueue-> O(1) {just insert the element}
                 b) Dequeue->O(n)  {traverse copy to remove the element}
*/

// Using Arrays
#include <stdio.h>
#define MAX 5
int stack1[MAX],stack2[MAX];
int stack1_top=-1;  // Pointers pointing to the top of the stack
int stack2_top=-1;

//Function Declarations
void enque(int data);
void deque();
void print();
void push(int stack[], int data, int *top);  // equivalent push (int *stack,..) 
int pop(int stack[],int *top);  


//Main Function
int main(){
    deque();
    enque(1);enque(2);enque(3);
    print();
    deque();
    print();
    deque();deque();
    print();
}

// ENQUEUE
void enque(int data ){
    if(stack1_top==MAX-1){
        printf("Queue is full\n");
        return;
    }
    push(stack1,data,&stack1_top);
    //
}
void push(int *stack,int data, int *top){
    (*top)++;
    stack[*top]=data;
}

// DEQUEUE
void deque(){
    if(stack1_top==-1){
        printf("Queue Undeflow\n");
        return;
    }
    for(int i=stack1_top; i>=0; i--){
        push(stack2,pop(stack1,&stack1_top),&stack2_top);
    }

    printf("The dequed value is: %d\n", pop(stack2,&stack2_top));

    for(int i=stack2_top; i>=0; i--){
        push(stack1,pop(stack2,&stack2_top),&stack1_top);
    }
}
int pop(int stack[],int *top){
    return stack[(*top)--];   // Post decrement -> first return stack top then decrement by 1
                              // int value; value=stack[*top]; (*top);
}


void print(){
    if(stack1_top==-1){
        printf("Queue Empty\n");
        return;
    }
    for(int i=0;i<=stack1_top;i++){
        printf("%d ",stack1[i]);
    }
    printf("\n");
}