#include <stdio.h>
int main()
{
int x,n,sum=0,i=0;
int arr[10];
int max=100000;
{
	printf("Enter number(x>0):");
	scanf("%d" , &x);
} while (x<0);	

for (n=0;n<max;n++)
{
	sum=sum+n;
	if (n%x==0)
		{
		arr[i]=sum;
		i++;
		}
}
for ( i=0; i<=9 ;i++)
	{
	printf("%d\n", arr[i]);
	}
return 0;
}
