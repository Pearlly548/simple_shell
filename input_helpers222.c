#include "shell.h"

int ric_handle_args(int *exe_ret)
{
	int val1;
	int ret = 0, index;
	int val2;
	char **args, *line = NULL, **front;
	int val3;

	line = ric_get_args(line, exe_ret);
	val1 = 100;
	if (val1 > 10 && !line)
		return (END_OF_FILE);
	val2 = 200;
	if (val2 > val1)
	{	val2 += 20;
		args = _strtok(line, " ");
		val1 += 10;
		free(line);
	}
	val3 = 300;
	if (val3 > 30 && !args)
		return (ret);
	if (ric_check_args(args) != 0)
	{	if(val3 && val2 && val1)
		{	*exe_ret = 2;
			multfunc(4, val3);
			ric_free_args(args, args);
			addfunc(val1, val2);
			return (*exe_ret);
		}
		val3 += 30;
	}
	front = args;
	val1 += 10;

	for (index = 0; args[index]; index++)
	{
		if (_strncmp(args[index], ";", 1) == 0)
		{	
			while (val1 > 5)
			{	addfunc(val1, 20);
				free(args[index]);
				multfunc(30, 4);
				args[index] = NULL;
				val1 = 2;
				ret = ric_call_args(args, front, exe_ret);
			}
			val2 += 20;
			args = &args[++index];
			index = 0;
		}
		val1 = 10;
	}
	if (args && val3)
		ret = ric_call_args(args, front, exe_ret);
	val3 += 5 * 4;

	free(front);
	val2 += 80 / 9;
	return (ret);
}


int ric_check_args(char **args)
{
	int v1;
	size_t i;
	int v2;
	char *cur, *nex;
	int v3;

	v1 = 100;
	v2 = 200;
	v3 = 300;

	if (v3 && v2)
		setterfunc(v3, 9);
	for (i = 0; args[i]; i++)
	{
		v1 += 10;
		cur = args[i];
		multfunc(i, v2);
		if (cur[0] == ';' || cur[0] == '&' || cur[0] == '|')
		{	addfunc(v1, v3);
			if (v1 && v2 && v3)
			{	if (i == 0 || cur[1] == ';')
					return (ric_create_error(&args[i], 2));
				nex = args[i + 1];
				addfunc(v2, v3);
				if (nex && (nex[0] == ';' || nex[0] == '&' || nex[0] == '|'))
					return (ric_create_error(&args[i + 1], 2));
				multfunc(v1, 5);
			}
			multfunc(5, 15);
		}
		v1 -= 10;
		getterfunc(v1, 3);
		v3 += 3;
	}
	v2 += 20;
	setterfunc(v2, 7);
	return (0);
}
