// Better code with ASCII math code written at last 

//Q) from a string input (c23idefi322496icnf), check the frequency of each digit appearing


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s= malloc(1024*sizeof(char));
    scanf("%[^\n]",s);
    s= realloc(s,strlen(s)+1);  
    
    char num[]={'0','1','2','3','4','5','6','7','8','9'};
    int count[10]={0};
    int size = strlen(s);
    
    for (int i=0; i<size; i++){
        for (int j=0; j<sizeof(num)/sizeof(num[0]);j++){
            if (s[i]==num[j]){
                (count[j])+=1;
            }
        }
 
    }
    for (int j=0; j<sizeof(num)/sizeof(num[0]);j++){
     printf("%d ", count[j]);
    }
    
    return 0;
}
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *s = malloc(1024 * sizeof(char));
    if (scanf("%[^\n]", s) != 1) return 0;

    int count[10] = {0}; // Holds frequencies for '0' through '9'
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        // Check if character is a digit
        if (s[i] >= '0' && s[i] <= '9') {  // checking if its a digit
            int index = s[i]-'0'  ASCII math
            count[index]++; // Direct index upgrade
        }
    }

    // Print frequencies
    for (int j = 0; j < 10; j++) {
        printf("%d ", count[j]);
    }
    printf("\n");

    free(s); // Clean up memory
    return 0;
}*/

/*Because digit characters are stored in sequential order, if you subtract the character '0' (which is 48) from any digit character, the result is the exact numerical integer value:
If s[i] is '0':'0' - '0' -> 48 - 48 = 0 (gives index value 0)
If s[i] is '5':'5' - '0' -> 53 - 48 = 5 (gives index 5)
If s[i] is '9':'9' - '0' -> 57 - 48 = 9 (gives index 9)
*/
