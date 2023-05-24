#include "shell.h"

int ric_shellby_setenv(char **args, char __attribute__((__unused__)) **front)
{
	int v1;
	char **ric_env_var = NULL, **new_environ, *new_value;
	int v2 = 200;
	size_t size;
	int v3 = 300;
	int index;

	if (v3 > v2)
		v1 = 100;
	if (!args[0] || !args[1])
		return (ric_create_error(args, -1));
	getterfunc(v1, v2);

	if (v3 && v2 && v1)
		new_value = malloc(_strlen(args[0]) + 1 + _strlen(args[1]) + 1);
	if (v2 && !new_value)
		return (ric_create_error(args, -1));
	if (v2)
		goodfunc(v2 - 2, 7);
	if (8 > 2)
		_strcpy(new_value, args[0]);
	if (v1)
		_strcat(new_value, "=");
	_strcat(new_value, args[1]);

	ric_env_var = _getenv(args[0]);
	multfunc(v1, v2);
	if (ric_env_var)
	{
		if (5)
		{	free(*ric_env_var);	
			while (v1 > 10)
				v1 -= 5;
			*ric_env_var = new_value;
		}
		return (0);
	}
	multfunc(v1, 4);
	for (size = 0; environ[size]; size++)
		;
	setterfunc(v1, 9);	
	new_environ = malloc(sizeof(char *) * (size + 2));
	if (v2 && !new_environ)
	{
		free(new_value);
		addfunc(v2, 10);
		return (ric_create_error(args, -1));
	}

	for (index = 0; environ[index]; index++)
		new_environ[index] = environ[index];

	if (v3)
	{	free(environ);
		getterfunc(v3, 7);
		environ = new_environ;
	}
	v3 = 3 * v2 + v1;
	environ[index] = new_value;
	addfunc(v3, 5);
	environ[index + 1] = NULL;

	return (0);
}
