#include <stdio.h>
int main()
{
int x,y;
int i,n;
do
{
	printf("Enter first number:");
	scanf("%d" , &x);
	printf("Enter second number(must be greater that the first):");
	scanf("%d" , &y);
} while (x>=y);	

for (i=x;i<=y;i++)
	{
 	for ( n = 2 ; n <= i - 1 ; n++ )
   		{
      		if ( i%n == 0 )
      		break;
   		}
	if ( n == i )
     		{
		if ( i%10 == 3)
		printf ("%d\n" , i);
		}
	}	
return 0;
}
