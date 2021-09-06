/*
** EPITECH PROJECT, 2021
** my_octal.c
** File description:
** convert integer into octal value
*/

#include "struct.h"
#include "my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

#include <stdlib.h>

int my_octal(int n)
{
    int res = 0;
    int i = 1;

    while (n != 0) {
        res += (n % 8) * i;
        n = n / 8;
        i = i * 10;
    }
    return res;
}

char *fill_octal(int n)
{
    char *nb = my_itoa(n);

    nb = my_revstr(nb);
    for (int i = my_strlen(nb); i < 3; i++) {
        nb = my_strcat(nb, "0");
    }
    my_revstr(nb);
    nb[my_strlen(nb)] = '\0';
    return nb;
}

void wrap_octal(va_list ap)
{
    my_putnbr(my_octal(va_arg(ap, int)));
}
