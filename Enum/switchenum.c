#include <stdio.h>
int main (){
    enum DAY {mon,tue,wed,thr,fri,sat,sun};
    enum DAY today;
    printf("What is today (0-> monday, 6->sunday): \n");
    scanf("%d",&today);

    switch (today){    // has much more readability then case 0 case 1  etc 
        case mon:
            printf("Today is modnay");
            break;
        case tue:      // *IMP*-> variables are not allowed to be used as case parameters but these are enums or integer constants;
            printf("TOday is tuesday");
            break;
        case wed:
            printf("Today is webnesday");
            break;

        default:
            return 1;
            break;
    }
    return 0;
}