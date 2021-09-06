/*
** EPITECH PROJECT, 2021
** my_nbrtostr.c
** File description:
** return a string with an int as parameter
*/

#include "my.h"
#include "macro.h"
#include <stdlib.h>
#include <stdio.h>

char *my_itoa(int nb)
{
    int nbrlen = my_nbrlen(nb);
    char *result = malloc(sizeof(char) * (nbrlen + 2));

    for (int i = 0; nb != 0; i++) {
        result[i] = ITOC(nb % 10);
        nb = nb / 10;
    }
    result[nbrlen] = '\0';
    return result = my_revstr(result);
}
