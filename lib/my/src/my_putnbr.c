/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** display the number given as parameter
*/

#include "struct.h"
#include "my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int my_putnbr(int nb)
{
    int mod = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb >= 10) {
        mod = (nb % 10);
        nb = ((nb - mod) / 10);
        my_putnbr(nb);
        my_putchar(48 + mod);
    }
    else
        my_putchar(48 + nb % 10);
    return (0);
}

void wrap_putnbr(va_list ap)
{
    my_putnbr(va_arg(ap, int));
}
