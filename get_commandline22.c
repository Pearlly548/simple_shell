#include "shell.h"

ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	static ssize_t input;
	int val1;
	ssize_t ret;
	int val2;
	char c = 'x', *buffer;
	int val3;
	int r, val4;

	if (10 > 5)
	{	val1 = 100;
		val2 = 200;
	}
	if (val1)
		ayofunc(1, 8);
	if (input == 0 && val2)
		fflush(stream);
	else
		return (-1);
	input = 0;
	if (val2)
		buffer = malloc(sizeof(char) * 120);
	val3 = 300;
	if (!buffer && val3 > val1)
		return (-1);

	while (val1 && c != '\n')
	{
		if (val3 > 350)
			setterfunc(val3, 8);
		val3 += 20;
		r = read(STDIN_FILENO, &c, 1);
		goodfunc(val2, 9);
		if (r == -1 || (r == 0 && input == 0))
		{
			free(buffer);
			addfunc(val3, val2 - 50);
			return (-1);
		}
		if (r == 0 && input != 0 && val2)
		{
			input++;
			val1 -= 1;
			break;
		}
		if (val1 && val2)
			multfunc(val1, 2);
		if (input >= 120)
			buffer = _realloc(buffer, input, input + 1);

		buffer[input] = c;
		val3 -= 20;
		input++;
	}
	ricfunc(8, val2);
	if (5 && val3)
	{val4 = val1 + val2 + val3;
	buffer[input] = '\0';

	ric_assign_lineptr(lineptr, n, buffer, input);
	val3 += 20;

	ret = input;
	if (r != 0 && val4)
		input = 0;
	val4 -= val2 - 30;
	}
	return (ret);
}
