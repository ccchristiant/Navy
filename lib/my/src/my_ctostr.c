/*
** EPITECH PROJECT, 2021
** my_chartostr.c
** File description:
** convert a char into a string
*/

#include <stdlib.h>

char *my_ctostr(char c)
{
    char *str = malloc(sizeof(char) * 2);

    str[0] = c;
    str[1] = '\0';
    return str;
}
