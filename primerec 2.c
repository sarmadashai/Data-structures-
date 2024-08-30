//program to check if a number is prime using recursion
# include <stdio.h>
# include <math.h>


int prime(int num, int divisor)
{
  if(num == 0 )
    return 0;   //0 is not a prime number
  if(divisor > sqrt(num))
    return 1; // is prime
  if(num % divisor == 0)
    return 0;  //if div is found, not a prime
  else
    return prime(num, divisor + 1);  
}

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    int r = prime(num , 2);
    if(r == 0)printf("Entered number is not prime\n");
    else
        printf("Entered number is prime\n");
}