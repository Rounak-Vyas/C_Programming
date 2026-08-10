#include <stdio.h>

struct {            // no tag
    char *name; // string literal or string constant 
} student1,student2;

struct details {   // structure tag -> details 
    char *name;  
    int number;
};            //-> variable could also be written here -> }stu3,stu4;

typedef struct subjects {   // old variable -> struct subjects 
    char *subnames[5];
}snames; // new variable  

int main (){
    student1.name = "Rounak";
    student2.name = "R";
    printf("%s %s", student1.name, student2.name);

    // performing using structure tags 
    struct details stu3;  // defined the vairables stu3 of -> struct type -> details
    struct details stu4;
    stu3.number = 34;
    stu4.number = 45;

    // typedef function 
    snames stu5;  // in place of writing struct subjects -> we wrote sn
    stu5.subnames[0]= "Maths";
    stu5.subnames[1]="English";

    snames stu6;
    stu6.subnames[0]= "Bio";



    return 0;


}
