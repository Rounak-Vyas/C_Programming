// This is a professional way to initialize and build a linked list 
// for complete breakdown , refer handwritten notes. 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;  
    struct node *current = NULL;
    struct node *newNode = NULL;

    for(int i = 1; i <= 5; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        newNode->data = i * 10;
        newNode->link = NULL;

        if(head == NULL)  // intial condition to put head at starting 
        {
            head = newNode;
            current = newNode;
        }
        else
        {
            current->link = newNode;  // linking the newppointer to previous 
            current = newNode; // updating the new pointer as current
        }
    }

    current = head;  // reset current to starting 

    printf("Linked List:\n");

    while(current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->link;
    }

    printf("NULL\n");

    return 0;
}