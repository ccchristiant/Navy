/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** same as libc
*/

#include "struct.h"
#include "macro.h"
#include "my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

static const cpf tabcpf[13] = {
    {'l', &wrap_putnbr},
    {'c', &wrap_putchar},
    {'s', &wrap_putstr},
    {'S', &wrap_putstr_convert},
    {'d', &wrap_putnbr},
    {'u', &wrap_unsigned_number},
    {'i', &wrap_putnbr},
    {'o', &wrap_octal},
    {'%', &wrap_percent},
    {'p', &wrap_print_adress},
    {'X', &wrap_upper_hexa},
    {'x', &wrap_lower_hexa},
    {'b', &wrap_binary}
};

int check_tabcpf(char fmt, va_list ap)
{
    for (int i = 0; i < 13; i++) {
        if (tabcpf[0].c == fmt) {
            tabcpf[0].pf(ap);
            return 1;
        }
        if (tabcpf[i].c == fmt) {
            tabcpf[i].pf(ap);
            return 0;
        }
    }
    return 0;
}

int my_printf(char const *fmt, ...)
{
    va_list ap;

    va_start(ap, fmt);
    for (int j = 0; fmt[j]; j++) {
        if (fmt[j] == '%') {
            if (fmt[j + 1] == 'n')
                *va_arg(ap, int *) = j;
            if (check_tabcpf(fmt[j + 1], ap) == 1)
                j++;
            j++;
        }
        else
            my_putchar(fmt[j]);
    }
    va_end(ap);
    return 0;
}
