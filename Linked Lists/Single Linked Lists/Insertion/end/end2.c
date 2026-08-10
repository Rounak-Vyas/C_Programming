// code provides another variant of the function node_end 
/*
1. which provides passing of only current pointer and creating two temporary pointer to traverse 
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *ptr;
}node;

void add_end(node *head)
{
    node *current = head;

    while(current->ptr != NULL)
    {
        current = current->ptr;
    }

    node *temp = malloc(sizeof(node));

    printf("Enter the last node: ");
    scanf("%d", &temp->data);

    temp->ptr = NULL;

    current->ptr = temp;
}
//.. further code main