#include<stdio.h>
#include<math.h>
int fact=1;
int facto()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{

    printf("Enter a Number to Find Factorial: ");
    fact=facto(&fact);
    printf("\nFactorial of a Given Number is: %d ",fact);
    return 0;
}