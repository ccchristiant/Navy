/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** display one-by-one the character of a string
*/
#include "struct.h"
#include "my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int my_strlen(char const *str);

int my_putstr(char const *str)
{
    return write(1, str, my_strlen(str));
}

void wrap_putstr(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void wrap_putstr_convert(va_list ap)
{
    char *str = va_arg(ap, char *);

    for (int i = 0; str[i]; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putstr("\\");
            my_putstr(fill_octal(my_octal(str[i])));
        }
        else
            my_putchar(str[i]);
    }
}
