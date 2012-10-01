#include <stdio.h>

int fibunacci( int );

int main()
{
int first = 0, second = 1, n = 0;
int x, y, fib, i, next;
do
{
	printf("Enter first number:");
	scanf("%d" , &x);
	printf("Enter second number(must be greater that the first):");
	scanf("%d" , &y);
} while (x>=y);	

	for( i = x; i <= y || fib > y; i++ )
	{
		fib = fibunacci(n);		
		n++;
		if( fib >= x && fib <= y )
		{
			printf("%d\n", fib);		
		}
	}

}

int fibunacci( int n )
{
	int first = 0, second = 1, i, next;
	if (n == 1 )
    	{
      		return first;
    	}
	if( n == 2 )
	{
		return second;	
	}
	for( i = 0; i < n-2; i++ )
	{
		next = first + second;
		first = second;
		second = next;
	}
	return next;
}
