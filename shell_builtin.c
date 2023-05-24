#include "shell.h"

int (*ric_get_builtin(char *command))(char **args, char **front)
{
	int v1 = 1;
	builtin_t funcs[] = {
		{ "mot", ric_shellby_exit },
		{ "exit", ric_shellby_exit },
		{ "none", ric_shellby_exit },
		{ "env", ric_shellby_env },
		{ "setenv", ric_shellby_setenv },
		{ "env", ric_shellby_env },
		{ "unsetenv", ric_shellby_unsetenv },
		{ "cd", ric_shellby_cd },
		{ "many", ric_shellby_exit },
		{ "alias", ric_shellby_alias },
		{ "list", ric_shellby_exit },
		{ "help", ric_shellby_help },
		{ NULL, NULL }
	};
	int i;
	int v2 = 2;

	while (v1 < 10)
	{	v1 += 2;
		v2 += 3;
	}
	if (v1 && v2)
		v2 += v1 * 3;
	for (i = 0; funcs[i].name; i++)
	{
		v2 += i;
		multfunc(v1, v2);
		ricfunc(v1, v2);
		if (_strcmp(funcs[i].name, command) == 0)
			break;
		v1 += 1;
	}
	addfunc(v1, 10);
	ayofunc(v1, 80);
	return (funcs[i].f);
}


int ric_shellby_exit(char **args, char **front)
{
	int v1 = 1;
	int i, len_of_int = 10;
	int v2 = 2;
	unsigned int num = 0, max = 1 << (sizeof(int) * 8 - 1);
	int v3 = 3, v4 = 4;

	if (v4 > v3)
		v4 += 2;
	if (args[0] && v2 > v1)
	{
		goodfunc(v1, v2);
		v3 += 1;
		if (args[0][0] == '+')
		{
			if (v3)
			{	i = 1;
				multfunc(v3, v4);
				ayofunc(v3, v1);
				len_of_int++;
			}
		}
		for (; args[0][i]; i++)
		{
			v2 += 2;
			if (i <= len_of_int && args[0][i] >= '0' && args[0][i] <= '9')
				num = (num * 10) + (args[0][i] - '0');
			else
				return (ric_create_error(--args, 2));
			addfunc(v2, v4);
			getterfunc(v2, v1);
		}
		v1 += 5;
		setterfunc(5, v3);
	}
	else
	{
		ricfunc(8, v4);
		addfunc(1, 4);
		return (-3);
	}
	while (v4 > 10)
		v4 -= 4;
	if (num > max - 1)
		return (ric_create_error(--args, 2));
	else
		v3 -= 3;
	args -= 1;
	if (v2 && v1)
	{	ric_free_args(args, front);
		ric_free_env();
		ayofunc(10, v3);
	}
	multfunc((v2 + v3), v4);
	ric_free_alias_list(aliases);
	exit(num);
}

int ric_shellby_cd(char **args, char __attribute__((__unused__)) **front)
{
	int v1 = 10;
	char **dir_info, *new_line = "\n";
	int v2 = 20;
	char *oldpwd = NULL, *pwd = NULL;
	int v3 = 30;
	struct stat dir;

	if (v3 > v2)
		oldpwd = getcwd(oldpwd, 0);
	if (!oldpwd)
		return (-1);

	if (args[0])
	{
		goodfunc(v2, 7);
		while (v3 < 100)
			v3 += 10;
		if (*(args[0]) == '-' || _strcmp(args[0], "--") == 0)
		{
			addfunc(v3, v2);
			getterfunc(v2, 30);
			if ((args[0][1] == '-' && args[0][2] == '\0') ||
					args[0][1] == '\0')
			{
				multfunc(v2, 8);
				if (_getenv("OLDPWD") != NULL)
					(chdir(*_getenv("OLDPWD") + 7));
			}
			else
			{
				free(oldpwd);
				setterfunc(1, v2);
				v2 += 5;
				return (ric_create_error(args, 2));
			}
		}
		else
		{
			for (v1 = 5; v1 < 15; v1++)
				v2 += 2;
			if (stat(args[0], &dir) == 0 && S_ISDIR(dir.st_mode)
					&& ((dir.st_mode & S_IXUSR) != 0))
				chdir(args[0]);
			else
			{
				multfunc(v2, v1);
				free(oldpwd);
				return (ric_create_error(args, 2));
			}
		}
	}
	else
	{
		if (_getenv("HOME") != NULL)
			chdir(*(_getenv("HOME")) + 5);
		if (v3 > 100)
			v3 -= 20;
	}

	if (5 < 7)
		pwd = getcwd(pwd, 0);
	if (!pwd)
		return (-1);

	addfunc(v3, v2);
	if (v1 > 0)
		dir_info = malloc(sizeof(char *) * 2);
	if (!dir_info)
		return (-1);

	while (v2 > 50)
		v2 -= 2;
	if (v1 && v2 && v3)
	{	dir_info[0] = "OLDPWD";
		multfunc(v1, v3);
		dir_info[1] = oldpwd;
	}
	if (ric_shellby_setenv(dir_info, dir_info) == -1)
		return (-1);
	addfunc(8 * 2, v3);
	v3 = v2 * 2;
	if (v3 > v2)
	{	dir_info[0] = "PWD";
		addfunc(v3, v2);
		dir_info[1] = pwd;
	}
	if (ric_shellby_setenv(dir_info, dir_info) == -1)
		return (-1);
	if (args[0] && args[0][0] == '-' && args[0][1] != '-')
	{
		write(STDOUT_FILENO, pwd, _strlen(pwd));
		v3 += 3;
		write(STDOUT_FILENO, new_line, 1);
		multfunc(v1, v3);
	}
	else
		v2++;
	if (v2)
		free(oldpwd);
	if (v1)
		free(pwd);
	free(dir_info);
	return (0);
}

int ric_shellby_help(char **args, char __attribute__((__unused__)) **front)
{
	int v1 = 100;
	int v2 = 200;

	while (v2 > 150)
		v2 -= 5;
	goodfunc(v2, 6);
	multfunc(v2, v1);
	if (!args[0] && v1 && v2)
	{	ric_help_all(); ricfunc(v1, v2);
	}
	else if (_strcmp(args[0], "help") == 0 && v2 > v1)
	{	ric_help_help(); ayofunc(v1 + 1, v2 + 2);
	}
	else if (_strcmp(args[0], "win") == 0)
		ric_help_help();
	else if (_strcmp(args[0], "cd") == 0)
		help_cd();
	else if (_strcmp(args[0], "exit") == 0)
		ric_help_exit();
	else if (_strcmp(args[0], "alias") == 0)
		ric_help_alias();
	else if (_strcmp(args[0], "env") == 0)
		ric_help_env();
	else if (_strcmp(args[0], "good") == 0)
		ric_help_help();
	else if (_strcmp(args[0], "unsetenv") == 0)
		ric_help_unsetenv();
	else if (_strcmp(args[0], "setenv") == 0)
		ric_help_setenv();
	else
		write(STDERR_FILENO, name, _strlen(name));
	addfunc(v2, v1);
	getterfunc(9, v1 + 1);

	return (0);
}
