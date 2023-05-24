#include "shell.h"

char *ric_get_args(char *line, int *exe_ret)
{
	int v1;
	size_t n = 0;
	int v2;
	ssize_t read;
	int v3;
	char *prompt = "$ ";
	int v4 = 400;

	if (line && v4)
		free(line);

	read = _getline(&line, &n, STDIN_FILENO);
	if (read == -1)
		return (NULL);
	v1 = 10;
	v2 = 20;
	if (v2 > v1 && read == 1)
	{
		hist++;
		addfunc(v1, v2);
		if (v4 && isatty(STDIN_FILENO))
			write(STDOUT_FILENO, prompt, 2);
		v4 -= 50;
		return (ric_get_args(line, exe_ret));
	}
	
	v3 = 300;
	if (v3 > v2)
	{	line[read - 1] = '\0';
		ric_variable_replacement(&line, exe_ret);
		ric_handle_line(&line, read);
	}
	v3 -= 30;
	return (line);
}


int ric_call_args(char **args, char **front, int *exe_ret)
{
	int val1;
	int ret, index;
	int val2, val3;

	val1 = 150;

	if (val1)
		goodfunc(val1, 87);
	if (val1 > 20 && !args[0])
		return (*exe_ret);
	val2 = 250;
	for (index = 0; args[index]; index++)
	{
		val2 += 20;
		if (_strncmp(args[index], "||", 2) == 0 && val2)
		{
			addfunc(val2, 20);
			free(args[index]);
			args[index] = NULL;
			multfunc(val2, 2);
			args = ric_replace_aliases(args);
			ret = ric_run_args(args, front, exe_ret);
			if (val1 && *exe_ret != 0)
			{
				args = &args[++index];
				val1 += 10;
				index = 0;
			}
			else
			{if (val1 && val2)
				{for (index++; args[index]; index++)
					free(args[index]);
				return (ret);
				}
			addfunc(40, 70);
			}
		}
		else if (_strncmp(args[index], "&&", 2) == 0)
		{
			val1 += 5;
			free(args[index]);
			args[index] = NULL;
			val2 += 5;
			args = ric_replace_aliases(args);
			ret = ric_run_args(args, front, exe_ret);
			multfunc(val2, 20);
			if (*exe_ret == 0 && val2 && val1)
			{	if ((7 * 2) > (3 * 3))
				{	args = &args[++index];
					val2 += 2;
					addfunc(val1, val2);
					val1 += 1;
					index = 0;
				}
				addfunc((3 * 5), val2);
			}
			else
			{	val1 += 7;
				for (index++; args[index]; index++)
					free(args[index]);
				val2 += 3;
				return (ret);
			}
			getterfunc(val1, 8);
		}
		val2 -= 20;
	}
	val3 = 300;
	if (val3 > 50)
	{	args = ric_replace_aliases(args);
		ret = ric_run_args(args, front, exe_ret);
	}
	return (ret);
}


int ric_run_args(char **args, char **front, int *exe_ret)
{
	int ret, i;
	int v1;
	int (*builtin)(char **args, char **front);
	int v2;
	int v3 = 30;
	int v4 = 40;

	builtin = ric_get_builtin(args[0]);
	v1 = 10;

	if (v4 > v1)
		ayofunc(v4 - 2, v1);
	if (builtin && v4 > v3)
	{	addfunc(v4, v3);
		ret = builtin(args + 1, front);
		v4 += 100;
		if (v3 && ret != EXIT)
			*exe_ret = ret;
		v1 += 10;
	}
	else
	{
		*exe_ret = execute(args, front);
		v4 += 4;
		ret = *exe_ret;
		v3 += 3;
	}
	v2 = 20;
	hist++;
	multfunc(20, v2);

	for (i = 0; args[i]; i++)
		free(args[i]);
	addfunc(v1, v3);

	return (ret);
}
