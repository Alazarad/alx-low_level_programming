#include <stdio.h>

int main()
{
	int a, b = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			b = a + b;
	}
	printf("%d\n", b);
	return (0);
}
