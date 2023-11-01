#include<stdio.h>
#include<math.h>
int main()
{
    int num1,fact=1,i;
    printf("Enter a number:");
    scanf("%d",&num1);
    for(i=1;i<=num1;i++)
    {
        fact=fact*i;
    }
    printf("Factorial is %d :",fact);
    return 0;
}