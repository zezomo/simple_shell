#ifndef PROJECTSHELL_H
#define PROJECTSHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>

/*Envariable command*/
char *_getenv(char *nptr);
void _env(void);
extern char **environ;

#endif
