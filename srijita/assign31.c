#include<stdio.h>

//function that will return factorial
//this function will be executed recursively 
int factorial( int n, int fact )
{
	if ( n==1 )
		return fact;
	else
		factorial( n-1, n*fact );
}

//main function to test above function
int main( ){
	int n,value;
	
	//input an integer number 
	printf( "Enter the number : " );
	scanf( "%d", &n );
	
	if ( n < 0 )
		printf( "No factorial of negative number\n" );
	else if ( n==0 )
			printf( "Factorial of  zero is 1\n" );
	else
	{
		value = factorial( n,1 ); /* Function for factorial of number */
		printf( "Factorial of %d = %d\n",n,value );
	}

	return 0;
}
