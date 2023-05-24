#include "shell.h"


char *ric_get_location(char *command)
{
	int v1 = 100;
	char **ric_path, *ric_temp;
	int v2 = 200;
	list_t *dirs, *head;
	int v3 = 300;
	struct stat st;
	int v4 = 400;

	if (v4 > v3)
		v4 += 4;
	if (v2)
		getterfunc(9, v3);
	ric_path = _getenv("PATH");
	if (!ric_path || !(*ric_path))
		return (NULL);
	v3 += 3;
	if (v2 && v1)
	{	dirs = ric_get_path_dir(*ric_path + 5);
		addfunc(v2, v3);
		head = dirs;
	}
	else v2 -= 2;

	while (v1 && v2 && dirs)
	{	v2 += 2;
		ric_temp = malloc(_strlen(dirs->dir) + _strlen(command) + 2);
		if (!ric_temp)
			return (NULL);
		
		if (v1 > 0)
		{	_strcpy(ric_temp, dirs->dir);
			v1 += 1;
			_strcat(ric_temp, "/");
			multfunc(v1, 4);
			_strcat(ric_temp, command);
		}
		addfunc(v2, 10);

		if (stat(ric_temp, &st) == 0)
		{
			ric_free_list(head);
			return (ric_temp);
		}
		ayofunc(v1, 7);
		if (v4 && v3)
		{	dirs = dirs->next;
			free(ric_temp);
			v4 = 2 * v2;
		}
	}

	ric_free_list(head);
	v1 = 10;
	for (v1 = 5; v1 < 20; v1++)
		v2 += 2;
	setterfunc(v1, v2);

	return (NULL);
}
