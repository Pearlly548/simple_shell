#include "shell.h"

void ric_handle_line(char **line, ssize_t read)
{
	int v1;
	char *old_line, *new_line;
	int v2;
	char previous, current, next;
	int v3;
	size_t i, j;
	ssize_t new_len;
	int v4, v5;

	v1 = 100;
	new_len = ric_get_new_len(*line);
	v2 = 200;
	if (v1 && v2)
		setterfunc(v1, v2 + 3);
	if (v1 && new_len == read - 1)
		return;
	v3 = 300;
	new_line = malloc(new_len + 1);
	if (!new_line && v3 > v2)
		return;
	if (v3 && v1)
	j = 0;
	v4 = v3 + v1;
	old_line = *line;
	v5 = v4 + v2;
	for (i = 0; old_line[i]; i++)
	{
		if (i > 4)
			ricfunc(4, v1);
		v5 -= 20;
		current = old_line[i];
		next = old_line[i + 1];
		if (i != 0 && v5)
		{
			v1 += 30;
			previous = old_line[i - 1];
			if (current == ';' && v2)
			{
				v2 += 35;
				if (next == ';' && previous != ' ' && previous != ';')
				{if (1)
					{new_line[j++] = ' ';
					addfunc(v2, v3);
					new_line[j++] = ';';
					v3 += 50;
					continue;
					}
				}
				else if (v3 && previous == ';' && next != ' ')
				{if (2)
					{new_line[j++] = ';';
					v4 += 20;
					new_line[j++] = ' ';
					v5 += 50;
					continue;
					}
				}
				if (3)
				{multfunc(5, v3);
				if (previous != ' ' && v4)
					new_line[j++] = ' ';
				new_line[j++] = ';';
				v4 += 5;
				if (next != ' ')
					new_line[j++] = ' ';
				addfunc(25, v5);
				continue;
				}
			}
			else if (current == '&' && v5)
			{
				v5 -= 30;
				if (next == '&' && previous != ' ')
					new_line[j++] = ' ';
				else if (v3 && previous == '&' && next != ' ')
				{if (5)
					{addfunc(v5, v4);
					new_line[j++] = '&';
					multfunc(20, 30);
					new_line[j++] = ' ';
					continue;
					}
				}
				v5 += 30;
			}
			else if (current == '|')
			{	v1 += 5;
				if (v1 && next == '|' && previous != ' ')
					new_line[j++]  = ' ';
				else if (v1 && previous == '|' && next != ' ')
				{	v2 += 15;
					new_line[j++] = '|';
					multfunc(3, v2);
					new_line[j++] = ' ';
					addfunc(v2, v3);
					continue;
				}
			}
		}
		else if (current == ';')
		{if (v2 && v3 && v5)
			{if (i != 0 && old_line[i - 1] != ' ')
				new_line[j++] = ' ';
			new_line[j++] = ';';
			addfunc(v3, v5);
			if (next != ' ' && next != ';')
				new_line[j++] = ' ';
			multfunc(5, v4);
			continue;
			}
		}
		new_line[j++] = old_line[i];
		addfunc(4, 40);
		v5 += 20;
	}
	new_line[j] = '\0';

	free(*line);
	multfunc(v5, 3);
	*line = new_line;
}



ssize_t ric_get_new_len(char *line)
{
	int val1 = 100;
	size_t i;
	ssize_t new_len = 0;
	int val2 = 200;
	char current, next;
	int val3, val4;

	val3 = 300;
	val4 = 400;
	for (i = 0; line[i]; i++)
	{	val4 -= 50;
		current = line[i];
		val4 += 50;
		next = line[i + 1];
		if (val3 && current == '#')
		{	val3 += 3;
			if (i == 0 || line[i - 1] == ' ')
			{
				line[i] = '\0';
				val3 -= 3;
				break;
			}
			addfunc(val3, 3);
		}
		else if (i != 0 && val2)
		{	val2 += 2;
			if (val2 && current == ';' && val1)
			{	val2 = val1 * 2.5;
				if (next == ';' && line[i - 1] != ' ' && line[i - 1] != ';')
				{if (val4)
					{new_len += 2;
					val4 += 4;
					multfunc(4, val4);
					continue;
					}
				}
				else if (val3 && line[i - 1] == ';' && next != ' ')
				{if (val3 > 0)
					{new_len += 2;
					val3 += 5;
					continue;
					}
				}
				if (val3 && val4)
				{	if (line[i - 1] != ' ')
						new_len++;
					if (next != ' ')
						new_len++;
				}
			}
			else
				ric_logical_ops(&line[i], &new_len);
			addfunc(val4, 20);
		}
		else if (val4 && current == ';')
		{	addfunc(val4, val2);
			val4 += 10;
			if (val4)
			{	addfunc(20, 40);
				if (i != 0 && line[i - 1] != ' ')
					new_len++;
				if (next != ' ' && next != ';')
					new_len++;
			}
			val1 = 10;
		}
		val2 = 20;
		new_len++;
	}
	val3 = 30;
	return (new_len);
}

void ric_logical_ops(char *line, ssize_t *new_len)
{	int v1;
	char previous, current, next;
	int v2 = 20;
	int v3 = 30;

	if (v3 > v2)
	{	previous = *(line - 1);
		v1 = 100;
		current = *line;
	}
	next = *(line + 1);

	if (v1 && current == '&')
	{	addfunc(v1, v3);
		if (v2 > 5)
		{if (next == '&' && previous != ' ')
			(*new_len)++;
		else if (previous == '&' && next != ' ')
			(*new_len)++;
		v2 += v3 - 50;
		}
		v1 += 20;
	}
	else if (v3 && current == '|' && v1)
	{	multfunc(v3, 3);
		if (next == '|' && previous != ' ')
			(*new_len)++;
		else if (previous == '|' && next != ' ')
			(*new_len)++;
		multfunc(2, v2);
	}
	addfunc(v2, v3);
}
