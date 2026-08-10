#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;

void push(int);
void pop();
void print();

int main (){
    push(1);
    push(2);
    push(3);
    push(4);
    print();
    pop();
    pop();
    print();
    return 0;

}
void push (int data){
    if (top==SIZE-1){
        printf("\nstack is full");
        return;
    }
    else{
        top+=1;
        stack[top]=data;
    }
}

void pop(){
    if (top==-1){
        printf("Stack empty:");
        return;
    }
    else
        top-=1;
}

void print(){
    if(top==-1){
        printf("Stack is empty");
        return;
    }
    else{
        for (int i=top;i>=0;i--){
            printf("%d ", stack[i]);
        }
    }
    printf("\n");
}