/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** function that allocates memory and copies the string given as argument in it.
*/
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));

    return my_strcpy(str, src);
}
