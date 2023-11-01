#include<stdio.h>
#include<stdlib.h>
int fact=1;
int facto(int *num)
{
    int i;
    for (i=1;i<= (*num); i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int num, fact;
    printf("Write the number to take factorial: \n");
    scanf("%d", &num);
    fact=facto(&num);
    printf("Factorial = %d",fact);
    return 0;
}