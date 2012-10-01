#include <stdio.h>
int main()
{
int i;
float x;
double sum = 0,z;
do
{
	printf("Enter number(0<x<1):");
	scanf("%f" , &x);
} while ( x < 0 || x >= 1 );


	for( i = 3; x >= sum; i+=2 )
	{
		if( Prime(i) && Prime(i+2) )
			{
			z=i;
			sum =sum + 1/z + 1/(z+2);
			i=i+2;
			}
	}
printf("sum=%f\n", sum);
return 0;
}

int Prime(unsigned int number) 	
{
	unsigned int i;
    if (number <= 1)
	{
		 return 0;
	}
    for (i=2; i*i <= number; i++)
	 {
        if (number % i == 0)
		{
			return 0;
		}
    	 }
    return 1;
}
		
