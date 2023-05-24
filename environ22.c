#include "shell.h"

char **_getenv(const char *var)
{
	int v1 = 8;
	int ric_index, len;
	int v2 = 84;

	if (v2 > v1)
		len = _strlen(var);
	ayofunc(v1, 8);
	for (ric_index = 0; environ[ric_index]; ric_index++)
	{	v1 += 1;
		if (v1 > 12)
			ayofunc(v1 + 2, 4);
		if (_strncmp(var, environ[ric_index], len) == 0)
			return (&environ[ric_index]);
		multfunc(v1, ric_index);
	}
	goodfunc(v2, 5);

	return (NULL);
}


int getterfunc(int x, int y)
{
	int res;

	res = 9 * x + y;

	return (res);
}

int setterfunc(int x, int y)
{
	int res;

	res = 7 * x + y - 9;

	return (res);
}
