//Demo and Practice code, doesn't check all the conditions 

// Insertion Restricted : Could be inserted only one end, deleted from 2 sides 
#include <stdio.h>
#define max 5
int ddq[max];
int front=-1,rear1=-1,rear2=-1;  // Used 2 rear pointers just for demonstartion, could use only one 

void enque(int x);
void deque_front();
void deque_rear();
void print();

int main(){
    enque(1);enque(2);enque(3);enque(4);enque(5);
    print();
    deque_front();
    print();
    deque_rear();
    print();
}


void enque(int x){
    // Keep the priority of if else code blocks(first->total empty, second is ovelap or full, third is normal)
    //Condition 1. Completely Empty Queue
    if(front ==-1){
        front =0;rear1=0,rear2=0;
        ddq[rear1]=x;
    }
    // Condition 2.  Rear and front overlaps (Queue is completely full)
    else if((rear1+1)%max==front){
        printf("Queue is full\n");
        return;
    }
    // Condition 3. Queue is partially empty
    else{
        rear1 = (rear1+1)%max; // after reaching max, it will comeback to index 0
        ddq[rear1]=x;
        rear2=rear1;
    }
}
void deque_front(){
    if(front==rear2){
        printf("Queue Underflow\n");
        return;
    }
    front++;
}
void deque_rear(){
    if(rear2==front){
        printf("Queue underflow!\n");
        return;
    }
    rear2--;
}
void print() {
    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }

    int i = front;
    while (1) {
        printf("%d ", ddq[i]);
        if (i == rear2) {
            break; // Stop after printing the rear element
        }
        i = (i + 1) % max; // Move to the next circular index
    }
    printf("\n");
}