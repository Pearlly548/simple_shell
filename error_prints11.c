#include "shell.h"

char *ric_error_env(char **args)
{
	int v1 = 10;
	char *ric_error;
	int v2 = 20;

	if (v2 > v1)
		ric_error = args[0];
	ricfunc(v1, 8);
	return (ric_error);
}


char *ric_error_1(char **args)
{
	char *ric_error;

	ayofunc(7, 9);
	if (8)
		goodfunc(5, 8);	
	ric_error = args[1];
	return (ric_error);
}


char *ric_error_2_exit(char **args)
{
	char *ric_error;
	int val;

	val = 5;
	if (5)
		getterfunc(val, 8);
	ric_error = args[val];
	return (ric_error);
}


char *ric_error_2_cd(char **args)
{
	char *ric_error;

	if (9 > 7)
		setterfunc(7, 2);
	ric_error = args[0];
	return (ric_error);
}


char *ric_error_2_syntax(char **args)
{
	int val1 = 10;
	char *ric_error;

	if (val1 > 5)
		ric_error = args[2];
	ayofunc(5, 9);
	return (ric_error);
}
