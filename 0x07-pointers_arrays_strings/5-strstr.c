#include "main.h"

/**
 * _strstr- look for first occurrence of neddle in
 * the haystack
 * @haystack: string to be searched in
 * @needle: string to be searched for
 * Return: first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	int count1, count2, a, b;

	count2 = 0;
	if (*(needle + 0) == '\0')
		return (haystack);
	for (count1 = 0; *(haystack + count1) != '\0'; count1++)
	{
		if (*(haystack + count1) == *(needle + count2))
		{
			a = count1;
			b = count2;
			while (*(needle + b) != '\0')
			{
				if (*(haystack + a) == *(needle + b))
				{
					a++;
					b++;
				}
				else
					break;
			}
			if (*(needle + b) == '\0')
			return (haystack + count1);
		}
	}
	return (0);
}
