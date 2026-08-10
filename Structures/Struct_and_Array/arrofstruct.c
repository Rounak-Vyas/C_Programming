#include <stdio.h>
#define numofcar 2

typedef struct cardetails {
    char modelname[50];
    int modelnum;
    int year;
}car;

int main (){
    car c[numofcar];
    for (int i = 0; i<numofcar; i++){
        printf("Enter the name of car %d: ", i+1);
        scanf("%s",&c[i].modelname);
        printf("Enter the model number of the car %d: ", i+1);
        scanf("%d",&c[i].modelnum);
        printf("Enter the year of car %d: ", i+1);
        scanf("%d",&c[i].year);
    }
    for (int i = 0; i<numofcar; i++){
        printf("%s\n",c[i].modelname);
        printf("%d\n",c[i].modelnum);
        printf("%d\n",c[i].year);
    }

    return 0;
}
