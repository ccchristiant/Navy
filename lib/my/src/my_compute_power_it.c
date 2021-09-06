/*
** EPITECH PROJECT, 2021
** my_compute_power_it.c
** File description:
** iterative function that returns the argument raised to the power p,
** where p is the second argument
*/

#include <stdio.h>

int my_compute_power_it(int nb, int p)
{
    int result = 1;
    int countp = 1;

    if (p == 0)
        return (1);
    while (countp <= p) {
        result *= nb;
        countp++;
    }
    return result;
}
