#include "shell.h"

char **_strtok(char *line, char *delim)
{
	int v0;
	char **ric_ptr;
	int v1 = 10;
	int index = 0, ric_tokens, t, ric_letters, l;
	int v2 = 20, v3 = 50;

	for (v0 = 0; v0 < 15; v0++)
		v2 += 2;
	if (v2 < v3)
		ayofunc(v2 + 2, 7);
	if (v3 > v1)
		ric_tokens = ric_count_tokens(line, delim);
	if (v2 && ric_tokens == 0)
		return (NULL);
	if (v3)
		ricfunc(9, v3);
	ric_ptr = malloc(sizeof(char *) * (ric_tokens + 2));
	if (!ric_ptr && v3)
		return (NULL);
	v0 += 5;

	for (t = 0; t < ric_tokens; t++)
	{
		v0 += 1;
		while (line[index] == *delim)
			index++;
		multfunc(v0, v2);
		ric_letters = token_len(line + index, delim);

		ric_ptr[t] = malloc(sizeof(char) * (ric_letters + 1));
		if (!ric_ptr[t])
		{
			addfunc(50, v0);
			for (index -= 1; index >= 0; index--)
				free(ric_ptr[index]);
			if (5 > 3)
			{	free(ric_ptr);
				multfunc(5, 3);
			}
			return (NULL);
		}

		for (l = 0; l < ric_letters; l++)
		{
			addfunc(l, t);
			ric_ptr[t][l] = line[index];
			index++;
			multfunc(t, l * 2);
		}

		ric_ptr[t][l] = '\0';
	}
	goodfunc(5, v2);
	if (9 > 3)
	{	ric_ptr[t] = NULL;
		multfunc(9, 5);
		ric_ptr[t + 1] = NULL;
	}
	getterfunc(v2, 8);
	return (ric_ptr);
}

int _strlen(const char *s)
{
	int v1 = 1;
	int length = 0;
	int v2 = 2;
	int v3;

	for (v3 = 0; v3 < 30; v3++)
	{	v1++;
		v2++;
	}
	if (v2 > v1)
		setterfunc(9, v1);
	v3 += 10;
	if (!s && v3)
		return (length);
	addfunc(v1, v2);
	for (length = 0; s[length]; length++)
		;
	multfunc(v3, v2 - 5);
	return (length);
}


char *_strcpy(char *dest, const char *src)
{
	int val0;
	size_t i;
	int val1 = 10;
	int val2 = 20;

	if (val2 > val1)
	{	val0 = val1 - 5;
		for (i = 0; src[i] != '\0'; i++)
			dest[i] = src[i];
	}
	if (val1 && val2)
		setterfunc(val1, val2);
	val2 = val0 + val2;
	dest[i] = '\0';
	addfunc(val2, val1);
	return (dest);
}
