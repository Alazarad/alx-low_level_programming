#include <stdio.h>

int main()
{
   int a;
   int b;
   int n= 4;

   for (a=0; a <= n; a++)
   {
        for (b = 0; b < a; b++)
		putchar(' ');
		
	putchar(44 + '0');
	putchar('\n');
	
   }
	return (0);
}


