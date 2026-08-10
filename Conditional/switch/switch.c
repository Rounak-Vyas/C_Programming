/*
RULES:
1. Only those expression are allowed in switch and case values which results in an integral constant value 
2. variables are not allowed to use as case values 
3. marcos are allowed to be used as case values 
*/ 

/* ERROR , CHAR variable as switch expression
#include <stdio.h>
int main (){
    printf("Enter name of any day");
    char day[50];
    scanf("%s",day);
    switch (day){
    }
}
*/

#include <stdio.h>
int main (){
    int a,b;
    a,b = 10,20;
    int result = b-a;
    switch (result){
    //    case result>10     //this must now have only one constant value
        case 10 : printf("The answer is 10");
        break;

        case 20: printf("impossible answer");
        break;

    }
    return 0;

}