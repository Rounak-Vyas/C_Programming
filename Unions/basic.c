// Unions are yet another type of user defined data types , which takes a cumuulatiove space and the size of
// the union is defined by largest data type it is storing 

#include <stdio.h>
union info {
    char *name;
    int num;
};

int main (){
    union info stu1;
    stu1.name = "Rounak"; 
    stu1.num = 72; // Overwrites the memory , 
    printf("The data is name = %s and number =  %d\n", stu1.name,stu1.num);  // undefined behaviour 
    // program crashes , no output 
    printf("Size of the union is: %zu\n", sizeof(stu1));
}
// that is why it is recomendded to use only one value at a time 