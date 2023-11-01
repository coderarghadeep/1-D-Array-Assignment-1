#include <stdio.h>
#include <math.h>
void main()
{
   long int x, n, xpown;
   long int power(int x, int n);
   printf("Enter the values of X and N: ");
   scanf("%ld %ld", &x, &n);
   xpown = power (x, n);
   printf("X to the power N = %ld",xpown);
}
/*Recursive function to computer the X to power N*/
long int power(int x, int n)
{
   if (n==1)
      return(x);
   else if ( n%2 == 0)
      return (pow(power(x,n/2),2)); /*if n is even*/
   else
      return (x*power(x, n-1)); /* if n is odd*/
}