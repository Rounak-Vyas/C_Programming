// Queue follows the principal of FIFO (First in First out)
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int arr[MAX];
int front=-1,last=-1;

void enqueue(int data);
int dequeue();
void print();
void peek();

int main(){
    int poped_value;
    print();
    dequeue();
    enqueue(1);enqueue(2);enqueue(3);enqueue(1);enqueue(2);
    print();
    enqueue(3);
    poped_value=dequeue();
    printf("Popped value is: %d\n",poped_value);
    print();

    //THE DRAWBACK of QUEUE
    enqueue(5);  // Even if i have now dequed one element, i am not able to add another, cuz the first and last pointers are already pointing to the last element of the list. 
    peek();
    dequeue();
    peek();
    dequeue();dequeue();dequeue();
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
        return;
    }
    else{
        last++;
        arr[last]=data;
    }
    
}

int dequeue(){
    int value;  // alternate code 
    if(front==-1 || front>last){ // front == last 
        printf("Queue Underflow\n");// front = last = -1  // resets the queue position 
        return 0;
    }
    else{
        value = arr[front];
        front++;
        return value;
    }
}

void print(){ 
    if(front==-1 || front==MAX){
        printf("Queue is empty\n");
        return;
    }
    for(int i=front;i<=last;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void peek(){
    if(front==-1 || front==MAX ){
        printf("No elements in the queue\n");
    }
    else{
        printf("The first element is: %d\n",arr[front]);

    }
}