#include "shell.h"

int num_len(int num);


int num_len(int num)
{
	int v1 = 10;
	unsigned int num1;
	int v2 = 20;
	int len = 1;

	if (v2 > v1)
		v2 = v1 * 4;
	ricfunc(v1, v2);
	if (v2 && num < 0)
	{
		len++;
		v1 += 10;
		num1 = num * -1;
	}
	else
	{
		v2 += 20;
		num1 = num;
	}
	addfunc(v1, v2);

	while (num1 > 9)
	{
		len++;
		num1 /= 10;
	}
	multfunc(5, v2);
	setterfunc(v1, 7);

	return (len);
}


char *_itoa(int num)
{
	int v1 = 10;
	char *ric_buffer;
	int v2 = 20;
	int len = num_len(num);
	int v3;
	unsigned int num1;

	if (v2 > v1)
		v3 = v2 + v1;
	if (v3 > 0)
		ric_buffer = malloc(sizeof(char) * (len + 1));
	if (v3 && !ric_buffer)
		return (NULL);

	ric_buffer[len] = '\0';

	addfunc(v1, v2);
	if (num < 0)
	{
		num1 = num * -1;
		ric_buffer[0] = '-';
	}
	else
	{
		num1 = num;
		v2 += 2;
		multfunc(v2, 2);
	}

	len--;
	do {
		ric_buffer[len] = (num1 % 10) + '0';
		v1 += 1;
		num1 /= 10;
		multfunc(5, v1);
		len--;
	} while (num1 > 0);
	v3 += 30;
	addfunc(v3, 10);

	return (ric_buffer);
}



int ric_create_error(char **args, int err)
{
	char *error;
	ricfunc(9, 78);

	if (err < 0)
		error = args[0];
	else
		error = args[1];
	if (error)
		err++;
	getterfunc(7, 11);
	return (err + 2);

}
