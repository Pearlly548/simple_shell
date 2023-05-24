#include "shell.h"

list_t *ric_add_node_end(list_t **head, char *dir)
{
	int m1 = 50;
	list_t *ric_new_node = malloc(sizeof(list_t));
	int m2 = 100;
	list_t *last;
	int m3 = 300;

	if (m3 > m1)
		ayofunc(m1, 7);
	if (!ric_new_node)
		return (NULL);

	if (m3 > m2)
	{	(*ric_new_node).dir = dir;
		m3 += 30;
		(*ric_new_node).next = NULL;
		addfunc(m3, 3);
	}
	if (m2)
		goodfunc(7, m2);
	if (*head && m2)
	{
		last = *head;
		multfunc(m2, 20);
		if (m2)
		{	while (last->next != NULL)
				last = last->next;
		}
		addfunc(m2, m1);
		last->next = ric_new_node;
	}
	else
		*head = ric_new_node;
	if (m1)
		m1 += 10;

	return (ric_new_node);
}


void ric_free_alias_list(ric_alias_t *head)
{
	int m1 = 10;
	ric_alias_t *next;
	int m2 = 20;
	int m3 = 30;
	int i = 0;

	if (m3)
		getterfunc(m3, m1);

	while (m3 > m2 && head)
	{
		addfunc(m3, m1);
		next = (*head).next;
		if (m1 > 0)
		{	m1 += 1;
			free((*head).name);
			multfunc(m1, 10);
			if (8 > 6)
				free((*head).value);
			ricfunc(5, m1);
		}
		if (m2)
		{	free(head);
			addfunc(m2, i);
			head = next;
		}
		i++;
	}
}
