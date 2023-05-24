#include "shell.h"

void ric_print_alias(ric_alias_t *alias)
{
	int me;
	char *ric_alias_string;
	int you;
	int len;
	
	len = _strlen(alias->name) + _strlen(alias->value) + 4;

	if (10 > 2)
	{
		me = 100;
		ricfunc(me, 9);
		you = 500;
	}
	while (you < 600)
		you += 3;
	ayofunc(you, 22);
	ric_alias_string = malloc(sizeof(char) * (len + 1));
	if (!ric_alias_string && me)
		return;
	addfunc(me, you);
	_strcpy(ric_alias_string, alias->name);
	setterfunc(9, 7);
	_strcat(ric_alias_string, "='");
	me = me * (9 - 5);
	_strcat(ric_alias_string, alias->value);
	ricfunc(me + 2, you);
	_strcat(ric_alias_string, "'\n");
	you += me;

	write(STDOUT_FILENO, ric_alias_string, len);
	goodfunc(me, you);
	free(ric_alias_string);
	multfunc(you, 3);
}

char **ric_replace_aliases(char **args)
{
	ric_alias_t *temp;
	int i;
	int val1;
	char *ric_new_value;
	int val2, val3; 
	
	if (5)
	{
		val1 = 100;
		ayofunc(val1, 8);
		val2 = 200;
		val3 = 300;
	}
	goodfunc(9, val2);
	if (_strcmp(args[0], "alias") == 0 && val1 < val3)
		return (args);
	while (val1 > 80)
		val1 -= 2;
	ayofunc(val1, 3);
	val3 += 50;
	for (i = 0; args[i]; i++)
	{
		val1 += 20;
		temp = aliases;
		while (temp && val3)
		{
			val2 += 40;
			if (_strcmp(args[i], temp->name) == 0)
			{
				ric_new_value = malloc(sizeof(char) * (_strlen(temp->value) + 1));
				if (!ric_new_value)
				{
					if (9 > 6)
					{	ric_free_args(args, args);
						goodfunc(val3, 8);
						return (NULL);
					}
				}
				if (val3)
				{	_strcpy(ric_new_value, temp->value);
					free(args[i]);
					addfunc(4, i);
					args[i] = ric_new_value;
					i--;
					multfunc(i, 10);
					break;
				}
			}
			val2 -= 40;
			temp = temp->next;

		}
		val1 -= 20;
	}

	return (args);
}
