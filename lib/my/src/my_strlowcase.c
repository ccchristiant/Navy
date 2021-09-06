/*
** EPITECH PROJECT, 2021
** my_strlowcase.c
** File description:
** puts every letter of every word in it in low case
*/
#include <stdio.h>

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    return (str);
}
