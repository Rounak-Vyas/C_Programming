// Realloc -> Re allocate with new size 

#include <stdio.h>
#include <stdlib.h>
int main (){
    int n,i;
    printf("Enter the number of elements to be stored:");
    scanf("%d",&n);
    int *ptr = (int*)calloc(n,sizeof(int));
    if (ptr==NULL){
        printf("Memory couldn't be allocated");
        exit(1);
    }
    // Entering the first set of elements 
    for(i=0; i<n;i++){
        printf("Enter the elements: ");
        scanf("%d",ptr+i);
    }
    printf("The elements are: \n");
    for (i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }

    printf("\n");

    int m,new_size; 
    printf("How many more elements you want to add: ");
    scanf("%d",&m);
    new_size = n+m;
    printf("Number of elements that could be stored now is: %d\n",new_size);

    int *temp= (int*)realloc(ptr,(new_size*sizeof(int)));
    // using a temp variable cuz , if we use ptr and realloc fails , the pointer will be rewritten as NULL,
    // and we will eventually loose our previous data as well 
    // realloc takes 2 arguments -> previous pointer and the new size
    // the new size is -> total new size required = old size + extra size required 
    // The new size is total bytes required -> number of elements x size of each element

    if (temp==NULL){
        printf("Invalid:");
        exit(1);
    }
    ptr=temp;

    printf("Enter the new elements: \n");
    for (i=n;i<new_size;i++){
        printf("Enter the Element: ");
        scanf("%d",ptr+i);
    }
    printf("The elements are :\n");
    for (i=0;i<new_size;i++){
         printf("%d",*(ptr+i));
    }
    return 0;
}
