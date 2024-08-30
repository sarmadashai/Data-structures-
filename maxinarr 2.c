# include <stdio.h>
# include <limits.h>

int max(int A[], int n)
{   
    if(n == 1)return A[0]; //if only one element, its largest

    int maxofRest = max(A, n-1);  

    if(A[n - 1] > maxofRest)return A[n - 1];
    else
        return maxofRest; 
}
int main()
{
    int A[5] = {30,55,209,10,15};
    int m = max(A,5);
    printf("Max element of the given array is: %d\n", m);
}