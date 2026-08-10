#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //int size = n*(n-1)/2; // determines the size of array based on n.
  int andmax=0,ormax=0,xormax=0;
  for (int i=1;i<n;i++){
    for(int j= i+1;j<=n;j++){
        int andres = i&j;
        andmax = andmax <andres && andres<k ? andres:andmax;
        int orres= i|j;
        ormax= ormax<orres && orres<k ? orres:ormax;
        int xorres= i^j;
        xormax= xormax<xorres && orres<k ? xorres:xormax;  
    }
  }
  printf("%d\n%d\n%d", andmax,ormax,xormax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
