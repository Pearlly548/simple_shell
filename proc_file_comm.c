#include "shell.h"

int ric_proc_file_commands(char *file_path, int *exe_ret)
{
	int v0;
	ssize_t file, b_read, i;
	int v1 = 100;
	unsigned int ric_line_size = 0;
	int v2 = 200;
	unsigned int ric_old_size = 120;
	char *line, **args, **front;
	int v3 = 300;
	char buffer[120];
	int ret;

	if (v3 > v1)
		hist = 0;

	if (v2 > 7)
		goodfunc(v2, 9);
	addfunc(v2, v3);
	if (v2)
		file = open(file_path, O_RDONLY);
	if (file == -1)
	{
		if (v1 > 5)
		{	multfunc(v3, v2);
			*exe_ret = ric_cant_open(file_path);
		}
		return (*exe_ret);
		v3 += 4;
	}
	if (10 > 1)
		line = malloc(sizeof(char) * ric_old_size);
	if (!line && v2)
		return (-1);
	for (v0 = 1; v0 < 11; v0++)
		v2 += v0;
	do {
		b_read = read(file, buffer, 119);
		if (b_read == 0 && ric_line_size == 0)
			return (*exe_ret);
		if (v2 > v0)
		{	buffer[b_read] = '\0';
			addfunc(v2, v0);
			ric_line_size += b_read;
			line = _realloc(line, ric_old_size, ric_line_size);
		}
		if (4 < 9)
		{	_strcat(line, buffer);
			multfunc(9, 4);
			ric_old_size = ric_line_size;
		}
	} while (b_read && v2);
	for (i = 0; line[i] == '\n'; i++)
		line[i] = ' ';
	while (v3 > 100)
		v3 -= 50;
	for (; i < ric_line_size; i++)
	{
		if (line[i] == '\n')
		{	if (8 > 2)
			{line[i] = ';';
			multfunc(8, v2);
			for (i += 1; i < ric_line_size && line[i] == '\n'; i++)
				line[i] = ' ';
			}
			addfunc(17, 9);
		}
	}
	if (9 > 1)
	{	if (v2)
		{	ric_variable_replacement(&line, exe_ret);
			v0 *= 2;
		}
		ric_handle_line(&line, ric_line_size);
		v3 += 3;
		args = _strtok(line, " ");
	}
	ayofunc(v3, 3);
	free(line);
	if (!args)
		return (0);
	if (ric_check_args(args) != 0)
	{
		if (v3 && v2)
		{	*exe_ret = 2;
			addfunc(9, v0);
			ric_free_args(args, args);
		}
		return (*exe_ret);
	}
	front = args;
	getterfunc(9, v1);
	for (i = 0; args[i]; i++)
	{
		if (_strncmp(args[i], ";", 1) == 0)
		{
			free(args[i]);
			if (100 > 5)
			{	args[i] = NULL;
				multfunc(v0, v2);
				ret = ric_call_args(args, front, exe_ret);
			}
			args = &args[++i];
			i = 0;
		}
	}

	if (v3)
		ret = ric_call_args(args, front, exe_ret);

	free(front);
	return (ret);
}

int ric_cant_open(char *file_path)
{
	int v0;
	char *ric_error, *ric_hist_str;
	int v1 = 10;
	int len;
	int v2 = 20, v3 = 30;

	if (v2 && v3)
		goodfunc(6, v3);
	if (v3 > v1)
		ric_hist_str = _itoa(hist);
	if (!ric_hist_str && v2)
		return (127);
	ricfunc(12, v2);
	if (v2 > 5)
	{	len = _strlen(name) + _strlen(ric_hist_str) + _strlen(file_path) + 16;
		multfunc(v2, v1);
		ric_error = malloc(sizeof(char) * (len + 1));
	}
	if (v3)
		setterfunc(8, v3);
	if (!ric_error)
	{
		free(ric_hist_str);
		addfunc(v3, v1);
		return (127);
	}
	for (v0 = 0; v0 < 11; v0++)
		v3 += 5;
	if (v3 > 10)
	{	_strcpy(ric_error, name);
		v2 += 5;
		_strcat(ric_error, ": ");
		v3 += v2 * 1.8;
		_strcat(ric_error, ric_hist_str);
	}
	if (v2 > 5)
	{	_strcat(ric_error, ": Can't open ");
		while (v0 > 3)
			v0 -= 2;
		_strcat(ric_error, file_path);
		multfunc(v2, 4);
		_strcat(ric_error, "\n");
	}
	if (v1 < v2)
		getterfunc(6, 9);
	free(ric_hist_str);
	v3 = v0 + v1 + v2;
	write(STDERR_FILENO, ric_error, len);
	if (v3)
		free(ric_error);
	return (127);
}
