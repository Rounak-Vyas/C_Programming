// code uses Linked list structure to create implement a stack behaviour 

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;    
node *top=NULL; // created a global pointer of type struct node 
// since top is a global variable, we don't need to worry about passing or returning its value from every function


void push (int data);
void pop();
void print();

int main(){
    int choice,data;
    while(1){
        printf("Enter your choice.\n"
                "1. Push operation.\n"
            "2. Print\n"
        "3. Quit\n"
        "4. Pop\n");

        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("Enter the data to be pushed into stack: ");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                print();
                break;
            case 3: 
                exit(1);
            case 4: 
                pop();
                break;
            default:
                printf("Enter a valid number\n");
                break;
        }
    }// can have more cases like isEmpty or peek (returns top->data)
}

void push (int data){
    node *new_node;
    new_node = malloc(sizeof(node));
    if(new_node==NULL){
        printf("Stack size is full:\n");
        exit(1);;
    }
    new_node->data=data;

    new_node->link=top;
    top=new_node; // top is declared globally , so it function directly gets the reference 

}

void print(){
    if(top==NULL){
        printf("Stack is empty");
    }
    else {
        node *temp = top;
        printf("The elements are: ");
        while (temp){
            printf("%d ", temp->data);
            temp=temp->link;
        }
    }
    printf("\n");
}

void pop(){
    if(top==NULL){
        printf("Stack already empty\n");
        return;  // necessary because , the program will continue the execution , and try to excess null; which terminates the program
    }
    node *temp=top;
    top=top->link;
    free(temp);
    temp=NULL;
}
