#include <stdio.h>
int main()
{
int x,a,n,z;
int arr[10];
int max=1000,sum=0,i=0;
do
{
	printf("Enter number(0<x<10):");
	scanf("%d" , &x);
} while ( x < 0 || x >= 10 );

for (n=1;n<=10;n++)
{
	for (a=0;a<max;a++)
		{
		z=n*x;
		if (a%z==0)
	 	sum=sum+a;
				}
	arr[i]=sum;
	i++;
}

for ( i=0; i<=9 ;i++)
	{
	printf("%d\n", arr[i]);
	}
return 0;
}
