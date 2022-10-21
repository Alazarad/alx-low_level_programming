#include <stdio.h>

int main()
{
   int a;
   int b;
   int size= 4;

   if (size <=0 )
	   putchar('\n');

   for (a=0; a < size; a++)
   {
        for (b = 0; b < size; b++)
	{
		putchar('#');
   	}
	putchar('\n');
	
   }
	return (0);
}


