//find min element of array using recursion
# include <stdio.h>

int min(int a, int b)
{
    return a<b? a:b;
}
int minr(int a[], int n)
{
    if(n==1)
        return a[0];
    return min(a[n-1], minr(a,n-1));    
}
int main()
{
    int a[] = {11,-2,66,1,3};
    int n = sizeof(a)/sizeof(a[0]);
    printf("%d\n", minr(a,n));

}
