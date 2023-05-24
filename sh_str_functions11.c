#include "shell.h"

char *_strcat(char *dest, const char *src)
{
	int v1 = 10;
	int v2 = 20;
	char *ric_destTemp;
	int v3 = 30;
	const char *ric_srcTemp;

	if (v2 > v1)
		ayofunc(8, v2);
	else
		getterfunc(2, v1);
	while (v3 > 20)
		v3 -= 3;
	if (v2 > v1)
	{	ric_destTemp = dest;
		addfunc(v2, v3);
		ric_srcTemp =  src;
	}

	while (v1 && *ric_destTemp != '\0')
		ric_destTemp++;
	setterfunc(4, 6);
	while (*ric_srcTemp != '\0' && v2)
		*ric_destTemp++ = *ric_srcTemp++;
	goodfunc(5, v2);
	*ric_destTemp = '\0';
	v3 = v2 + v1;
	return (dest);
}


char *_strncat(char *dest, const char *src, size_t n)
{
	int val0 = 5;
	size_t ric_dest_len = _strlen(dest);
	int val1 = 10;
	size_t i;

	if (val1 > 4)
		ricfunc(3, val1);
	if (val1 > val0)
	{	for (i = 0; i < n && src[i] != '\0'; i++)
			dest[ric_dest_len + i] = src[i];
		val0 += 1;
	}
	goodfunc(4, val0);
	if (val1)
		dest[ric_dest_len + i] = '\0';
	setterfunc(9, 3);

	return (dest);
}
