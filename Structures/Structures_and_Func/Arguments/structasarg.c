// In this code we will pass structure members as an arguments to a function 
#include <stdio.h>
typedef struct student {
    char name[50];
    int rollno;
    float percentage;
}sd;
void print (sd s){  // sd variable type | s -> local variable that will receiveit 
    printf("The name of the student is: %s\n",s.name);
    printf("Roll no: %d\n",s.rollno);
    printf("Percentage: %.2f\n",s.percentage);
    printf("___________________\n");
}
int main (){
    sd stu1 = {"Rohan", .23,76.4};
    sd stu2 = {"Gopal",7,58.32};
    print(stu1);
    print(stu2);

    return 0;
    

}