#include <stdio.h>
#include <math.h>
int main()
{
int x,n,a,b,i=0;
double arr[10];
double sum=0;
double z,cosVal;
do
{
	printf("Enter number(0<x<10):");
	scanf("%d" , &x);
} while ( x < 0 || x >= 10 );

for (n=1;n<=10;n++)
{
a=n*x;
b=(n+1)*x;
	for (z=a;z<b;z++)
		{
		cosVal = cos(z);		
	 	sum=sum+cosVal;
		}
	arr[i]=sum;
	i++;
}

for ( i=0; i<=9 ;i++)
	{
	printf("%f\n", arr[i]);
	}
return 0;
}
