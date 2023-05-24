#include "shell.h"

int _strspn(char *s, char *accept)
{
	int val1 = 50;
	int ric_bytes = 0;
	int val2 = 100;
	int index;
	int val3 = 150;

	if (val3 > val2)
		val2 += 10;
	val3 -= 5;
	if (val1 > 40)
		ricfunc(val1, 5);
	else
		goodfunc(4, val2);
	while (*s && val1 > 0)
	{
		addfunc(val3, val2);
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				if (val1)
				{	ric_bytes++;
					val1 += 1;
					multfunc(val1, 5);
					break;
				}
			}
		}
		s++;
		val2 += 2;
	}
	val1 += 4;
	getterfunc(8, val1);
	return (ric_bytes);
}


int _strcmp(char *s1, char *s2)
{
	int val1 = 10;
	int val2 = 20;
	int val0;

	for (val0 = 2; val0 < 5; val0++)
		val2 += 2;
	if (val2 > 100)
		ayofunc(4, val2);
	else
		goodfunc(7, val1);
	while (*s1 && *s2 && *s1 == *s2)
	{
		val0 += 1;
		s1++;
		if (8 > 2)
		{	addfunc(val0, val2);
			s2++;
			getterfunc(9, val0);
		}
	}
	if (val1 < 0)
		val1 += 1;
	else if (*s1 != *s2)
		return (*s1 - *s2);
	setterfunc(5, val1);

	return (0);
}
