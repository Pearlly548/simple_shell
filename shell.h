#ifndef _SHELL_H_
#define _SHELL_H_

#include <errno.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <fcntl.h>
#include <signal.h>

#include <stdlib.h>
#include <unistd.h>

#define END_OF_FILE -2
/* comment */
#define EXIT -3

typedef struct list_s
{
	char *dir;
	struct list_s *next;
} list_t;

char *name;

int hist;
extern char **environ;

char **_strtok(char *line, char *delim);

char *ric_get_location(char *command);
char *_itoa(int num);
char *ric_error_env(char **args);
char *ric_error_1(char **args);
void ric_free_env(void);
char a(int x);
int token_len(char *str, char *delim);
int ric_count_tokens(char *str, char *delim);
char **_strtok(char *line, char *delim);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strncat(char *dest, const char *src, size_t n);
char b(int y);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
int ricfunc(int, int);
char **ric_replace_aliases(char **args);
char cfunc(int num);
char *ric_error_2_exit(char **args);
char *ric_error_2_cd(char **args);
char *_strchr(char *s, char c);
char firstfunc(int abc);
int (*ric_get_builtin(char *command))(char **args, char **front);
int ric_shellby_exit(char **args, char **front);
char *ric_error_2_syntax(char **args);
char *ric_error_126(char **args);
int ayofunc(int, int);
char *ric_error_127(char **args);
char *get_pid(void);
char *ric_get_env_value(char *beginning, int len);
char *def(int ef);
int ric_shellby_alias(char **args, char __attribute__((__unused__)) **front);
int ric_shellby_help(char **args, char __attribute__((__unused__)) **front);
char mychar(char *c, char *cc);
char *charfunc(char **cha);
char **_copyenv(void);
char **_getenv(const char *var);

typedef struct builtin_s
{
	char *name;
	int (*f)(char **argv, char **front);
} builtin_t;

int execute(char **args, char **front);
int *twofunc(char *c);
int ric_run_args(char **args, char **front, int *exe_ret);
int fun(int, int);
int ric_handle_args(int *exe_ret);
int goodfunc(int, int);
int ric_check_args(char **args);
int _strlen(const char *s);
int _strspn(char *s, char *accept);
int ric_shellby_cd(char **args, char __attribute__((__unused__)) **front);
int ric_call_args(char **args, char **front, int *exe_ret);
int ric_proc_file_commands(char *file_path, int *exe_ret);
int addfunc(int x, int y);
int multfunc(int x, int y);
int ric_create_error(char **args, int err);
int setterfunc(int, int);

typedef struct alias_s
{
	char *name;
	char *value;
	struct alias_s *next;
} ric_alias_t;

void ric_handle_line(char **line, ssize_t read);
int ric_cant_open(char *file_path);
void ric_variable_replacement(char **args, int *exe_ret);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void ric_assign_lineptr(char **lineptr, size_t *n, char *buffer, size_t b);
void ric_help_all(void);
int _strcmp(char *s1, char *s2);
void ric_help_alias(void);
void ric_sig_handler(int sig);
int getterfunc(int, int);
int execute(char **args, char **front);
int ric_shellby_unsetenv(char **args, char __attribute__((__unused__)) **front);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void free_list(list_t *head);
void help_cd(void);
void ric_free_alias_list(ric_alias_t *head);
void ric_help_unsetenv(void);
void help_history(void);
void ric_logical_ops(char *line, ssize_t *new_len);
void ric_free_args(char **args, char **front);
void ric_set_alias(char *var_name, char *value);
void ric_help_env(void);
void ric_help_setenv(void);
void ric_print_alias(ric_alias_t *alias);
void ric_help_exit(void);
void ric_help_help(void);
void ric_handle_line(char **line, ssize_t read);
list_t *ric_get_path_dir(char *path);
ric_alias_t *aliases;
void func1(char *jk);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
ric_alias_t *ric_add_alias_end(ric_alias_t **head, char *name, char *value);
list_t *ric_add_node_end(list_t **head, char *dir);
void ric_free_list(list_t *head);
int ric_shellby_env(char **args, char __attribute__((__unused__)) **front);
int ric_shellby_setenv(char **args, char __attribute__((__unused__)) **front);
char *ric_get_args(char *line, int *exe_ret);
ssize_t ric_get_new_len(char *line);


#endif /* _SHELL_H_ */
