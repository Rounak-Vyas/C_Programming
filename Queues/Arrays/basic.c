// Queue follows the principal of FIFO (First in First out)
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int arr[MAX];
int front=-1,last=-1;

void enqueue(int data);
void dequeue();
void print();

int main(){
    enqueue(1);enqueue(2);enqueue(3);
    print();
    dequeue();
    print();
    return 0;
    
}

void enqueue (int data){
    if(front==-1){
        front++;last++;
        arr[last]=data;
    }
    else if(last==MAX-1) {
        printf("Queue is full\n") ;
        exit(1);
    }
    else{
        last++;
        arr[last]=data;
    }
    
}

void dequeue(){
    if(front==-1|| front>last){
        printf("Queue is Empty");
        exit(1);
    }
    else{
        front++;
    }
}

void print(){ 
    for(int i=front;i<=last;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}