// this is a different approach for the stack array, we are considering index number zero as the top of the stack
// hence for inserting any element we havee to shift already inserrted elements to right , and after deleting any 
// element we habe to shift other elements to left. 


#include <stdio.h>
#include <stdlib.h>
int first = -1;  // we need a count of first element inserted not the top element 
#define SIZE 5
int stack[SIZE];

// Function Declarations
void push(int data);
void print();
void pop();
int isEmpty();
int isFull();
int peek();

// Main Function

int main (){
    push(1); push(3); push(5);
    print();
    pop();
    print();
    pop(); pop(); // remove other elements , stack ->empty 
    print();
    pop();
    push(5);push(4);push(3);push(2);push(1);
    print();
    push(6);
    int top_element = peek();
    printf("%d\n",top_element);

}

// Function Definition
void push(int data){
    if(isFull()){
        printf("Stack Full\n");
        return;
    }
    int i;
    first+=1;
    for(i=first;i>0;i--)
        stack[i]=stack[i-1];  // shifts the element 
 
    stack[0]=data; // insert the element at zero 

}

// Printing Function 
void print(){
    if(first==-1){   
        printf("Stack Empty!\n");
        return;
    }
    for(int i=0;i<=first;i++)
        printf("%d ",stack[i]);
    printf("\n");
}

// POP function : We can't technically delete an element, so we copy the value to the previous cell
// and at last we decrement the value of var first, to express that the element is actually deleted
void pop(){
    if (isEmpty()){  // if its empty, the function will return 1; which means the if condition results to true., otherwise else part is implemented on return 0;
        printf("Stack already empty\n");
        return;
    }
    else{
        for(int i=0;i<first;i++){
            stack[i]=stack[i+1];
        }
        first-=1;
    }
}

int isEmpty(){
    if(first==-1){  // if its empty , it will return 1 
        return 1; 
    }
    else{
        return 0;
    }
}

int isFull(){
    if(first==SIZE-1){
        return 1;
    }
    else{
        return 0;
    }
}

int peek(){
    if(isEmpty()){
        printf("Stack Underflow!");
        exit(1);
    }
    return stack[0];
}