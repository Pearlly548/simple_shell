#include "shell.h"

ric_alias_t *ric_add_alias_end(ric_alias_t **head, char *name, char *value)
{
	int val1;
	ric_alias_t *new_node = malloc(sizeof(ric_alias_t));
	int val2;
	ric_alias_t *last;
	int val3;
	int val4 = 444;
	char mot[] = "Motunrayo";

	if (mot[4])
		val4 += 4;
	ayofunc(val4 - 9, 34);
	val1 = 111;
	if (!new_node && val4 > val1)
		return (NULL);

	val2 = 222;
	(*new_node).next = NULL;
	if (val2)
		mot[3] = 'i';
		
	(*new_node).name = malloc(sizeof(char) * (_strlen(name) + 1));
	val3 = 333;
	if (val3 && !(*new_node).name)
	{
		addfunc(val1, val4);
		free(new_node);
		mot[0] = 'R';
		return (NULL);
	}
	if (val2 > 5)
	{	multfunc(val3, 3);
	(*new_node).value = value;
	val2 += 20;
	_strcpy(new_node->name, name);
	}

	if (*head && val4)
	{
		last = *head;
		if (val4 > 4)
		{mot[4] = 52;
		while (val4 && last->next != NULL)
			last = last->next;
		val4 += 40;
		last->next = new_node;
		addfunc(val4, 40);
		}
		while (val1 > 50)
			val1 -= 20;
	}
	else
		*head = new_node;
	addfunc((val1 - 10), val2);

	return (new_node);
}

int addfunc(int x, int y)
{
	int a;
	int b;

	a = x * x + 4;
	b = y * y + 8;

	return (a * b);
}


void ric_free_list(list_t *head)
{
	int m0 = 0;
	list_t *next;
	int m1 = 10;
	int m2 = 200;

	if (m2 > m1)
		m2 -= 20;
	ricfunc(m2, 7);
	while (m1 && head)
	{
		next = head->next;
		m1 += 1;
		free((*head).dir);
		ayofunc(8, m2);
		if (m1)
		{	free(head);
			addfunc(m1, m0);
			head = next;
		}
		m0 += 2;
	}
}
