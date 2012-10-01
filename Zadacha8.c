#include <stdio.h>
int main()
{
int x,next,c; 
int arr[10];
int f = 0, s = 1, i=0, n=10000000;
do
{
	printf("Enter number(0<=x<10):");
	scanf("%d" , &x);
} while ( x >= 10 );
 
switch (x)
{
case 0:
  printf("%d\n", x);
  break;
default: 
   for ( c = 1 ; c<n  ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = f + s;
         f = s;
         s = next;
      }

     if ( next%x == 0)
		{
		if (i==10) break;
		arr[i]=next;
		i++;
		}

   }

for ( i=0; i<=9 ;i++)
	{
	printf("%d\n", arr[i]);
	}
break;
}   

return 0;

}
