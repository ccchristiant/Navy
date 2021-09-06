/*
** EPITECH PROJECT, 2021
** my_hexa.c
** File description:
** convert a decimal number into hexadecimal
*/

#include "struct.h"
#include "my.h"
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

char *my_hexa(long n)
{
    char *res = "";
    int tmp = 0;
    long nb = n;

    if (nb < 0)
        nb *= -1;
    for (int i = 0; nb != 0; i++) {
        tmp = nb % 16;
        if (tmp < 10)
            tmp += 48;
        else
            tmp += 55;
        res = my_strcat(res, my_ctostr(tmp));
        nb /= 16;
    }
    if (n < 0)
        res = my_strcat(res, my_ctostr('-'));
    my_revstr(res);
    res[my_strlen(res)] = '\0';
    return res;
}

void wrap_upper_hexa(va_list ap)
{
    my_putstr(my_hexa(va_arg(ap, int)));
}

void wrap_lower_hexa(va_list ap)
{
    my_putstr(my_strlowcase(my_hexa(va_arg(ap, int))));
}