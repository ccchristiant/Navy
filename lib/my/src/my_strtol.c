/*
** EPITECH PROJECT, 2021
** my_strtol.c
** File description:
** converts the begining of a string into a parameter
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int my_strtol(char const *src, char **end_ptr)
{
    char *str = my_strdup(src);
    int nb = 0;
    int n = 1;
    int i = 0;

    for (; my_isnum(str[i]) == 0; i++) {
        if (str[i] == '+')
            n = 1;
        if (str[i] == '-')
            n *= -1;
    }
    for (; str[i] >= '0' && str[i] <= '9'; i++) {
        *end_ptr = &str[i + 1];
        nb = (nb * 10 + (str[i] - '0'));
        if (nb < 0 && n == 1)
            return (2147483647);
        if (nb < 0 && n == - 1)
            return (-2147483648);
    }
    return (nb * n);
}
