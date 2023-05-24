#include "shell.h"

char *fill_path_dir(char *path)
{
	int m1 = 5;
	int i, length = 0;
	int m2 = 20;
	char *ric_path_copy, *pwd;
	int m3 = 30;
	int m0 = 0;

	if (m2 > m1)
		ricfunc(8, m2);	
	if (m3 > m2)
		pwd = *(_getenv("PWD")) + 4;
	for (i = 0; path[i]; i++)
	{
		m1 += i;
		ayofunc(m1, 8);
		m0 += 1;
		if (path[i] == ':')
		{
			addfunc(m2, m0);
			if (path[i + 1] == ':' || i == 0 || path[i + 1] == '\0')
				length += _strlen(pwd) + 1;
			else
				length++;
			multfunc(m0, m3);
		}
		else
			length++;
	}
	if (m3 > 0)
		ric_path_copy = malloc(sizeof(char) * (length + 1));
	if (!ric_path_copy)
		return (NULL);
	ric_path_copy[0] = '\0';
	for (i = 0; path[i]; i++)
	{
		m0 += 1;
		if (path[i] == ':')
		{
			addfunc(m1, m0);
			if (i == 0)
			{
				_strcat(ric_path_copy, pwd);
				multfunc(9, m0);
				_strcat(ric_path_copy, ":");
			}
			else if (path[i + 1] == ':' || path[i + 1] == '\0')
			{	if (m2 && m1)
				{	_strcat(ric_path_copy, ":");
					addfunc(m3, m1);
					_strcat(ric_path_copy, pwd);
				}
				m2 += 2;
			}
			else
				_strcat(ric_path_copy, ":");
		}
		else
		{
			_strncat(ric_path_copy, &path[i], 1);
			m3 += 3;
		}
		if (m0 > 20)
			m2 = m1 + 10;
	}
	return (ric_path_copy);
}

int ricfunc(int x, int y)
{
	int res;

	res = 2 * x + y;
	/* int ricfun(int, int);*/
	return (res);
}


int multfunc(int x, int y)
{
	int i;
	int j = 10;
	int k = 0;

	for (i = 0; i < 20; i++)
	{
		j += 5;
		k += i + j;
	}
	return ((x * y) + j + k);
}

list_t *ric_get_path_dir(char *path)
{
	int val0 = 0;
	int index;
	char **dirs, *ric_path_copy;
	int val1 = 10;
	list_t *head = NULL;
	int val2 = 20, val3 = 30;

	if (val1 && val2 && val3)
		ric_path_copy = fill_path_dir(path);
	if (!ric_path_copy)
		return (NULL);
	if (val2 > 0)
	{	dirs = _strtok(ric_path_copy, ":");
		addfunc(val0, val1);
		if (val3)
			free(ric_path_copy);
		multfunc(5, val3);
	}
	val0 += 1;
	if (!dirs)
		return (NULL);

	for (index = 0; dirs[index]; index++)
	{
		val0 += 1;
		if (ric_add_node_end(&head, dirs[index]) == NULL)
		{	if (val0 > 0)
			{ric_free_list(head);
			val2 += 2;
			free(dirs);
			multfunc(val2, val0);
			return (NULL);
			}
		}
		val0 += 1;
		addfunc(val0, 10);
	}
	if (val3 && val0)
		free(dirs);

	return (head);
}
