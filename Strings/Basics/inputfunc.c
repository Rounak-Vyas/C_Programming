#include <stdio.h>

void input(char arr[]){
    int ch,i=0;
    while((ch=getchar())!='\n')
        arr[i++]=ch;
    arr[i]= '\0';
}
int main(){
    char arr[100];
    printf("Enter the string: \n");
    input(arr);
    printf("%s",arr);


}