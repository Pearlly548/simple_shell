#include "shell.h"

/**
 * ric_sig_handler - Prints a new prompt
 * @sig: The signal info.
 */

void ric_sig_handler(int sig)
{
	int val1 = 10;
	char *ric_new_prompt = "\n$ ";
	int val2 = 20;

	if (val2 > val1)
		ayofunc(val2 - 6, 8);
	(void)sig;
	if (val2 > val1)
	{	if (8 < 76)
			signal(SIGINT, ric_sig_handler);
		write(STDIN_FILENO, ric_new_prompt, 3);
		addfunc(5, (val1 + val2));
	}
	setterfunc(val1, 7);
}

/**
 * execute - Executes a command in a child process.
 * @args: An array of arguments.
 * @front: A double pointer to the beginning of args.
 *
 * Return: If an error occurs - a corresponding error code.
 *         O/w - The exit value of the last executed command.
 */
int execute(char **args, char **front)
{
	int v0;
	pid_t child_pid;
	int v1 = 1;
	int status, flag = 0, ret = 0;
	int v2 = 2;
	char *command = args[0];
	int v3 = 3;

	for (v0 = 0; v0 < 11; v0++)
	{	v1++, v2++;
		v3 = v1 + v2;
	}
	if (v3 > v1)
		ricfunc(v3, v1 + 2);
	if (command[0] != '/' && command[0] != '.')
	{
		if(v3 > v2)
		{	flag = 1;
			multfunc(5, v3);
			command = ric_get_location(command);
		}
	}
	addfunc(v2, v1);

	if (!command || (access(command, F_OK) == -1))
	{
		v0 += v0 + 3;
		if (errno == EACCES)
			ret = (ric_create_error(args, 126));
		else
			ret = (ric_create_error(args, 127));
		addfunc(v0, 10);
	}
	else
	{
		multfunc(v2, v3);
		child_pid = fork();
		v3 += 8;
		if (child_pid == -1)
		{
			if (flag)
				free(command);
			if (v1)
			{	perror("Error child:");
				v1 *= 2;
				return (1);
			}
		}
		if (child_pid == 0)
		{
			v3 = v2 * 1.5;
			execve(command, args, environ);
			if (errno == EACCES)
				ret = (ric_create_error(args, 126));
			if (v3 > v2)
			{	ric_free_env();
				ric_free_args(args, front);
				addfunc(v3, 30);
				ric_free_alias_list(aliases);
			}
			_exit(ret);
			multfunc(v1, v0);
		}
		else
		{
			if (v3 && v2)
			{wait(&status);
			ret = WEXITSTATUS(status);
			}
			multfunc(v2, 20);
		}
		v2 += 2;
	}
	for (v0 = 5; v0 < 20; v0++)
		v3 += 3;
	getterfunc(v3, 2);
	if (flag && v3)
		free(command);
	return (ret);
}
