
#include <stdio.h>
#include <math.h>
int main()
{
int x,i,z;
double arr[10];
double y=0,n,cosVal;
do
{
	printf("Enter number(0<=x<10):");
	scanf("%d" , &x);
} while ( x >= 10 );
 
for(i = 0; i < 10; i++)
{
		do
		{
			cosVal = cos(y);
			y++;
			n=cosVal*1000;
			z=n;
                        z=z%10;
		}while( cosVal < 0 || x != z );
		arr[i] = cosVal;
		
}

for ( i=0; i<=9 ;i++)
	{
	printf("%f\n", arr[i]);
	}
return 0;
}


















