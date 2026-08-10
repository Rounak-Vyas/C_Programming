
// long and short 
// short makes half -> short int -> data size : 2bytes 
// long makes double -> long long int -> data size 8 bytes 

#include <stdio.h>
int main (){
      printf("%d\n",sizeof(int));
      printf("%d\n",sizeof(long long int));
      printf("%d\n",sizeof(long int));
      printf("%d\n",sizeof(short int));
      int n = 3;
      long long int sn= 3;
      short int ln= 3;
      printf("%d\n",sizeof(n));
      printf("%d\n",sizeof(sn));
      printf("%d\n",sizeof(ln));


// by deafult every data type is signed means ; it will cover - to + , where first bit indicates whether the number 
// is positive or negative   
// Max singned int value : 2147483647, beoyond that it changes to negative value 

      int ex= 2147483648;
      printf("%d\n",ex);
      int ex1= 2147483649;
      printf("%d\n",ex1);
    return 0;
}

