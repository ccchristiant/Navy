/*
** EPITECH PROJECT, 2021
** load_file_in_mem.c
** File description:
** load a map content in memory
*/

#include "my.h"
#include "navy.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>

char *load_file_in_mem(char const *filepath, int n)
{
    int fd = open_file(filepath);
    char *buff = NULL;
    int size = 0;
    if (n == 1)
        size = 32;
    else
        size = 180;
    buff = malloc(sizeof(char) * (size + 1));
    read(fd, buff, size);
    buff[size] = '\0';
    close(fd);
    return buff;
}