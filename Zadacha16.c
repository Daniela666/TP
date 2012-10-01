#include <stdio.h>
int main()
{
int i,x,z,n=0;
int arr[10];
do
{
	printf("Enter number(x>0):");
	scanf("%d" , &x);
} while (x<0);	

for (i=1;i<=x;i++)
{
	if (x%i==0)
	{
		if (i%2!=0)
		{
		arr[n]=i;
		n++;
		}
	}
}
	
for ( n=0; n<=9 ;n++)
	{
	printf("%d\n", arr[n]);
	}
printf("Prostite chisla sa:\n");
for ( n=0; n<=9 ;n++)
	{
	for ( z = 2 ; z < arr[n]; z++ )
		{
      		if ( arr[n]%z == 0 )
      		break;
   		}
  	if ( z == arr[n] )
   	printf("%d\n", arr[n]);
	}

return 0;
}
