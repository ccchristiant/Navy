/*
** EPITECH PROJECT, 2021
** wrap_prct.c
** File description:
** wrap prct function
*/

#include "struct.h"
#include "my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void wrap_percent(__attribute__((unused)) va_list ap)
{
    my_putchar('%');
}
