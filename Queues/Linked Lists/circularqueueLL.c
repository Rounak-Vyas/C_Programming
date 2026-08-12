// The implementation of circular queue is nothing circular linked list 
// We will use two pointers first -> for dequeue and last-> enqueue

#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}node;

/* There are several variants to implement the logic:
1. pass by value -> return the address (for enque return rear , for deque return head)
2. pass by ref-> pass the address of respective headers for the respective functions 
3. ADT approach-> declare the pointers globally, just perform enque and deque operation, rest would be handled
    in the function itself.
*/

// Approach 3 
node *front=NULL,*rear=NULL;

// Function Declarations 
void enque(int data);
void deque();
void print();

// Main Function 
int main (){
    deque();
    print();
    enque(1);enque(2);enque(3);
    print();
    deque();
    print();
    deque();deque();
    print();
}


// Function Defintions 
void enque(int data){
    node *new_node = malloc(sizeof(node));
    if(new_node==NULL){
        printf("No further heap memory available\n");
        return;
    }
    new_node->data=data;
    new_node->link=NULL;

    if(front==NULL){ //Initial Condition
        front=new_node;
        rear=new_node;
    }
    else{
        rear->link=new_node;
        new_node->link=front;
        rear=new_node;
    }  
}

void deque(){
    if(front == NULL){
        printf("Queue Underflow\n");
        return;
    }
    
    node *temp = front;
    
    // Case 1: Only one node in the circular queue
    if(front == rear){
        front = NULL;
        rear = NULL;
    } 
    // Case 2: More than one node
    else {
        front = front->link;
        rear->link = front; // Updates rear to point to the new front
    }
    
    free(temp);
}

void print(){
    node* temp=front;
    if(front==NULL){
        printf("Queue is Empty\n");
        return;
    }
    do{
        printf("%d ", temp->data);
        temp=temp->link;
    }while(temp!=front);

    printf("\n");
}



