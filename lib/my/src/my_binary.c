/*
** EPITECH PROJECT, 2021
** my_binary.c
** File description:
** convert decimal to binary
*/

#include "struct.h"
#include "my.h"
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

char *my_binary(int n)
{
    char *res = "";
    int tmp = 0;

    for (int i = 0; n != 0; i++) {
        tmp = n % 2;
        tmp += 48;
        res = my_strcat(res, my_ctostr(tmp));
        n /= 2;
    }
    my_revstr(res);
    res[my_strlen(res)] = '\0';
    return res;
}

void wrap_binary(va_list ap)
{
    my_putstr(my_binary(va_arg(ap, int)));
}
