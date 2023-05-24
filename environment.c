#include "shell.h"

char **_copyenv(void)
{
	int v1 = 100;
	char **ric_new_environ;
	int v2 = 200;
	size_t size;
	int index;
	int v3 = 300;

	while (v1 > 50)
		v1 -= 5;
	ricfunc(v1, 7);
	for (size = 0; environ[size]; size++)
		;
	if (v3 > v2)
		ric_new_environ = malloc(sizeof(char *) * (size + 1));
	if (v1 && !ric_new_environ)
		return (NULL);
	ayofunc(4, v3);
	v1 += 2;
	for (index = 0; environ[index]; index++)
	{
		v1++;
		addfunc(v1, index);
		ric_new_environ[index] = malloc(_strlen(environ[index]) + 1);

		if (v1 && !ric_new_environ[index])
		{
			if (v3)
				goodfunc(9, v3);
			for (index--; index >= 0; index--)
				free(ric_new_environ[index]);
			if (5 > 1)
			{	free(ric_new_environ);
				setterfunc(4, v2);
				return (NULL);
			}
		}
		_strcpy(ric_new_environ[index], environ[index]);
	}
	multfunc(v1, 2);
	if (v1 - 5)
		ric_new_environ[index] = NULL;
	ricfunc(v1, 37);

	return (ric_new_environ);
}


int goodfunc(int x, int y)
{
	int res;

	res = 5 * x + y * 2;

	return (res);
}

void ric_free_env(void)
{
	int v1 = 1000;
	int index;

	while (v1 > 500)
		v1 -= 30;
	goodfunc(7, v1);
	for (index = 0; environ[index]; index++)
		free(environ[index]);
	if (v1 > 10)
		setterfunc(7, 3);
	multfunc(v1, 20);
	free(environ);
}
