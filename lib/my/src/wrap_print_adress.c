/*
** EPITECH PROJECT, 2021
** wrap_adresse.c
** File description:
** wrap print adress
*/

#include "my.h"
#include "struct.h"
#include "my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void wrap_print_adress(va_list ap)
{
    long n = va_arg(ap, long);
    my_putstr("0x");
    my_putstr(my_strlowcase(my_hexa(n)));
}
