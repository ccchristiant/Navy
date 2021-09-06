/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** display either N if integer is negative or P if positive or null
*/
#include <unistd.h>
#include "my.h"

int my_isneg(int n)
{
    n = (n >= 0) ? 'P' : 'N';
    return n;
}
