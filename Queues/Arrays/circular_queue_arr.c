/*The concept of circular Queue:
~ Instead of sticking to linear progression of rear and front pointer we perform circular operation to fill the 
emptied positions 
~ The Formula : (rear+1)%Max or (front+1)%Max
*/

#include <stdio.h>
#include <stdlib.h>
#define max  5
int arr[max];
int rear=-1,front=-1;

void enque(int x);
void deque();
void print();

int main(){
    enque(1);print();
    enque(2);enque(3);enque(4);enque(5);
    print();
    deque();
    print();
    enque(6);
    print();
    enque(7);
    deque();
    enque(7);
    print();
}

void enque(int x){
    //Condition 1. Completely Empty Queue
    if(rear==-1 && front ==-1){
        front =0;rear=0;
        arr[rear]=x;
    }
    // Condition 2.  Rear and front overlaps (Queue is completely full)
    else if((rear+1)%max==front){
        printf("Queue is full\n");
        return;
    }
    // Condition 3. Queue is partially empty
    else{
        rear = (rear+1)%max; // after reaching max, it will comeback to index 0
        arr[rear]=x;
    }
}

void deque(){
    //Condition 1. Completely Empty Queue
    if(rear==-1 && front ==-1){
        printf("Queue is empty!\n");
        return;
    }
    else if (front==rear){
        front=-1;
        rear=-1;

    }
    else{
        front=(front+1)%max;
    }
}

void print(){ 
    int i=front;
    if(front==-1){
        printf("Queue is empty\n");
        return;
    }
    else{    
        while(i!=rear){      // in place a do while could also be used, to avoid writing last element after loop
            printf("%d ",arr[i]);
            i=(i+1)%max;
        }
        printf("%d ", arr[rear]);
    }
    printf("\n");
}
