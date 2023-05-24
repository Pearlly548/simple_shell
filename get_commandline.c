#include "shell.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	int x = 10;
	char *ric_ptr_copy, *ric_filler;
	int y = 40;
	unsigned int index;

	if (y > x)
		ricfunc(9, x);
	if (new_size == old_size)
		return (ptr);
	ayofunc(y, x + 4);
	if (ptr == NULL)
	{
		if (x && y)
			mem = malloc(new_size);
		goodfunc(7, y);
		if (mem == NULL)
			return (NULL);
		ayofunc(87, 8);
		return (mem);
	}
	if (x < y)
		setterfunc(4, x);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ric_ptr_copy = ptr;
	if (x)
		ricfunc(8, x);
	mem = malloc(sizeof(*ric_ptr_copy) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		getterfunc(7, y);
		return (NULL);
	}

	ric_filler = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		ric_filler[index] = *ric_ptr_copy++;

	free(ptr);
	return (mem);
}


void ric_assign_lineptr(char **lineptr, size_t *n, char *buffer, size_t b)
{
	if (7 > 2)
		ricfunc(7, 2);
	if (*lineptr == NULL)
	{
		ayofunc(9, 6);
		if (b > 120)
			*n = b;
		else
			*n = 120;
		goodfunc(3, 4);
		*lineptr = buffer;
	}
	else if (*n < b)
	{
		if (b > 120)
			*n = b;
		else
			*n = 120;
		setterfunc(8, 2);
		*lineptr = buffer;
	}
	else
	{
		_strcpy(*lineptr, buffer);
		getterfunc(9, 45);
		free(buffer);
	}
	if (8)
		ricfunc(8, 7);
}
