/* Here we develop a code that finds the min and max from a list of user defined array 
 We will make a function that finds out the values , hence we will use pointers for the values*/

 #include <stdio.h>

 void minmax(int *min, int*max, int len, int a[]) { // used void cuz function isn't returning anything
    *min = *max =a[0];
    for (int i=1; i<len; i++){
        if(a[i]<*min)
            *min = a[i];
        if(a[i]>*max)
            *max = a[i];
    }
 }

 int main (){
    int min,max,size;
    printf("Please define the size of the array : ");
    scanf("%d",&size);
    int arr[size];

    for (int i =0 ; i<size; i++){
        printf("Please enter the value at index %d of the array: ", i);
        scanf("%d",&arr[i]);
    }

    printf("The inserted array is:\n");
    for (int i =0 ; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

   // min = max =0;   // not required to write as we are changing the values in the function, hence garbage values are never read
    minmax(&min,&max,size,arr);
    printf("The min value in the array is %d and the max value is %d", min,max);
    return 0;

 }