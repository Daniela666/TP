#include <stdio.h>
int main()
{
int x,y;
int i;
int sum = 0;

do
{
	printf("Enter first number:");
	scanf("%d" , &x);
	printf("Enter second number(must be greater that the first):");
	scanf("%d" , &y);
} while (x>=y);	

for (i=x;i<=y;i++)
	{
	if (i%17==0)
	sum=sum+i;
	}
printf("The sum of all numbers that can be divided by 17 is: %d\n" , sum);

return 0;
}
