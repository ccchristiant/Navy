/*
** EPITECH PROJECT, 2021
** my_nbrlen.c
** File description:
** return the number of digit of a number
*/

int my_nbrlen(int nb)
{
    int intlen = 0;

    if (nb == 0)
        return 1;
    for (int i = 0; nb != 0; i++) {
        nb = nb / 10;
        intlen++;
    }
    return (intlen);
}
