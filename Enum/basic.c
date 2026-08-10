/*Enum or Enumerations are another type of user defined type used to assign names to integral constants 
These are not collection of different data types, but one choice from fixed set interger constants 
Ex: in a program we write state = 1; its hard to identify what it exactly points
But writing state = On; is much more readable and coveninient.
*/

#include <stdio.h>
enum Color{
    Red,   // auromatically assing value 0 
    Blue,  // previous + 1 ; i.e -> 1
    Green, // 2 
};
int main (){
    enum Color s;
    s = Red;
    printf("%d",s);
    //printf("%s",s); ERROR : It's not a string, its a integer constant 
}