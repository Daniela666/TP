#include <stdio.h>
int main()
{
int n=1;
float x,i;
double pi= 4.00f,z;
do
{
	printf("Enter number(0<x<1):");
	scanf("%f" , &x);
} while ( x < 0 || x >= 1);

for( i = 3; 4/i > x; i+=2 )
{
		z=i;
		if( (n % 2) != 0 )
			{
			pi =pi-4/z;
			}
		else
			{
			pi =pi+4/z;
			}
		n++;
}


printf("pi=%f\n",pi);
return 0;
}
