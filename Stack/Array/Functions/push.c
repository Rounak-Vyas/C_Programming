#include <stdio.h>
#define SIZE 5
int arr[SIZE];
int top = -1; // -1 indicates the stack is currently empty 
void push(int);

int main(){
    printf("Enter the data: ");
    int data; 
    scanf("%d",&data);
    push(data);
    push(20);
    push(20);
    push(40);
    push(100);
    push(1000);
}

void push (int data){
    if (top==SIZE-1){
        printf("The stack is full.");
        return;
    }
    else{
            top =top+1;
            arr[top]=data;
            printf("%d ",arr[top]);
    }
}

