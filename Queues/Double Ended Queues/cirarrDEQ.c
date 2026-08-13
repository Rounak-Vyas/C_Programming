/*Using circular array to create a double ended queue with insertions and deletions allowed \
from both the ends
*/

#include <stdio.h>
#define max 5
int deq[max];
int front=-1,rear=-1;

void enque_front(int data); // special operation 
void enque_rear(int data);  // Normal Operation insertion from the rear 
void deque_front(); // normal operation deletion from the front
void deque_rear(); // special operation 
void print();


int main (){
    deque_front();
    enque_rear(1);print();
    enque_rear(2);enque_rear(3);
    print();
    deque_front();
    print();
    deque_rear();
    print();
    deque_front();
    print();
    deque_rear();
    enque_front(5); print();
    enque_front(4); print();
    deque_front();deque_front();
    print();
    enque_rear(1);enque_rear(2);enque_rear(3);enque_rear(4);enque_rear(5);
    print();
    enque_front(6);
    enque_rear(7);
    deque_front();deque_front();
    enque_rear(6);enque_rear(7);
    print();

}

// Function Definitions 
void enque_rear(int data){
    if(front==-1 && rear==-1){
        front++;rear++;
        deq[rear]=data;
    }
    else if((rear+1)%max==front){
        printf("Queue is full\n");
        return;
    }

    else{
        rear=(rear+1)%max;
        deq[rear]=data;
    }
}

void deque_front(){
    if(front==-1 && rear==-1){
        printf("Queue Underflow\n");
    }

    else if(front==rear){  // Both the pointers at Last element of the queue
        front=-1;
        rear=-1;   // reset the queue
    }
    else{
        front=(front+1)%max;
    }
}


// Special functions 
void enque_front(int data){
    if(front==-1 && rear==-1){
        front++;rear++;
        deq[front]=data;
    }
    else if((rear + 1) % max == front){   // front insert  will revese overlap rear 
        printf("Queue is full\n");
    }

    else if(front==0){  // front is at the first position hence insert rear should insert at last position
        front=max-1;
        deq[front]=data;
    }
    else {
        front--;
        deq[front]=data;
    }
}

void deque_rear(){
    if(front==-1 && rear==-1){
        printf("Queue Underflow\n");
    }
    else if(rear==front){
        front =-1;  // Queue Reset 
        rear=-1;
    }
    else if(rear==0){
        rear=max-1;
    }
    else{
        rear--;
    }
}

void print(){
    if(front==-1 && rear==-1){
        printf("Empty Queue\n");
        return;
    }
    int temp = front;

    do {
        printf("%d ", deq[temp]);
        if(temp == rear)  // if queue has only one element 
            break;
        temp = (temp + 1) % max;

    } while(1);
    printf("\n");

}



