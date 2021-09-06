/*
** EPITECH PROJECT, 2021
** my_str_isalpha.c
** File description:
** returns 1 if the string contains only alphabetical
** characters, 0 if it contains other type of character
*/
#include <stdio.h>

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') || str[i] == ' ')
            i++;
        else
            return (0);
    }
    return (1);
}
