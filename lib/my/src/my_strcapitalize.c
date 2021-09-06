/*
** EPITECH PROJECT, 2021
** my_strcapitalize.c
** File description:
** capitalize the first letter of each word
*/
#include <stdio.h>
#include "my.h"

char *my_strcapitalize(char *str)
{
    if (my_strlen(str) == 0)
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        str[0] = str[0] - 32;
        if (str[i-1] == ' ' || str[i-1] == '-' || str[i-1] == '+')
            str[i] = str[i] - 32;
    }
    return str;
}
