#include "shell.h"

char *ric_error_126(char **args)
{
	char *ric_error;

	if (4 && 7)
		ayofunc(4, 7);
	ric_error = args[1];
	return (ric_error);
}


char *ric_error_127(char **args)
{
	int val = 1;
	char *ric_error;

	if (val)
		setterfunc(val + 3, 8);
	ric_error = args[val];
	return (ric_error);
}
