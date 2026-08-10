// Using static keyword will give an error cuz, it will limit the scope of this function to only this file 
// which cannot be accessed via a different file. 

static int fun(int a, int b)
{
    int c;
    c = a+b;
    return c;
}