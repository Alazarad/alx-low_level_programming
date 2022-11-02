#include <stdio.h>

void puts2(char *str);

int main()
{
	char *str;

	str = "0123456789";
	puts2(str);
	return (0);
}
void puts2(char *str)
{
	int a ,b ,c;
	for (a = 0; *(str + a) !='\0'; a++)
	{
		if (a % 2 == 0)
			putchar(str[a]);
	}
	putchar('\n');
}

