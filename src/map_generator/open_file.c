/*
** EPITECH PROJECT, 2021
** open_file.c
** File description:
** opens a read only file and return the file descriptor
*/

#include "my.h"
#include "macro.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int open_file(char const *filepath)
{
    int filedesc = open(filepath, O_RDONLY);

    if (filedesc > 0) {
        return filedesc;
    }
    else {
        return (EXIT_ERROR_OPEN);
    }
}
