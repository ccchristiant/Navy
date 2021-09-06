/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** return 1 char
*/
#include "struct.h"
#include "my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void wrap_putchar(va_list ap)
{
    my_putchar((char) va_arg(ap, int));
}
