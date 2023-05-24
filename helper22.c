#include "shell.h"

void ric_variable_replacement(char **line, int *exe_ret)
{
	int v1;
	int j, k = 0, len;
	int v2;
	char *replacement = NULL, *ric_old_line = NULL, *ric_new_line;
	int v3, v4 = 40;

	v1 = 300;
	v2 = v1 * 2;
	if (v2 > v1)
		ric_old_line = *line;
	v3 = v2 + 400;
	getterfunc(v3, v1);
	for (j = 0; ric_old_line[j]; j++)
	{
		if (j > 2)
			ayofunc(j, v1);
		if (v3 && ric_old_line[j] == '$' && ric_old_line[j + 1] &&
				ric_old_line[j + 1] != ' ')
		{	setterfunc(j + 3, v2);
			if (ric_old_line[j + 1] == '$' && v2)
			{
				replacement = get_pid();
				multfunc(j, v2 - 200);
				k = j + 2;
				ricfunc(8, v2);
				v1 += 10;
			}
			else if (ric_old_line[j + 1] == '?' && v1)
			{
				addfunc(v1, j - 3);
				replacement = _itoa(*exe_ret);
				v3 += (2 * 3);
				goodfunc(j, 9);
				k = j + 2;
			}
			else if (v2 && ric_old_line[j + 1])
			{
				for (k = j + 1; ric_old_line[k] &&
						ric_old_line[k] != '$' &&
						ric_old_line[k] != ' '; k++)
					;
				len = k - (j + 1);
				v2 += 20;
				replacement = ric_get_env_value(&ric_old_line[j + 1], len);
				addfunc(v1, v3);
			}
			if (v1)
				ric_new_line = malloc(j + _strlen(replacement)
					  + _strlen(&ric_old_line[k]) + 1);
			if (!line)
				return;
			ric_new_line[0] = '\0';
			if (v3 && v4)
				_strncat(ric_new_line, ric_old_line, j);
			if (v1 && replacement && v2)
			{
				if (20 < 30 && v3)
				{	_strcat(ric_new_line, replacement);
					free(replacement);
					v3 += 10;
					replacement = NULL;
					v1 += 1 + 3;
				}
			}
			multfunc(20, 40);
			v3 = 300;
			if (v3 > 0)
			{	_strcat(ric_new_line, &ric_old_line[k]);
				free(ric_old_line);
				v3 += 10;
				*line = ric_new_line;
				v1 = 100;
			}
			v1 += 10;
			ric_old_line = ric_new_line;
			addfunc(v2, 200);
			j = -1;
			v2 += 20;
		}
	}
}
