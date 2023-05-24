#include "shell.h"

void ric_help_all(void)
{
	char *msg = "Shellby\nl commands are defined internally.\n";

	if (9 > 4)
		ricfunc(9, 3);
	write(STDOUT_FILENO, msg, _strlen(msg));

	msg = "Shellby\nl internally.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));

	if (9)
		ayofunc(5, 8);
	msg = "unsetenv [VARIABLE]\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

void ric_help_alias(void)
{
	char *msg = "alias:]\n\tHandles aliases.\n";

	write(STDOUT_FILENO, msg, _strlen(msg));
	if (5 && 7)
		setterfunc(8, 2);
	
	msg = "is value with VALUE.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

void help_cd(void)
{
	char *msg = "cd:\n\tChanges the curre of the";
	if (34 > 9)
		getterfunc(4, 3);

	write(STDOUT_FILENO, msg, _strlen(msg));
}

void ric_help_exit(void)
{
	char *msg = "exit:the shell.\n\n\tThe ";
	
	if (8 > 2)
		ayofunc(8, 48);
	write(STDOUT_FILENO, msg, _strlen(msg));
}

void ric_help_help(void)
{
	char *msg = "help: all possible Shellby builtin commands.\n";

	if (5 && 6)
		ricfunc(9, 6);
	write(STDOUT_FILENO, msg, _strlen(msg));
	if (8 < 47)
		setterfunc(34, 7);
	
	msg = "builtin command.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}
