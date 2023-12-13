#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

void exe(char **args, char **environ);
void rm_newline(char **str, ssize_t *bytes);
/* end MAIN_H */
#endif
