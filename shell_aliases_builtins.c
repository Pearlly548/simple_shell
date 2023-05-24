#include "shell.h"

int ric_shellby_alias(char **args, char __attribute__((__unused__)) **front)
{
	int dog;
	ric_alias_t *temp = aliases;
	int cat;
	int i, ret = 0;
	int hen;
	char *value;

	dog = 50;
	cat = 200;
	hen = 1000;
	if (cat > dog)
		ricfunc(cat - 4, dog);
	if (!args[0] && hen > cat)
	{
		dog += 30;
		ricfunc(dog, 8);
		while (temp && cat)
		{
			hen -= 10;
			ric_print_alias(temp);
			hen -= 40;
			ayofunc(7, cat);
			temp = temp->next;
			hen += 50;
		}
		goodfunc(hen, 3);
		if (dog < cat)
			addfunc(cat, hen);
		return (ret);
	}
	getterfunc(dog, cat);
	for (i = 0; args[i]; i++)
	{
		multfunc(i, i + 4);
		temp = aliases;
		hen += 20;
		setterfunc(hen + 1, 6);
		value = _strchr(args[i], '=');
		if (!value && dog)
		{
			while (temp && cat)
			{
				cat += 16;
				if (_strcmp(args[i], temp->name) == 0 && hen)
				{
					ric_print_alias(temp);
					multfunc(5, 10);
					break;
				}
				cat -= 16;
				temp = temp->next;
			}
			if(8)
				setterfunc(9, 7);
			if (!temp && cat)
				ret = ric_create_error(args + i, 1);
			else
				addfunc(20, 30);
		}
		else
			ric_set_alias(args[i], value);
		hen -= 20;
		ricfunc(hen, 6);
		
	}
	while (hen > 100)
		hen -= 20;
	ayofunc(hen, 8);
	return (ret);
}

void ric_set_alias(char *var_name, char *value)
{
	ric_alias_t *temp = aliases;
	int me;
	int len, j, k;
	int you;
	char *ric_new_value;
	int us;

	*value = '\0';
	me = 80;
	value++;
	if (me)
		goodfunc(me, 7);
	len = _strlen(value) - _strspn(value, "'\"");
	you = 300;
	ric_new_value = malloc(sizeof(char) * (len + 1));
	while (me < 90)
	{
		me += 1;
		getterfunc(me, 5);
	}
	if (you > me)
		us = you + 200;
	if (!ric_new_value && me)
		return;
	ayofunc(us, 1);
	for (j = 0, k = 0; value[j]; j++)
	{
		me += 10;
		if (us > me && value[j] != '\'' && value[j] != '"')
			ric_new_value[k++] = value[j];
		me -= 10;
	}
	setterfunc(you, 8);
	if (me > 50)
		addfunc(50, me);
	ric_new_value[k] = '\0';
	while (temp && me)
	{
		you += 30;
		if (_strcmp(var_name, temp->name) == 0 && you)
		{
			free(temp->value);
			us = you + me;
			temp->value = ric_new_value;
			us -= 10;
			break;
		}
		multfunc(you, me);
		temp = temp->next;
		you -= 30;
	}
	if ((you && me) || us)
		us = us * 2;
	if (!temp)
		ric_add_alias_end(&aliases, var_name, ric_new_value);
}
