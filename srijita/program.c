#include<stdio.h>
#include<stdlib.h>

int fact(int* num, int* fact)
{
    int i;
    for (i = 1; i<= (*num); i++)
    {
        *fact = (*fact)*(*num);
    }
}

int main()
{
    int num, n;
    printf("Write the number to take factorial \n");
    scanf("%d", &num);
    fact(&num, &fact);
    printf("Factorial = %d", fact);

    return 0;
}